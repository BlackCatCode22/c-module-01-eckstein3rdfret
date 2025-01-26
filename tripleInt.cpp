#include <iostream>

int main() {
    int user_int;
    std::string user_response;
    std::cout << "Would you like to triple an integer? enter Y or N\n";
    std::cin >> user_response;
    while (user_response != "Y" && user_response != "y" && user_response != "yes") {
        std::cout << "Please just type 'Y'\n";
        std::cin >> user_response;
    }
    std::cout << "Awesome since we are in agreement...\n";
    std::cout << "...We are...in agreement...right?...enter Y or N\n";
    std::cin >> user_response;
    while (user_response != "Y" && user_response != "y" && user_response != "yes") {
        std::cout << "We...had...an...agreement...\n";
        std::cout << "enter...Y\n";
        std::cin >> user_response;
    }
    std::cout << "EXCELLENT!! Please enter an integer!...the larger the integer..\n";
    std::cout << "The greater the reward!   ";
    std::cin >> user_int;

    for (int x = 0; x < user_int; x++) {

        for (int y = user_int - x; y <= user_int; y++) {
            std::cout << "$";
        };
        std::cout << "\n";
    }
    std::cout << "\nYOUR NEW INT IS!!!!!....\n";
    std::cout << user_int * 3;

}

//
// Created by eckst on 1/25/2025.
//