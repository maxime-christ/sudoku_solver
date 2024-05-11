#include "grid.h"

std::ostream & operator<<(std::ostream& stream, Grid const& grid)
{
    stream << " _ _ _ _ _ _ _ _ _ " << std::endl;
    CellGrid cells = grid.getCells();
    for(auto row: cells)
    {
        stream << '|';
        for(auto cell: row)
            stream << cell << '|';
        stream << std::endl;
    }
    stream << " ¯ ¯ ¯ ¯ ¯ ¯ ¯ ¯ ¯ " << std::endl;

    return stream;
}
