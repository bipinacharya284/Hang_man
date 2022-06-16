#include<iostream>
#include<conio.h>
#include<graphics.h>

void select_Menu_Start()
{
    
    outtextxy(getmaxx()/10, getmaxy()/2-80,"START");
}
void select_Menu_Contribute()
{

    
    outtextxy(getmaxx()/10, getmaxy()/2,"CONTRIBUTE"); 
}
void select_Menu_About()
{

    
    outtextxy(getmaxx()/10, getmaxy()/2+80,"ABOUT");
}
void select_Menu_Exit()
{    
    outtextxy(getmaxx()/10, getmaxy()/2+160,"EXIT");
}

void setting_main_menu_items()
{
    
    rectangle(10, 10, getmaxx()-10, getmaxy()-10);
    rectangle(15, 15, getmaxx()-15, getmaxy()-15);

    settextstyle(8,0,5);
    outtextxy(getmaxx()/2-100, 20,"HANGMAN");
    
    settextstyle(8,0,3);

    outtextxy(getmaxx()/10, getmaxy()/2-80,"START");
    outtextxy(getmaxx()/10, getmaxy()/2,"CONTRIBUTE");
    outtextxy(getmaxx()/10, getmaxy()/2+80,"ABOUT");
    outtextxy(getmaxx()/10, getmaxy()/2+160,"EXIT");
}


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