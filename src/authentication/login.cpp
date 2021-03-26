#include "../../include/authentication/login.h"
#include "../../include/inventory/menu.h"

void invalid_input() {
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    std::cout << "Invalid input type." << std::endl;
}

void login() {

    std::ifstream password_file_read("password.csv");
    std::ofstream password_file_write("password.csv", std::ios::app);
    std::string password;
    std::string password_guess;

    if (password_file_read.peek() == std::ifstream::traits_type::eof() )
    {
        std::cout << "You have set no password please enter one now, and write this down." << std::endl;
        std::cin >> password;
        password_file_write << password;
        menu();
    }
    else {

        while(true) {
            std::cout <<"Please enter your password" << std::endl;
            std::cin >> password_guess;
            password_file_read >> password;
            if(password_guess == password) {
                menu();
                break;
            }
            else {
                std::cout << "Incorrect" << std::endl;
            }
        }
    }
}
