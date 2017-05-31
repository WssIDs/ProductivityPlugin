#pragma once

#include "ProductivityPluginModule.h"
#include "GameFramework/Actor.h"
#include "Runtime/Engine/Classes/Components/InstancedStaticMeshComponent.h"
#include "InstancedMeshWrapper.generated.h"

/**
*
*/
UCLASS()
class PRODUCTIVITYPLUGIN_API AInstancedMeshWrapper : public AActor
{
	GENERATED_BODY()

public:

	AInstancedMeshWrapper();

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Meshes")
	UInstancedStaticMeshComponent* InstancedMeshes;
};
