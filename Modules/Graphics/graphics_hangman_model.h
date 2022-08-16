
#include<iostream>
#include<conio.h>
#include<graphics.h>

    // Drawing the bar 
    void draw_bar()
    {
    line(489,80,619,80);
    line(554,80,554,120);
    }
    
    // Drawing head of the man
    void draw_head()
    {
    circle(554,180,60);
    }

    // drawing the body of man
    void draw_body()
    {
    line( 554,240,554,400);
    }
    
    void draw_hand()
    {
    // drawing left hand
    line(554,280,510,310);
    //drawing right hand
    line(554,280,598,310);
    }
    

    void draw_leg()
    {
    // drawing left leg
    line(554,400,510,430);

    //drawing right leg   
    line(554,400,590,430);

    }
