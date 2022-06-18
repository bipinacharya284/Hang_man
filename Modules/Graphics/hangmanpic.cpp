#include<iostream>
#include<conio.h>
#include<graphics.h>
using namespace std;
int main()
{
    int gd = DETECT, gm;
    // initgraph initializes the
    initgraph(&gd, &gm, "");
delay(300);
setcolor(RED);
line(320,10,320,74);
line(320,10,520,10);
line(520,10,520,284);
//for head
ellipse(320,95,360,0,25,20);
line(298,85,341,85);//hair boundary
circle(310,90,2);//eyes
circle(330,90,2);//eyes
arc(320,100,200,-20,10);//smile
setcolor(GREEN);
//for neck
line(313,115,313,125);//pillar
line(328,115,328,125);//pillar
setcolor(BLUE);
//for stomach
arc(320,225,72,107,100);//upchest
line(290,129,290,200);
line(350,129,350,200);
line(290,193,350,193);
line(290,200,350,200);
setcolor(YELLOW);
//for legs;
line(290,200,285,280);
line(320,225,305,280);
line(322,225,335,280);
line(350,200,355,280);
setcolor(WHITE);
//for right hand
line(290,129,255,165);
line(255,165,290,200);
line(290,149,275,165);
line(275,165,290,182);
//for left hand
line(350,129,385,165);
line(385,165,350,200);
line(350,149,365,165);
line(365,165,350,182);
setcolor(BROWN);
//for shoes
line(285,280,275,287);
line(275,287,305,287);
line(305,280,305,287);
line(335,280,335,287);
line(335,287,365,287);
line(355,280,365,287);
//for name
settextstyle(2,HORIZ_DIR,4);
outtextxy(293,150,"  HANGMAN  ");

  
  getch();
    return 0;
}
