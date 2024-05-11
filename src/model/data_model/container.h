#pragma once

#include <array>
class Cell;

class Container
{
public:
    Container(std::array<Cell*,9> c);
private:
    std::array<Cell*,9> cells;
};
