#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char** argv) {

    if (argc != 3) {
        std::cerr << "Usage: ./program input.txt output.out" << std::endl;
        return EXIT_FAILURE;
    }

    std::ifstream inputFile(argv[1]);
    if (!inputFile) {
        std::cerr << "Failed to open input file." << std::endl;
        return EXIT_FAILURE;
    }

    std::ofstream outputFile(argv[2]);

    std::string line;
    while (std::getline(inputFile, line)) {
        
        int value = std::stoi(line);

        value = value * 2;

        // Write to the output file
        outputFile << value << std::endl;
    }

    inputFile.close();
    outputFile.close();

    return EXIT_SUCCESS;
}