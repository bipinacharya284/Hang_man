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
