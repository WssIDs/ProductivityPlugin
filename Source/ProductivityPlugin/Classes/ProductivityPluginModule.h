// Some copyright should be here...

#pragma once

#include "CoreMinimal.h"
#include "ModuleManager.h"
#include "Engine/Engine.h"
#include "Runtime/Networking/Public/Interfaces/IPv4/IPv4Endpoint.h"
#include "Runtime/Engine/Public/Tickable.h"
#include "ProductivityTypes.h"

class FProductivityTickObject : FTickableGameObject
{
public:
	FProductivityTickObject(class FProductivityPluginModule *_Owner);

	virtual void Tick(float DeltaTime);

	virtual bool IsTickable() const
	{
		return true;
	}
	virtual bool IsTickableWhenPaused() const
	{
		return true;
	}
	virtual bool IsTickableInEditor() const
	{
		return false;
	}
	virtual TStatId GetStatId() const override;

private:
	class FProductivityPluginModule *Owner;
};

class FProductivityPluginModule : public IModuleInterface
{
public:
	FProductivityPluginModule();

	/** IModuleInterface implementation */
	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	virtual bool SupportsDynamicReloading() override
	{
		return true;
	}

	void Tick(float DeltaTime);
#if WITH_EDITOR
	/** Tools **/
	
	/** This function will be bound to Command.*/
	void StaticToInstancedClicked();

	/** Server **/
	bool HandleListenerConnectionAccepted(class FSocket* ClientSocket, const FIPv4Endpoint& ClientEndpoint);
#endif
	
protected:

#if WITH_EDITOR
	void AddToolbarExtension(class FToolBarBuilder &);
	void AddMenuExtension(class FMenuBuilder &);
	void ProcessMessage(const FProductivityNetworkMessage& Message);
	void ProcessAddStaticMesh(const FProductivityNetworkMessage& Message);
#endif

	// Callback for when the settings were saved.
	bool HandleSettingsSaved();

	/**
	* Checks whether the Productivity Server is supported.
	* @return true if supported, false otherwise.
	*/
	bool SupportsProductivityServer() const;


private:
#if WITH_EDITOR
	TSharedPtr<class FUICommandList> PluginCommands;
	
	FProductivityTickObject* TickObject;
	class FTcpListener *Listener;
	TQueue<class FSocket*, EQueueMode::Mpsc> PendingClients;
	TArray<class FSocket*> Clients;
#endif
};



// You should place include statements to your module's private header files here.  You only need to
// add includes for headers that are used in most of your module's source files though.

DECLARE_LOG_CATEGORY_EXTERN(LogProductivityPlugin, VeryVerbose, All);

/* Private constants
*****************************************************************************/

/**
* Defines the default IP endpoint for the Slate Remote server running in the Editor.
*/
#define PRODUCTIVITY_SERVER_DEFAULT_EDITOR_ENDPOINT FIPv4Endpoint(FIPv4Address(127, 0, 0, 1), 51234)

/**
* Defines the protocol version of the UDP message transport.
*/
#define PRODUCTIVITY_SERVER_PROTOCOL_VERSION 1