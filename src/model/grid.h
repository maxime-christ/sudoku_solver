#pragma once

#include <iostream>

class Grid
{
public:
    Grid() : solved(false) {};
    inline bool is_solved() { return solved; };
private:
    bool solved;
};

std::ostream & operator<<(std::ostream& stream, Grid const& grid);
