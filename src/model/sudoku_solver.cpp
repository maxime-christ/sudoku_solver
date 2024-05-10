#include <cassert>
#include <fstream>
#include <sstream>
#include "sudoku_solver.h"

void SudokuSolver::init_from_file(std::string& filename)
{
    std::cout << "Reading file " << filename << std::endl;
    std::ifstream input {filename};

    if (!input.is_open())
    {
        std::cerr << "Couldn't read file!" << std::endl;
        std::exit(1);
    }

    int i = 0;
    int x, y;
    std::string line;
    while(std::getline(input, line))
    {
        std::istringstream ss(std::move(line));
        std::string token;
        while(std::getline(ss, token, ','))
        {
            if (!token.empty())
            {
                x = i / 9;
                y = i % 9;
                std::cout << "Token at (" << x << ',' << y << ") is " << token << std::endl;
            }

            i++;
        }
    }
}

void SudokuSolver::solve()
{
    // TODO: Solve it!
    std::cout << "Sudoku solved!" << std::endl;
}

Grid SudokuSolver::solution() const
{
    assert(grid.is_solved());
    return grid;
}
