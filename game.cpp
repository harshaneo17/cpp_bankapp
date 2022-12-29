#include <iostream>
#include <cstdio>
#include <stdlib.h>

std::string hero = "<(.)>";
const int width = 30;
const int height = 22;
std::string hero_space = " ";
std::string user_response;

void AppendSpace(){
     //This is to control hero and add spaces to string space
     if(user_response == "D" || user_response == "d"){
          hero_space = hero_space + " ";
     }
}


void ControlHero(){
     std::cout << hero_space << hero << hero_space << std::endl;
}

void Board(){
     
     while(true){
       
       system("cls");
           
       std::cout << "ssssssssssssssssssssssssssssss" << std::endl;
       ControlHero();
         for(int i=0;i<9;i++){
          std::cout << "|                            |" << std::endl;
         }
       std::cout << "ssssssssssssssssssssssssssssss" << std::endl; 
       std::cout << "|                            |" << std::endl;
       std::cout << "|  PRESS   Q     TO    EXIT  |" << std::endl;
       std::cout << "|                            |" << std::endl;
       std::cout << "ssssssssssssssssssssssssssssss" << std::endl;
       std::cin >> user_response; 
       AppendSpace();
     }
}
int main(){
     
    Board();    
}