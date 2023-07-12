/*

Make a program that reads 2 numbers and swap them using pointer.

*/


#include <iostream>

void swap(int* a, int* b);

int main (void) {
   int i = 1;
   int j = -2;

   swap (&i, &j);

   return EXIT_SUCCESS;
}

void swap(int* a, int* b) {
    int* tmp = a;
    a = b;
    b = tmp;
}