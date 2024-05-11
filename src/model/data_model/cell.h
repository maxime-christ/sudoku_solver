#pragma once

#include<set>
#include<iostream>
#include "container.h"
class Grid;

class Cell
{
public:
    Cell();
    int removeTag(int tag);
    inline std::set<int> getTags() const { return tags; };
    inline int getValue() const { return value; };

protected:
    inline void setValue(int val) { value = val; };
    inline void setRow(Container* r) { row = r; };
    inline void setColumn(Container* col) { column = col; };
    inline void setSquare(Container* sq) { square = sq; };
    friend Grid;

private:
    int value;
    std::set<int> tags;
    Container* row;
    Container* column;
    Container* square;
    static const int INIT_TAGS[9];
};

std::ostream & operator<<(std::ostream& stream, Cell const& cell);
