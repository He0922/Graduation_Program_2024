// Fill out your copyright notice in the Description page of Project Settings.


#include "Inventory/Widget/PackageWidget.h"

void UPackageWidget::OpenPackageFunc()
{
	OnOpenPackage();
}

void UPackageWidget::ClosePackageFunc()
{
	OnClosePackage();
}
