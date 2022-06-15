#include<iostream>
#include<conio.h>
#include<graphics.h>

int main()
{
    int selectInput = 0;
    int gd=DETECT,gm;
    
    //Initializing the graphs
    initgraph (&gd,&gm,(char*)"");

    rectangle(10, 10, getmaxx()-10, getmaxy()-10);
    rectangle(15, 15, getmaxx()-15, getmaxy()-15);

    settextstyle(8,0,5);
    outtextxy(getmaxx()/2-110, 20,"HANGMAN");
    
    settextstyle(8,0,3);
    outtextxy(getmaxx()/10, getmaxy()/2-80,"START");
    outtextxy(getmaxx()/10, getmaxy()/2,"CONTRIBUTE");
    outtextxy(getmaxx()/10, getmaxy()/2+80,"ABOUT");
    outtextxy(getmaxx()/10, getmaxy()/2+160,"EXIT");
    
    // if (getch()==38)
    // {

    // }


    // Down arrow when pressed
    if (getch()==40)
    {
    clearviewport();
    setcolor(RED);
    outtextxy(getmaxx()/10, getmaxy()/2,"CONTRIBUTE");   
    printf("Down key pressed");
    }




    

    getch();
    return 0;
}