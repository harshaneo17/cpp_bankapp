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
    std::cout << "         6-->QUIT                   " << std::endl;
    std::cin >> user_input;
}

void CreateNewAccount(){
    std::string name;
    std::string account_number;
    std::string password;
    std::string user_decision;

    std::cout << "         NEW ACCOUNT         " << std::endl;
    std::cout << "         ENTER YOUR NAME     \n" << "->>" << std::endl;
    std::cin >> name;
    std::cout << "         ACCOUNT NUMBER     \n" << "->>" << std::endl;
    std::cin >> account_number;
    std::cout << "         ENTER PASSWORD      \n" << "->>" << std::endl;
    std::cin >> password;
    std::cout << "Please confirm your details and confirm by typing y to proceed or n to edit\n" << name << "\n" << account_number << "\n" << password << "\n" << std::endl;
    std::cin >> user_decision;
    if (user_decision == "y"){
         std::cout << "thank you for creating a new account" << std::endl;
    }
    else if(user_decision == "n"){
        CreateNewAccount();
    }
    else{
         std::cout << "please enter y or n";
    } 
}

void UserInputSwitch(){
    switch (user_input)
    {
    case 1:
        CreateNewAccount();
        break;
    case 2:
        //insert code
        break;
    case 3:
        //insert code
        break;
    case 4:
        //insert code
        break;
    case 5:
        //insert code
        break;
    default:
        std::cout << "         THANK YOU FOR USING OUR APPLICATION. HAVE A NICE DAY         " <<std::endl;
        break;
    }
}
int main(){
    GuiScreen();
    UserInputSwitch();
}