#include <cassert>
#include "container.h"
#include "cell.h"

Container::Container(std::set<Cell*> c)
{
    assert(std::size(c) == 9);
    cells = c;
}
