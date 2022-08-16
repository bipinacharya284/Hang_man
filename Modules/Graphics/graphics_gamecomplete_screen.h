#include<iostream>
#include<conio.h>
#include<graphics.h>

void gameComplete()
{
    rectangle(10, 10, getmaxx()-10, getmaxy()-10);
    rectangle(15, 15, getmaxx()-15, getmaxy()-15);

    settextstyle(4,0,2);
    outtextxy(getmaxx()/2-200, 210,"Word Completed Successfully");
    settextstyle(0,0,0);
    outtextxy(getmaxx()/2-200, 250,"Press Space key to play another round");

}
