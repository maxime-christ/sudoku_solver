#pragma once

#include <set>
class Cell;

class Container
{
public:
    Container(std::set<Cell*> c);
private:
    std::set<Cell*> cells; // always 9 though
};
