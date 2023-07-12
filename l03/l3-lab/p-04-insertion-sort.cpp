#include <iostream>
#include <vector>

using std::vector;

vector<int> insertion_sort(vector<int> &numbers);

int main(void) {
    // Need to be sorted
    vector<int> numbers = {6, 15, 32, 3, 20};

    vector<int> new_numbers = insertion_sort(numbers);

    for (int i = 0; i < (int)new_numbers.size(); ++i) {
        std::cout << new_numbers.at(i) << " ";
    }
    std::cout << std::endl;
    
    return EXIT_SUCCESS;
}

vector<int> insertion_sort(vector<int> &numbers) {

    int j = 0;
    for (int i = 1; i < (int)numbers.size(); ++i) {
        j = i;

        while (j > 0 && numbers.at(j) < numbers.at(j - 1)) {
            int temp = numbers.at(j);
            numbers.at(j) = numbers.at(j - 1);
            numbers.at(j - 1) = temp;
            --j;
        }
    }
    return numbers;
}