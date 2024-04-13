
#include <stdio.h>
#include <stdlib.h>
#include "conio2.h"
#include <windows.h>
#include <stdint.h>


#define NUM_MAIN_MENU 6
char *str_main_menu[NUM_MAIN_MENU]=
    {
    "Option 0",
    "Option 1",
    "Protocol test...",
    "Test",
    "Option 4...",
    "Loop send screen Image"
    };


void run_option0();
void run_option1();
void run_option2();
void run_option3();
void run_option4();
void run_option5();


signed char menu=0,menulevel=0, level1_option=0;


void main_menu()
    {
    if(menu>=NUM_MAIN_MENU)
        {
        menu=0;
        }
    if(menu<0)
        {
        menu=NUM_MAIN_MENU-1;
        }
    gotoxy(1,2);
    textcolor(15);
    int i;
    for(i=0; i<NUM_MAIN_MENU; i++)
        {
        printf("    %d: ",i);
        printf(str_main_menu[i]);
        printf("\r\n");
        }

//other way to display it in a single line:
    gotoxy(40,2);
    textcolor(15);
    printf("    %d: ",menu);
    printf(str_main_menu[menu]);
    printf("                    ");
    printf("\r\n");


    if(GetAsyncKeyState(VK_RETURN) & 0x01)
        {
        gotoxy(1,10);
        switch(menu)
            {
            case 0:
                printf("Run ");
                printf(str_main_menu[menu]);
                printf("                         \r\n");
                run_option0();
                menu=0;
                break;
            case 1:
                printf("Run ");
                printf(str_main_menu[menu]);
                printf("                         \r\n");
                run_option1();
                menu=0;
                break;
            case 2:
                printf("Run ");
                printf(str_main_menu[menu]);
                printf("                         \r\n");
                run_option2();
                menu=0;
                break;
            case 3:
                printf("Run ");
                printf(str_main_menu[menu]);
                printf("                         \r\n");
                run_option3();
                menu=0;
                break;
            case 4:
                printf("Run ");
                printf(str_main_menu[menu]);
                printf("                         \r\n");
                run_option4();
                menu=0;
                break;
            case 5:
                printf("Run ");
                printf(str_main_menu[menu]);
                printf("                         \r\n");
                run_option5();
                menu=0;
                break;
            }
        }
    }


int main()
    {
    textcolor(13);
    printf("Menu");

    while(!GetAsyncKeyState (VK_ESCAPE) & 0x01)
        {
        if(GetAsyncKeyState (VK_DOWN) & 0x01)
            {
            menu++;
            }
        if(GetAsyncKeyState (VK_UP) & 0x01)
            {
            menu--;
            }
        if(menulevel==0)
            {
            main_menu();
            }
        textcolor(14);
        gotoxy(1,menu+2);
        printf("-->");
        Sleep(20);

        gotoxy(1,18);
        }
    return 1;
    }






void run_option0()
    {
    printf("Something");
    }
void run_option1()
    {
    printf("is       ");
    }
void run_option2()
    {
    printf("to       ");
    }
void run_option3()
    {
    printf("be       ");
    }
void run_option4()
    {
    printf("run      ");
    }
void run_option5()
    {
    printf("here     ");
    }
