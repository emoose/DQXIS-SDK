#pragma once

// Name: DQXIS, Version: 1.0.0

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

namespace SDK
{
//---------------------------------------------------------------------------
// Classes
//---------------------------------------------------------------------------

// Class MRMesh.MeshReconstructorBase
// 0x0000 (0x0038 - 0x0038)
class UMeshReconstructorBase : public UObject
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MRMesh.MeshReconstructorBase");
		return ptr;
	}


	void StopReconstruction();
	void StartReconstruction();
	void PauseReconstruction();
	bool IsReconstructionStarted();
	bool IsReconstructionPaused();
	void DisconnectMRMesh();
	struct FMRMeshConfiguration ConnectMRMesh(class UMRMeshComponent* Mesh);
};


// Class MRMesh.MRMeshComponent
// 0x0050 (0x0780 - 0x0730)
class UMRMeshComponent : public UPrimitiveComponent
{
public:
	unsigned char                                      UnknownData00[0x8];                                       // 0x0730(0x0008) MISSED OFFSET
	class UMaterialInterface*                          Material;                                                 // 0x0738(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	class UMeshReconstructorBase*                      MeshReconstructor;                                        // 0x0740(0x0008) (Edit, ZeroConstructor, IsPlainOldData)
	bool                                               bEnableCollision;                                         // 0x0748(0x0001) (Edit, ZeroConstructor, IsPlainOldData)
	unsigned char                                      UnknownData01[0x7];                                       // 0x0749(0x0007) MISSED OFFSET
	TArray<class UBodySetup*>                          BodySetups;                                               // 0x0750(0x0010) (ZeroConstructor, Transient)
	unsigned char                                      UnknownData02[0x20];                                      // 0x0760(0x0020) MISSED OFFSET

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("Class MRMesh.MRMeshComponent");
		return ptr;
	}


	class UMeshReconstructorBase* GetReconstructor();
	void ConnectReconstructor(class UMeshReconstructorBase* Reconstructor);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
