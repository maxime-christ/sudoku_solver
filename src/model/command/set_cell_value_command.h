#pragma once

#include "command.h"

// Circular dependecy
class SudokuSolver;

class SetCellValueCommand : public Command
{
public:
    SetCellValueCommand(SudokuSolver &aSolver, int aX, int aY, int aValue);
    void execute();
private:
    SudokuSolver& solver;
    int x, y, value;
};
