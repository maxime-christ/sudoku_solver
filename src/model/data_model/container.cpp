#include <cassert>
#include "container.h"
#include "cell.h"

Container::Container(std::array<Cell*,9> c)
{
    assert(std::size(c) == 9);
    cells = c;
}
