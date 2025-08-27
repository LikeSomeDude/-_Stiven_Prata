#include <iostream>

void ShowTime(int h, int m){
    std::cout << "Time: " << h << ":" << m;
}

int main(){
    std::cout << "Enter the numer of hours: ";
    int hour;
    std::cin >> hour;
    std::cout << std::endl << "Enter the number of minutes: ";
    int minutes;
    std::cin >> minutes;
    std::cout << std::endl;
    ShowTime(hour, minutes);
    return 0;
}