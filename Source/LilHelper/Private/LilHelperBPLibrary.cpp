// Copyright Epic Games, Inc. All Rights Reserved.


#include "LilHelperBPLibrary.h"

#include "LilHelperLite.h"
class FObjectInitializer;

ULilHelperBPLibrary::ULilHelperBPLibrary(const FObjectInitializer& ObjectInitializer)
: Super(ObjectInitializer)
{

}

void ULilHelperBPLibrary::IndexToGridPosition(const int32 Index, const int32 ColumnsCount, int32& OutRow, int32& OutColumn) {
	FLilHelper::IndexToGridPosition(Index, ColumnsCount, OutRow, OutColumn);
}

int32 ULilHelperBPLibrary::GridPositionToIndex(const int32 Row, const int32 Column, const int32 ColumnSize) {
	return FLilHelper::GridPositionToIndex(Row, Column, ColumnSize);
}
