#include <iostream>


int balance = 100;
// int& base_balance = balance;

void bonus() {
    balance += 3000;
}

void parking_fine() {
    balance -= 50;
}

int main() {
    std::cout << balance << std::endl;
    balance += 100;
    std::cout << balance << std::endl;
    bonus();
    std::cout << balance << std::endl;
    parking_fine();
    std::cout << balance << std::endl;
}
