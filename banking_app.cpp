#include <iostream>

int user_input;

void GuiScreen(){
    std::cout << "                --------------------                " << std::endl;
    std::cout << "                |                  |                " << std::endl;
    std::cout << "                |                  |                " << std::endl;
    std::cout << "                |      WELCOME     |                " << std::endl;
    std::cout << "                |                  |                " << std::endl;
    std::cout << "                |                  |                " << std::endl;
    std::cout << "                --------------------                " << std::endl;

    std::cout << "         CHOOSE AN OPTION AND ENTER THE NUMBER      " << std::endl;
    std::cout << "         1-->CREATE A NEW ACCOUNT         " << std::endl;
    std::cout << "         2-->WITHDRAW MONEY               " << std::endl;
    std::cout << "         3-->DISPLAY BALANCE        " << std::endl;
    std::cout << "         4-->DEPOSIT MONEY         " << std::endl;
    std::cout << "         5-->EDIT ACCOUNT INFORMATION         " << std::endl;
    std::cin >> user_input;
}


int main(){
    GuiScreen();
}