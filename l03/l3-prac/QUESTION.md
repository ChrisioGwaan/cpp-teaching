# Browse this file on GitHub would be better

## Q1:
Write a program to read `wlist_match1.txt` file and store the words in a vecotr of strings then write the words into a new file called `output.txt`.

## Q2:
Continue on Q1, write an algorithm to check if each word in the vector contains any characters that **are not considered as Letters**.
So basically, your algorithm should **remove any non-letter characters** from each word in the vector.
After that, write the words into a new file called output.txt

> Tips: 
* When writing something into the file, the operation will involve I/O operations.
* For example,

```
outFile << "Hello World1" << endl; // this is an I/O operation
outFile << "Hello World2" << endl; // this is another I/O operation
// Totally 2 I/O operations above
```

* Think about the performance between the followings based on the above tips:
  1. Iterate through each word in the vector, write each word into new file called output.txt
  2. Or, Iterate through each word in the vector, append each word into a string, then write the string into new file called output.txt

## Q3:
The base class `Pet` has protected fields `petName`, and `petAge`. The derived class `Dog` extends the `Pet` class and includes a private field for `dogBreed`.

1. Write a `Pet` class that contains getter and setter functions for `petName`, and `petAge`.
2. Write a `Dog` class as a subclass that extends `Pet` class and contains getter and setter function for `dogBreed`.
3. Write copy constructers and deconstructors for both of them.
4. Create a method to print information using `printInfo()` in `Pet` and `Dog` classes.
5. In the main function, create a new `Pet` object to store info from the input, create a new `Dog` object to store info from the input as well, but when calling `printInfo()`, the method of `Dog` should override the `printInfo()` in `Pet` class.

## Q4:
Given a text file with multiple integer numbers, write a program to read the file and find a way to store the numbers. Then choose a sorting algorithm you want to sort the numbers in acsending order, and applies binary search algorithm to find the position of the numbers from user input. (A negative number indicates the end of the input)

* If the number is not found, print `Number 345 is not found`. `345` is just an example.
