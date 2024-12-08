#pragma once

static class FLilHelper {
public:

	static void IndexToGridPosition(const int32 Index, const int32 ColumnsCount, int32& OutRow, int32& OutColumn) {
		OutRow = Index / ColumnsCount;
		OutColumn = Index % ColumnsCount;
	}

	static int32 GridPositionToIndex(const int32 Row, const int32 Column, const int32 ColumnSize) {
		return Row * ColumnSize + Column;
	}
};