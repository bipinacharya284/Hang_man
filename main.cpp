#include<iostream>
#include<conio.h>
#include<graphics.h>
#include"Modules/Graphics/graphics_mainscreen.h"

void clear()
{
    clearviewport();
}

int main()
{
    bool startGame;
    char input;
    int menu_select=0;
    int gd=DETECT,gm;
    
    //Initializing the graphs
    initgraph (&gd,&gm,(char*)"");

    


 // <------ Starting the Main menu ------>
 setting_main_menu_items();

while(1)
{
    if (menu_select >3)
    {
        menu_select =0;
    }

    if (menu_select==0)
    {
        setcolor(WHITE);
        select_Menu_Exit();
        setcolor(RED);
        select_Menu_Start();

    }else if(menu_select == 1)
    {
        
        setcolor(WHITE);
        select_Menu_Start();
        setcolor(RED);
        select_Menu_Contribute();
    }else if(menu_select == 2)
    {
        
        setcolor(WHITE);
        select_Menu_Contribute();
        setcolor(RED);
        select_Menu_About();
    }else if(menu_select == 3)
    {
        
        setcolor(WHITE);
        select_Menu_About();
        setcolor(RED);
        select_Menu_Exit();
    }

    // for reading the input from keyboard
    input = getch();
    if(input==9)
    {
        menu_select = menu_select+1;
    }

    
    if (input==13 && menu_select==0) //Selecting the Start menu
    {
        // setcolor(WHITE);
        // outtextxy(getmaxx()/2-80,getmaxy()/2,"Loading...");
        startGame = true;
        break;
        
    }else if(input==13 && menu_select==3) //Selecting the Exit menu
    {
        break;
    }
}

// <------ Ending the Main menu ------>


clear();


// <------ Starting the Game ------>
if (startGame == true)
{
    //Loading text
    setcolor(WHITE);
    outtextxy(getmaxx()/2-80,getmaxy()/2,"Loading...");
    delay(100);
}


// getch();
 
    return 0;
}
