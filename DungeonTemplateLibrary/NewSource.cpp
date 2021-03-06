﻿#include "DTL.hpp"
#include <array>

int main() {

	using dungeon_t = std::uint_fast8_t;
	constexpr std::size_t x_size{ 18 };
	constexpr std::size_t y_size{ 12 };

	std::array<std::array<dungeon_t, x_size>, y_size> dungeon_stl_matrix{ {} };
	dungeon_t dungeon_default_matrix[y_size][x_size]{};
	dungeon_t dungeon_array_matrix[x_size*y_size]{};

	//---------- Border ----------

	dtl::dungeonPuts("-- Border STL Function --");
	dtl::dungeonInit(dungeon_stl_matrix);
	dtl::createBorder(dungeon_stl_matrix);
	dtl::dungeonStringOutputBool(dungeon_stl_matrix, "■", "　");

	dtl::dungeonPuts("-- Border Default Function --");
	dtl::dungeonInit(dungeon_default_matrix, x_size, y_size);
	dtl::createBorder(dungeon_default_matrix, x_size, y_size);
	dtl::dungeonStringOutputBool(dungeon_default_matrix, x_size, y_size, "■", "　");

	dtl::dungeonPuts("-- Border Array Function --");
	dtl::dungeonInit_Array(dungeon_array_matrix, x_size, y_size);
	dtl::createBorder_Array(dungeon_array_matrix, x_size, y_size);
	dtl::dungeonStringOutputBool_Array(dungeon_array_matrix, x_size, y_size, "■", "　");

	dtl::dungeonPuts("-- Border STL Class --");
	dtl::dungeonInit(dungeon_stl_matrix);
	dtl::Border<dungeon_t> border_stl(dungeon_stl_matrix);
	dtl::dungeonStringOutputBool(dungeon_stl_matrix, "■", "　");

	dtl::dungeonPuts("-- Border Default Class --");
	dtl::dungeonInit(dungeon_default_matrix, x_size, y_size);
	dtl::Border<dungeon_t> border_default(dungeon_default_matrix, x_size, y_size);
	dtl::dungeonStringOutputBool(dungeon_default_matrix, x_size, y_size, "■", "　");

	dtl::dungeonPuts("-- Border Array Class --");
	dtl::dungeonInit_Array(dungeon_array_matrix, x_size, y_size);
	dtl::Border_Array<dungeon_t> border_array(dungeon_array_matrix, x_size, y_size);
	dtl::dungeonStringOutputBool_Array(dungeon_array_matrix, x_size, y_size, "■", "　");

	//---------- BorderOdd ----------

	dtl::dungeonPuts("-- BorderOdd STL Function --");
	dtl::dungeonInit(dungeon_stl_matrix);
	dtl::createBorderOdd(dungeon_stl_matrix);
	dtl::dungeonStringOutputBool(dungeon_stl_matrix, "■", "　");

	dtl::dungeonPuts("-- BorderOdd Default Function --");
	dtl::dungeonInit(dungeon_default_matrix, x_size, y_size);
	dtl::createBorderOdd(dungeon_default_matrix, x_size, y_size);
	dtl::dungeonStringOutputBool(dungeon_default_matrix, x_size, y_size, "■", "　");

	dtl::dungeonPuts("-- BorderOdd Array Function --");
	dtl::dungeonInit_Array(dungeon_array_matrix, x_size, y_size);
	dtl::createBorderOdd_Array(dungeon_array_matrix, x_size, y_size);
	dtl::dungeonStringOutputBool_Array(dungeon_array_matrix, x_size, y_size, "■", "　");

	dtl::dungeonPuts("-- BorderOdd STL Class --");
	dtl::dungeonInit(dungeon_stl_matrix);
	dtl::BorderOdd<dungeon_t> border_odd_stl(dungeon_stl_matrix);
	dtl::dungeonStringOutputBool(dungeon_stl_matrix, "■", "　");

	dtl::dungeonPuts("-- BorderOdd Default Class --");
	dtl::dungeonInit(dungeon_default_matrix, x_size, y_size);
	dtl::BorderOdd<dungeon_t> border_odd_default(dungeon_default_matrix, x_size, y_size);
	dtl::dungeonStringOutputBool(dungeon_default_matrix, x_size, y_size, "■", "　");

	dtl::dungeonPuts("-- BorderOdd Array Class --");
	dtl::dungeonInit_Array(dungeon_array_matrix, x_size, y_size);
	dtl::BorderOdd_Array<dungeon_t> border_odd_array(dungeon_array_matrix, x_size, y_size);
	dtl::dungeonStringOutputBool_Array(dungeon_array_matrix, x_size, y_size, "■", "　");

	//---------- PointGrid ----------

	dtl::dungeonPuts("-- PointGrid STL Function --");
	dtl::dungeonInit(dungeon_stl_matrix);
	dtl::createPointGrid(dungeon_stl_matrix);
	dtl::dungeonStringOutputBool(dungeon_stl_matrix, "■", "　");

	dtl::dungeonPuts("-- PointGrid Default Function --");
	dtl::dungeonInit(dungeon_default_matrix, x_size, y_size);
	dtl::createPointGrid(dungeon_default_matrix, x_size, y_size);
	dtl::dungeonStringOutputBool(dungeon_default_matrix, x_size, y_size, "■", "　");

	dtl::dungeonPuts("-- PointGrid Array Function --");
	dtl::dungeonInit_Array(dungeon_array_matrix, x_size, y_size);
	dtl::createPointGrid_Array(dungeon_array_matrix, x_size, y_size);
	dtl::dungeonStringOutputBool_Array(dungeon_array_matrix, x_size, y_size, "■", "　");

	dtl::dungeonPuts("-- PointGrid STL Class --");
	dtl::dungeonInit(dungeon_stl_matrix);
	dtl::PointGrid<dungeon_t> point_grid_stl(dungeon_stl_matrix);
	dtl::dungeonStringOutputBool(dungeon_stl_matrix, "■", "　");

	dtl::dungeonPuts("-- PointGrid Default Class --");
	dtl::dungeonInit(dungeon_default_matrix, x_size, y_size);
	dtl::PointGrid<dungeon_t> point_grid_default(dungeon_default_matrix, x_size, y_size);
	dtl::dungeonStringOutputBool(dungeon_default_matrix, x_size, y_size, "■", "　");

	dtl::dungeonPuts("-- PointGrid Array Class --");
	dtl::dungeonInit_Array(dungeon_array_matrix, x_size, y_size);
	dtl::PointGrid_Array<dungeon_t> point_grid_array(dungeon_array_matrix, x_size, y_size);
	dtl::dungeonStringOutputBool_Array(dungeon_array_matrix, x_size, y_size, "■", "　");

	//---------- PointGridField ----------

	dtl::dungeonPuts("-- PointGridField STL Function --");
	dtl::dungeonInit(dungeon_stl_matrix);
	dtl::createPointGridField(dungeon_stl_matrix);
	dtl::dungeonStringOutputBool(dungeon_stl_matrix, "■", "　");

	dtl::dungeonPuts("-- PointGridField Default Function --");
	dtl::dungeonInit(dungeon_default_matrix, x_size, y_size);
	dtl::createPointGridField(dungeon_default_matrix, x_size, y_size);
	dtl::dungeonStringOutputBool(dungeon_default_matrix, x_size, y_size, "■", "　");

	dtl::dungeonPuts("-- PointGridField Array Function --");
	dtl::dungeonInit_Array(dungeon_array_matrix, x_size, y_size);
	dtl::createPointGridField_Array(dungeon_array_matrix, x_size, y_size);
	dtl::dungeonStringOutputBool_Array(dungeon_array_matrix, x_size, y_size, "■", "　");

	dtl::dungeonPuts("-- PointGridField STL Class --");
	dtl::dungeonInit(dungeon_stl_matrix);
	dtl::PointGridField<dungeon_t> point_grid_field_stl(dungeon_stl_matrix);
	dtl::dungeonStringOutputBool(dungeon_stl_matrix, "■", "　");

	dtl::dungeonPuts("-- PointGridField Default Class --");
	dtl::dungeonInit(dungeon_default_matrix, x_size, y_size);
	dtl::PointGridField<dungeon_t> point_grid_field_default(dungeon_default_matrix, x_size, y_size);
	dtl::dungeonStringOutputBool(dungeon_default_matrix, x_size, y_size, "■", "　");

	dtl::dungeonPuts("-- PointGridField Array Class --");
	dtl::dungeonInit_Array(dungeon_array_matrix, x_size, y_size);
	dtl::PointGridField_Array<dungeon_t> point_grid_field_array(dungeon_array_matrix, x_size, y_size);
	dtl::dungeonStringOutputBool_Array(dungeon_array_matrix, x_size, y_size, "■", "　");

	//---------- PointGridFieldPutBlock ----------

	//dtl::dungeonPuts("-- PointGridFieldPutBlock STL Function --");
	//dtl::dungeonInit(dungeon_stl_matrix);
	//dtl::createPointGridFieldPutBlock(dungeon_stl_matrix);
	//dtl::dungeonStringOutputBool(dungeon_stl_matrix, "■", "　");

	//dtl::dungeonPuts("-- PointGridFieldPutBlock Default Function --");
	//dtl::dungeonInit(dungeon_default_matrix, x_size, y_size);
	//dtl::createPointGridFieldPutBlock(dungeon_default_matrix, x_size, y_size);
	//dtl::dungeonStringOutputBool(dungeon_default_matrix, x_size, y_size, "■", "　");

	//dtl::dungeonPuts("-- PointGridFieldPutBlock Array Function --");
	//dtl::dungeonInit_Array(dungeon_array_matrix, x_size, y_size);
	//dtl::createPointGridFieldPutBlock_Array(dungeon_array_matrix, x_size, y_size);
	//dtl::dungeonStringOutputBool_Array(dungeon_array_matrix, x_size, y_size, "■", "　");

	dtl::dungeonPuts("-- PointGridFieldPutBlock STL Class --");
	dtl::dungeonInit(dungeon_stl_matrix);
	dtl::PointGridFieldPutBlock<dungeon_t> point_grid_field_put_block_stl(dungeon_stl_matrix);
	dtl::dungeonStringOutput(dungeon_stl_matrix, "　", "■", "□");

	dtl::dungeonPuts("-- PointGridFieldPutBlock Default Class --");
	dtl::dungeonInit(dungeon_default_matrix, x_size, y_size);
	dtl::PointGridFieldPutBlock<dungeon_t> point_grid_field_put_block_default(dungeon_default_matrix, x_size, y_size);
	//dtl::dungeonStringOutput(dungeon_default_matrix, x_size, y_size, "　", "■", "□");
	dtl::dungeonStringOutputBool(dungeon_default_matrix, x_size, y_size, "■", "　");

	dtl::dungeonPuts("-- PointGridFieldPutBlock Array Class --");
	dtl::dungeonInit_Array(dungeon_array_matrix, x_size, y_size);
	dtl::PointGridFieldPutBlock_Array<dungeon_t> point_grid_field_put_block_array(dungeon_array_matrix, x_size, y_size);
	//dtl::dungeonStringOutput_Array(dungeon_array_matrix, x_size, y_size, "　", "■", "□");
	dtl::dungeonStringOutputBool_Array(dungeon_array_matrix, x_size, y_size, "■", "　");

	//---------- Chess ----------

	dtl::dungeonPuts("-- Chess STL Class --");
	dtl::dungeonInit(dungeon_stl_matrix);
	dtl::Chess<dungeon_t> chess_stl(dungeon_stl_matrix);
	dtl::dungeonStringOutput(dungeon_stl_matrix, "・", "１", "一", "２", "二", "３", "三", "４", "四", "５", "五", "６", "六");

	return 0;
}