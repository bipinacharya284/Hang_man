#include<iostream>
#include<graphics.h>

void contributor()
{
    int gd = DETECT, gm;
    // initgraph initializes the
    initgraph(&gd, &gm, "");

    settextstyle(4,0,4);
    setcolor(RED);
    outtextxy(getmaxx()/2-200, 150,"CONTRIBUTORS");
    delay(500);
    setcolor(WHITE);
    settextstyle(4,0,2);
    outtextxy(getmaxx()/2-200, 230," - BIPIN ACHARYA");
    delay(200);
    outtextxy(getmaxx()/2-200, 270," - KRISHNA GAUTAM");
    delay(200);
    outtextxy(getmaxx()/2-200, 310," - SUDIP KOIRALA");
    delay(200);
    outtextxy(getmaxx()/2-200, 350," - RAJINA CHAUDARI");
    delay(200);
    settextstyle(3,0,1);
    outtextxy(getmaxx()/2-200, getmaxy()-50,"copyright (c) 2022 by CEV0.1");

    getch();
}

