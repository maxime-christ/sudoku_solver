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
    void fill(int& x, int& y, int& value);
    inline void solve() { solved = true; };

    inline bool is_solved() const { return solved; };
    inline CellGrid getCells() const { return cells; }
private:
    bool solved;
    CellGrid cells;
    std::vector<Container*> rows;
    std::vector<Container*> columns;
    std::vector<Container*> squares;
};

std::ostream & operator<<(std::ostream& stream, Grid const& grid);
