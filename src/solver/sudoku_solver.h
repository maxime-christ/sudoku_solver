#pragma once

#include <iostream>
#include <vector>
#include "../model/data_model/grid.h"
#include "../model/command/command.h"
#include "../model/command/set_cell_value_command.h"

class SudokuSolver
{
public:
    // User exposed API
    void init_from_file(std::string& filename);
    void solve();
    const Grid* solution() const;

protected:
    // Command related API
    void setCellValue(int& x, int& y, int& value);

private:
    std::vector<SetCellValueCommand*> constraints_cmd_list;
    std::vector<Command*> incidential_cmd_list;
    Grid grid;

    friend SetCellValueCommand;
};
