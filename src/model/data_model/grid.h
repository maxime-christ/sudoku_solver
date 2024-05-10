#pragma once

#include <iostream>

class Grid
{
public:
    Grid() : solved(false) {};
    inline bool is_solved() const { return solved; };
    inline void solve() { solved = true; };
private:
    bool solved;
};

std::ostream & operator<<(std::ostream& stream, Grid const& grid);
