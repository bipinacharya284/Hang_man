#include<iostream>
#include<conio.h>
#include<graphics.h>
#include"Modules/Graphics/graphics_mainscreen.h"
int main()
{
    char input;
    int menu_select=0;
    int gd=DETECT,gm;
    
    //Initializing the graphs
    initgraph (&gd,&gm,(char*)"");

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

        // for star game option
        input = getch();
        if(input==9)
        {
            menu_select = menu_select+1;
        }

        if (input==13 && menu_select==0)
        {
            setcolor(WHITE);
            outtextxy(getmaxx()/2-80,getmaxy()/2,"Loading...");
        }else if(input==13 && menu_select==3)
        {
            break;
        }
        

    }

    return 0;
}