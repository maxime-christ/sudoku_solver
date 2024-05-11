#pragma once

#include <iostream>
#include <array>
#include <vector>

#include "cell.h"

typedef std::array<std::array<Cell, 9>, 9> CellGrid;

class Grid
{
public:
    Grid();
    ~Grid();
    inline bool is_solved() const { return solved; };
    inline CellGrid getCells() const { return cells; }
    inline void solve() { solved = true; };
private:
    bool solved;
    CellGrid cells;
    std::vector<Container*> rows;
    std::vector<Container*> columns;
    std::vector<Container*> squares;
};

std::ostream & operator<<(std::ostream& stream, Grid const& grid);
