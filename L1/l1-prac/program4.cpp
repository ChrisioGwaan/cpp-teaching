
/*

This program can convert all capital letters of a string into lowercase letters.

Fix the errors below.

Use the basic knowledge of pointers and references.
Avoid creating additional memories in the parameters of a fuction.

*/

#include <iostream>
#include <string>

std::string lowerCaseLetter(std::string* user_name);

int main(void) {

    std::string user_name;
    user_name = "CPP Is Very Difficult!";

    user_name = lowerCaseLetter(user_name);

    std::cout << user_name << std::endl;

    return EXIT_SUCCESS;
}

std::string lowerCaseLetter(std::string* user_name) {
    std::string retVal;

    for (char c : user_name) {
        retVal += tolower(c);
    }

    return retVal;
}