// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "LilHelperBPLibrary.generated.h"

/* 
*	Function library class.
*	Each function in it is expected to be static and represents blueprint node that can be called in any blueprint.
*
*	When declaring function you can define metadata for the node. Key function specifiers will be BlueprintPure and BlueprintCallable.
*	BlueprintPure - means the function does not affect the owning object in any way and thus creates a node without Exec pins.
*	BlueprintCallable - makes a function which can be executed in Blueprints - Thus it has Exec pins.
*	DisplayName - full name of the node, shown when you mouse over the node and in the blueprint drop down menu.
*				Its lets you name the node using characters not allowed in C++ function names.
*	CompactNodeTitle - the word(s) that appear on the node.
*	Keywords -	the list of keywords that helps you to find node when you search for it using Blueprint drop-down menu. 
*				Good example is "Print String" node which you can find also by using keyword "log".
*	Category -	the category your node will be under in the Blueprint drop-down menu.
*
*	For more info on custom blueprint nodes visit documentation:
*	https://wiki.unrealengine.com/Custom_Blueprint_Node_Creation
*/
UCLASS()
class ULilHelperBPLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_UCLASS_BODY()
	/**
	 * Convert a provided index to be a specific position on a grid
	 * @param Index 
	 * @param ColumnsCount 
	 * @param OutRow 
	 * @param OutColumn 
	 */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Convert Index to Grid position", Keywords = "LilHelper Math MathHelper Index Grid Convert Position Inventory"), Category = "MathHelper")
	static void IndexToGridPosition(const int32 Index, const int32 ColumnsCount, int32& OutRow, int32& OutColumn);

	/**
	 * Convert a position on a grid to be a specific index in an array
	 * @return Index
	 */
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Convert Grid position to Index", Keywords = "LilHelper Index Grid Convert Position Inventory "), Category = "MathHelper")
	static int32 GridPositionToIndex(const int32 Row, const int32 Column, const int32 ColumnSize);
	
};
