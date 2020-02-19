// Fill out your copyright notice in the Description page of Project Settings.

#include "DDPawn.h"

// Sets default values
ADDPawn::ADDPawn()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

}

// Called when the game starts or when spawned
void ADDPawn::BeginPlay()
{
	Super::BeginPlay();

	//�Զ�ע��
	RegisterToModule(ModuleName, ObjectName, ClassName);
}


void ADDPawn::DDRelease()
{
	IDDOO::DDRelease();
	//�ܵ������������ôһ����ע�ᵽ�˿��,��ȡ������һ����Ϊ��
	GetDDWorld()->DestroyActor(this);
}
