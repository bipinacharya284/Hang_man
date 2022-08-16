#include<iostream>
#include<conio.h>
#include<graphics.h>
using namespace std;

void gameOver_screen()
{
    clearviewport();
     rectangle(10, 10, getmaxx()-10, getmaxy()-10);
    rectangle(15, 15, getmaxx()-15, getmaxy()-15);

    settextstyle(8,0,5);
    outtextxy(getmaxx()/2-100, 210,"Game Over");
    settextstyle(0,0,0);
    outtextxy(getmaxx()/2-100, 250,"Press Space key to try again");

}
