#include <cassert>
#include "sudoku_solver.h"

void SudokuSolver::init_from_file(std::string& filename)
{
    std::cout << "Reading file " << filename << std::endl;
    solution_ready = true;

    // Loop through CSV and push_back events to constraint_event_list
}

void SudokuSolver::solve()
{
    // TODO: Solve it!
    std::cout << "Sudoku solved!" << std::endl;
}

Grid SudokuSolver::solution() const
{
    assert(solution_ready);
    return grid;
}
