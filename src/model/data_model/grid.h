#pragma once

#include <iostream>
#include <array>
#include "cell.h"

typedef std::array<std::array<Cell, 9>, 9> CellGrid;

class Grid
{
public:
    Grid() : solved(false) {};
    inline bool is_solved() const { return solved; };
    inline CellGrid getCells() const { return cells; }
    inline void solve() { solved = true; };
private:
    bool solved;
    CellGrid cells;
};

std::ostream & operator<<(std::ostream& stream, Grid const& grid);
