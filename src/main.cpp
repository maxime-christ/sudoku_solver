#include <iostream>
#include <argparse/argparse.hpp>

int main(int argc, char* argv[]) {
    argparse::ArgumentParser program("sudoku_solver", "1.0", argparse::default_arguments::help);
    program.add_description("Solves a sudoku puzzle grid.");

    program.add_argument("-v", "--verbose")
        .help("Print debug logs.")
        .flag();

    std::string csv_grid;
    program.add_argument("filename")
        .help("The CSV file containing the grid to solve.")
        .store_into(csv_grid);

    try {
        program.parse_args(argc, argv);
    } catch (const std::exception& err) {
        std::cerr << err.what() << std::endl;
        std::cerr << program;
        std::exit(1);
    }

    std::cout << "Reading file " << csv_grid << std::endl;

    return 0;
}
