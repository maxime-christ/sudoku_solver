#include <cassert>
#include <fstream>
#include <sstream>
#include "sudoku_solver.h"

void SudokuSolver::init_from_file(std::string& filename)
{
    std::cout << "Reading file " << filename << std::endl;
    std::ifstream input(filename);

    if (!input.is_open())
    {
        std::cerr << "Couldn't read file!" << std::endl;
        std::exit(1);
    }

    int i = 0;
    int x, y;
    std::string line;
    std::string stoken;
    std::string delimiter = ",";
    size_t pos;

    while(std::getline(input, line))
    {
        do
        {
            pos = line.find(delimiter);
            stoken = line.substr(0, pos);
            line.erase(0, pos + delimiter.length());

            if (!stoken.empty())
            {
                x = i / 9;
                y = i % 9;
                int itoken = std::stoi(stoken);
                std::cout << "Token at (" << x << ',' << y << ") is " << itoken << std::endl;

                SetCellValueCommand* cmd = new SetCellValueCommand(*this, x, y, itoken);
                constraints_cmd_list.push_back(cmd);
            }

            i++;
        } while (pos != std::string::npos);
    }
}

void SudokuSolver::solve()
{
    // TODO: Solve it!
    grid.solve(); // EZ
    std::cout << "Sudoku solved!" << std::endl;
}

const Grid* SudokuSolver::solution() const
{
    assert(grid.is_solved());
    return &grid;
}

void SudokuSolver::setCellValue(int& x, int& y, int& value)
{

}
