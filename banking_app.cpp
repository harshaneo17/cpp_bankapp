/* 
General ideas

    * Wrap account functionality in class. So you can do account.withdraw(40), account.deposit(20), account.show_balance() etc.
    * Keep key information like balence inside the object created from this class rather than having it as a global variable.
    * Keep indentation consistant. Does not really matter what style you use as long as it is consistent accross the project.
    * UserInputSwitch is nice and straightforward, as is the GUIScreen.
    * Perhaps try have some test cases for the options? e.g. 7--> is a test and that goes through the addition, withdrawl, display 
      etc and see if the value is correct after calling these. e.g.

      balance = 100
      withdraw(20)
      if (balance != 80) {
        cout << "test failed. please check withdraw function" << endl;
      }

    * Startup check wrapped in a while loop is nice approach, means you can just flip that to false to exit the program.
    * Try and stay away from global variables when it comes to account. If you try out classes and some tests, that would be a good next step.
    * Some good checks with messaging, letting the user know if there are any issues and taking relevant action.
    * Not sure about int& base_balance = balance;. This stood out a bit to me. Was this a pointer test?
*/


#include <iostream>

int user_input;
int balance = 0;
std::string name;
std::string account_number;
std::string password;
std::string user_decision;
int& base_balance = balance;
int withdraw_balance;
int deposit_balance;
bool startup = true;

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
         base_balance = 100;
    }
    else if(user_decision == "n"){
        CreateNewAccount();
    }
    else{
         std::cout << "please enter y or n";
    } 
}

void DisplayBalance(){
     if (balance){
             std::cout << "-----BANK BALANCE-----\n" << name << "\n" << account_number << "\n" << password << "\n" << std::endl;
             std::cout << "-----BALANCE IN THE ACCOUNT-----\n" << balance << std::endl;        
     }
     else{
       std::cout << "Please create a new account" << std::endl;
     }
}

void Quit(){
    startup = false;
    std::cout << "HAVE A NICE DAY" << std::endl;
}

void WithdrawMoney(){
    std::string user_password;
    int check_positive;
    if (balance){
             std::cout << "-----BALANCE IN THE ACCOUNT-----\n" << balance << std::endl;
             std::cout << "-----please enter your password-----\n";
             std::cin >> user_password;
             if (user_password == password){
                 std::cout << "Enter the money you would like to withdraw" << std::endl;
                 std::cin >> withdraw_balance;
                 check_positive = withdraw_balance - withdraw_balance;
              
                if (withdraw_balance > balance){
                    std::cout << "Sorry insufficient funds" << std::endl;
                }    
                else if(check_positive == 0){
                    std::cout << "enter positive number";
                }    
                else{
                    balance = balance - withdraw_balance;
                    std::cout << "Balance after transaction\n" << balance << std::endl;
                }     
             }
             else{
                std::cout << "PLEASE ENTER CORRECT PASSWORD" << std::endl;
             }
    }
    else{
       std::cout << "Please create a new account" << std::endl;
     }
    
}

void DepositBalance(){
    std::string user_password;
    int check_positive;
    if (balance){
             std::cout << "-----BALANCE IN THE ACCOUNT-----\n" << balance << std::endl;
             std::cout << "-----please enter your password-----\n";
             std::cin >> user_password;
             if (user_password == password){
                 std::cout << "Enter the money you would like to deposit" << std::endl;
                 std::cin >> deposit_balance;

                 // Interesting check, not seen it done this way. Would have gone for: deposit_balance >= 0.
                 check_positive = deposit_balance - deposit_balance;
                 
                if (deposit_balance > 500){
                    std::cout << "DEPOSIT LIMIT 500 ONLY" << std::endl;
                }    
                else if(check_positive == 0){
                    std::cout << "enter positive number";
                }    
                else{
                    balance = balance + deposit_balance;
                    std::cout << "Balance after despositing cash\n" << balance << std::endl;
                }     
             }
             else{
                std::cout << "PLEASE ENTER CORRECT PASSWORD" << std::endl;
             }
     }        
     else{
       std::cout << "Please create a new account" << std::endl;
     }
}


void UserInputSwitch(){
    switch (user_input)
    {
    case 1:
        CreateNewAccount();
        break;
    case 2:
        WithdrawMoney();
        break;
    case 3:
        DisplayBalance();
        break;
    case 4:
        // Change to DepositBalance()
        WithdrawMoney(); 
        break;
    case 5:
        CreateNewAccount();
        break;
    case 6:
        Quit();
        break;    
    default:
        std::cout << "Please enter a valid response" << std::endl;
        break;
    }
}
int main(){
    // bool user_input_main;
    while(startup==true){
        GuiScreen();
        UserInputSwitch();
        }
    }


