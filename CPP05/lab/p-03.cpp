#include <iostream>
#include <queue>

int main(void) {

    std::queue<int> deq;

    deq.push(51);
    deq.push(32);
    deq.push(36);

    deq.pop();

    std::cout << deq.front() << std::endl;
    std::cout << deq.back() << std::endl;

    std::cout << deq.size() << std::endl;

    


    return EXIT_SUCCESS;
}