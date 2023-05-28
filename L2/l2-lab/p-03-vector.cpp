#include <iostream>
#include <vector>

int main(void) {
    std::vector<int> vector1;

    for (int i = 1; i <= 5; i++)
        vector1.push_back(i*3);

    
    // std::vector<int>::iterator
    for (auto i = vector1.begin(); i != vector1.end(); ++i)
        std::cout << *i << " " << std::endl;

    for (auto i = vector1.rbegin(); i != vector1.rend(); ++i)
        std::cout << *i << " " << std::endl;

    std::cout << "\nThe size of vector1 is " << vector1.size() << std::endl;

    vector1.resize(10);
    std::cout << "\nThe size of vector1 is " << vector1.size() << std::endl;

    std::cout << "\nThe max size of a vector that can hold " << vector1.max_size() << std::endl;

    std::cout << "The third element of vector1 is " << vector1.at(2) << std::endl;

    std::vector<int> vector2;

    int val = 0;
    while (val >= 0) {
        std::cout << "Enter a number: ";
        std::cin >> val;
        vector2.push_back(val);
    }

    // std::vector<int>::size_type - vector2.size()

    for (int i = 0; i < (int)vector2.size(); i++) {
        std::cout << vector2.at(i) << std::endl;
    }

    std::cout << std::endl;
        
    vector2.erase(vector2.begin()+2);

    for (int i = 0; i < (int)vector2.size(); i++) {
        std::cout << vector2.at(i) << std::endl;
    }
    
    vector2.insert(vector2.begin()+2, 66);
    
    for (int i = 0; i < (int)vector2.size(); i++) {
        std::cout << vector2.at(i) << std::endl;
    }

    vector2.clear();

    return EXIT_SUCCESS;
}