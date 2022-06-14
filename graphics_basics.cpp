
#include<iostream>
#include<conio.h>
#include<graphics.h>

    // Drawing the bar 
    void draw_bar()
    {
    line(20,20,getmaxx()-20,20);
    line(getmaxx()/2,20,getmaxx()/2,getmaxy()/6);
    }

    // Drawing head of the man
    void draw_head()
    {
    circle(getmaxx()/2,getmaxy()/6+60,60);
    }

    // drawing the body of man
    void draw_body()
    {
    line( getmaxx()/2,getmaxy()/6+120,getmaxx()/2,getmaxy()-80);
    }
    
    // drawing left hand
    void draw_lhand()
    {
    line(getmaxx()/2,getmaxy()/6+120+40,getmaxx()/2+30,getmaxy()/6+120+80);
    }

    //drawing right hand
    void draw_rhand()
    {
    line(getmaxx()/2,getmaxy()/6+120+40,getmaxx()/2-30,getmaxy()/6+120+80);
    }

    // drawing left leg
    void draw_lleg()
    {
    line(getmaxx()/2,getmaxy()-80,getmaxx()/2+30,getmaxy()-80+30);

    }

    //drawing right leg
    void draw_rleg()
    {
    line(getmaxx()/2,getmaxy()-80,getmaxx()/2-30,getmaxy()-80+30);
    }


int main()
{
    int gd=DETECT,gm;
    //Initializing the graphs
    initgraph (&gd,&gm,(char*)"");
    
    //For styling the lines
    setcolor(GREEN);
    setlinestyle(0, 0, 3);
    
    //styling text
    settextstyle(8,0,3);

    //printing text in the screen
    outtextxy(getmaxx()/2-200, getmaxy()/2-50, "Welcome to hang-man Demo");
   
    settextstyle(8,0,1);
    outtextxy(getmaxx()/2-150, getmaxy()/2-10, "Press space to continue..");
    

    //checking if the space is pressed
    if(getch()==32)
    {
        // clearing the viewport
        clearviewport();

        // calling the functions
        draw_bar();
        delay(1000);
        draw_head();
        delay(1000);
        draw_body();
        delay(1000);
        draw_rhand();
        delay(1000);
        draw_lhand();
        delay(1000);
        draw_rleg();
        delay(1000);
        draw_lleg();
        
    }
   
    getch();
    clearviewport();
    outtextxy(getmaxx()/2-200, getmaxy()/2-50, "Thank you for being here!");
    delay(1000);
    return 0;
}