#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

const std::string CHAR = 
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    "abcdefghijklmnopqrstuvwxyz"
    "0123456789"
    "!@#$%^&*()_-+=<>/.,~`;:/";


std::string generatePassword(int length) {
    std::string password;
    std::srand(std::time(0));
    for (int i = 0; i < length; i++) {
        password += CHAR[std::rand() % CHAR.size()];
    }
    return password;
}    

int main() {
    int length;
    std::cout << "Enter Password Length: ";
    std::cin >> length;

    std::string password = generatePassword(length);
    std::cout << "Generated Password: " << password << std::endl;

    return 0;
}