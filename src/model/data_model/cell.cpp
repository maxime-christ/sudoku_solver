#include "cell.h"

const int Cell::INIT_TAGS[9] {1,2,3,4,5,6,7,8,9};

Cell::Cell()
{
    value = 0;
    tags = std::set<int>(std::begin(INIT_TAGS), std::end(INIT_TAGS));
}

std::ostream & operator<<(std::ostream& stream, Cell const& cell)
{
    if (cell.getValue() != 0)
        stream << cell.getValue();
    else
        stream << ' ';

    return stream;
}

