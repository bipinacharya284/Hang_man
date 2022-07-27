#include<iostream>
#include<conio.h>
#include<graphics.h>

using namespace std;


int main()
{
    char str[10] = "A";
    int i=0;
    int menu_select=0;
    int gd=DETECT,gm;
    
    //Initializing the graphs
    initgraph (&gd,&gm,(char*)"");


    line(200,200, 220, 200);
    line(240,200, 260, 200);
    line(280,200, 300, 200);
    line(320,200, 340, 200);
    while(i<4)
    {
        // sprintf(str,"%d",i);
        outtextxy(205,180,str);
        
    i++;
    }

    getch();
    return 0;
}