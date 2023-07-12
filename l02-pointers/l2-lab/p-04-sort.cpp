#include <iostream>
#include <vector>

int main(void) {
    std::vector<int> vector1;
    std::vector<int> vector2;

    vector1.push_back(55);
    vector1.push_back(71);
    vector1.push_back(25);
    vector1.push_back(82);
    vector1.push_back(43);
    vector1.push_back(35);

    std::cout << "Before sorting" << std::endl;
    for (int i = 0; i < (int)vector1.size(); i++) {
        std::cout << vector1.at(i) << std::endl;
    }

    std::cout << std::endl;

    std::cout << "After sorting" << std::endl;

    int size_vec1 = (int)vector1.size();

    // Selection Sort

    int replace_val = 0;
    for (int i = 0; i < size_vec1; i++) {
        int smallest_index = i;

        for (int j = i + 1; j < size_vec1; j++) {
            if (vector1.at(j) < vector1.at(smallest_index)) {
                smallest_index = j;
            }
        }

        replace_val = vector1.at(smallest_index);
        vector1.at(smallest_index) = vector1.at(i);
        vector1.at(i) = replace_val;
    }

    for (int i = 0; i < (int)vector1.size(); i++) {
        std::cout << vector1.at(i) << std::endl;
    }

    return EXIT_SUCCESS;
}