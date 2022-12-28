#include <iostream>
#include <cstdio>


void Board(){
     
     std::cout << "ssssssssssssssssssssssssssssss" << std::endl;
     for(int i=0;i<9;i++){
        std::cout << "|                            |" << std::endl;
     }
     std::cout << "ssssssssssssssssssssssssssssss" << std::endl; 
     std::cout << "|                            |" << std::endl;
     std::cout << "|  PRESS   Q     TO    EXIT  |" << std::endl;
     std::cout << "|                            |" << std::endl;
     std::cout << "ssssssssssssssssssssssssssssss" << std::endl;

}


int main(){
    
    while(true)
     system("cls");
     Board();
    
}