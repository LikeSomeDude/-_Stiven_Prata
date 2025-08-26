#include <iostream>

int main(){
    std::cout << "Enter you age: ";
    int age;
    std::cin >> age;
    std::cout << std::endl;
    std::cout << "Your age in months is " << age * 12 <<std::endl;
    return 0;
}