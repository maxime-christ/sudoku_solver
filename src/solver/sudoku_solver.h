#pragma once

#include <iostream>
#include "../model/data_model/grid.h"

class SudokuSolver
{
public:
    void init_from_file(std::string& filename);
    void solve();
    Grid solution() const;
private:
    Grid grid;
};
