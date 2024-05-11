#include "set_cell_value_command.h"
#include "../../solver/sudoku_solver.h"

SetCellValueCommand::SetCellValueCommand(SudokuSolver& aSolver, int aX, int aY, int aValue) :
    solver(aSolver), x(aX), y(aY), value(aValue)
{
}

void SetCellValueCommand::execute()
{
    solver.setCellValue(x, y, value);
}
