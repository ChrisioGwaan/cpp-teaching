
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using std::vector;
using std::string;

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

    vector<string> words;

    std::string line;
    while (std::getline(inputFile, line)) {
        words.push_back(line);
    }

    // accept only letters

    string text = "";
    for (int i = 0; i < (int)words.size(); ++i) {
        text.append(words.at(i));
        text.append("\n");
    }

    std::ofstream outputFile(argv[2]);

    // Write the whole 'text' string into the txt file
    outputFile << text;
    std::cout << "Done" << std::endl;



    return EXIT_SUCCESS;
}