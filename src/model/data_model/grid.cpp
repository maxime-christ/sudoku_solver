#include "grid.h"
#include <vector>

Grid::Grid() : solved(false)
{
    std::array<std::array<Cell*,9>,9> cell_ptr_rows;
    std::array<std::array<Cell*,9>,9> cell_ptr_columns;
    std::array<std::array<Cell*,9>,9> cell_ptr_squares;

    int square_index;
    int square_internal_index;
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            Cell* cell_ptr = &cells[i][j];
            cell_ptr_rows[i][j] = cell_ptr;
            cell_ptr_columns[j][i] = cell_ptr;

            square_index = (i/3 * 3) + j/3;
            square_internal_index = (i%3 * 3) + j%3;
            cell_ptr_squares[square_index][square_internal_index] = cell_ptr;
        }
    }

    for(auto cell_ptr_row: cell_ptr_rows)
    {
        Container* row = new Container(cell_ptr_row);
        rows.push_back(row);
        for(auto cell_ptr: cell_ptr_row)
            cell_ptr->setRow(row);
    }

    for(auto cell_ptr_col: cell_ptr_columns)
    {
        Container* column = new Container(cell_ptr_col);
        columns.push_back(column);
        for(auto cell_ptr: cell_ptr_col)
            cell_ptr->setColumn(column);
    }

    for(auto cell_ptr_square: cell_ptr_squares)
    {
        Container* square = new Container(cell_ptr_square);
        squares.push_back(square);
        for(auto cell_ptr: cell_ptr_square)
            cell_ptr->setSquare(square);
    }
}

Grid::~Grid()
{
    for(auto row: rows)
        delete row;
    for(auto column: columns)
        delete column;
    for(auto square: squares)
        delete square;
}

std::ostream & operator<<(std::ostream& stream, Grid const& grid)
{
    stream << " _ _ _ _ _ _ _ _ _ " << std::endl;
    CellGrid cells = grid.getCells();
    for(auto row: cells)
    {
        stream << '|';
        for(auto cell: row)
            stream << cell << '|';
        stream << std::endl;
    }
    stream << " ¯ ¯ ¯ ¯ ¯ ¯ ¯ ¯ ¯ " << std::endl;

    return stream;
}
