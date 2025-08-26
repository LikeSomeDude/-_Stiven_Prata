#include <iostream>

int CtoF(int c){
    return 1.8 * c + 32;
}

int main(){
    std::cout << "Please enter a Celsius value: " ;
    int c;
    std::cin >> c;
    std::cout << std::endl;
    std::cout << c << " degrees Celsius is " << CtoF(c) << " degress Fahrenheit." << std::endl;
    return 0;
}