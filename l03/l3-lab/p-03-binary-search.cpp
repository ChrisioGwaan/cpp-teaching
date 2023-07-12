#include <iostream>
#include <vector>

using std::vector;

int binary_search(const vector<int> &numbers, const int& key);

int main(void) {
    // Need to be sorted
    vector<int> numbers = {1, 2, 3, 4, 5, 6, 7, 8};

    int key = 5;

    int index = binary_search(numbers, key);

    if (index == -1) {
        std::cout << "Key not found." << std::endl;
    } else {
        std::cout << "Key found at index " << index << std::endl;
    }
    
    return EXIT_SUCCESS;
}

int binary_search(const vector<int> &numbers, const int& key) {
    int low = 0;
    int high = (int)numbers.size() - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        int midVal = numbers.at(mid);

        if (key > midVal) {
            low = mid + 1;
        } else if (key < midVal) {
            high = mid - 1;
        } else {
            return mid;
        }
    }

    return -1; // If not found
}