// #include "grid.h"

class SudokuSolver
{
public:
    std::string filename;

    SudokuSolver(std::string f) : filename(f) {};
    ~SudokuSolver() {};

    void solve();
};
