#include<iostream>
#include<conio.h>
#include<graphics.h>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    // initgraph initializes the
    initgraph(&gd, &gm, "");
  
    // To keep track of lines
  
       // setlinestyle function
       //setlinestyle(DOTTED_LINE, 5, 0);
       // Drawing line
       line(339, 379 , 339, 349);
       line(639, 0, 539, 0);
       line(639, 0 , 639, 479);

    getch();
  
    return 0;
}

