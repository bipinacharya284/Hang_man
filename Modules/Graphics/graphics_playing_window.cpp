#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<string>

using namespace std;


int main()
{
    int i=0,j=0,k=0;
    char inputstr[10];
    int stringLength= 6;
    
    int gd=DETECT,gm;
    
    //Initializing the graphs
    initgraph (&gd,&gm,(char*)"");

    while (i<stringLength)
    {
        j = j+40;   
        line(200+j,200, 220+j, 200);
       i++;
    }


    j=0;
    
     while (1)
    {
    j = j+40;
        
    inputstr[0] = getch();
    inputstr[0] = (char) toupper(inputstr[0]);
    outtextxy(205+j,180,inputstr);
    }
    


    // line(200,200, 220, 200);
    // line(240,200, 260, 200);
    // line(280,200, 300, 200);
    // line(320,200, 340, 200);



    /*

while (1)
{


    // for first character
    inputstr[i] = getch();
    inputstr[i] = (char) toupper(inputstr[0]);
    outtextxy(205,180,inputstr);    

    // for second character 
    inputstr[i] = getch();
    inputstr[i] = (char) toupper(inputstr[0]);
    outtextxy(245,180,inputstr);  

     // for third character 
    inputstr[i] = getch();
    inputstr[i] = (char) toupper(inputstr[0]);
    outtextxy(285,180,inputstr);

    // for four character 
    inputstr[i] = getch();
    inputstr[i] = (char) toupper(inputstr[0]);
    outtextxy(325,180,inputstr);  


    // for (i=0; i<4; i++)
    // {
    //     inputstr[i] = getch();
    //     inputstr[i] = (char) toupper(inputstr[0]);
    //     outtextxy(205,180,inputstr);    
    // }
    
}

*/
 

// For displying the value of variable in graphics windows
// sprintf(str, "%s",inputStr);
// outtextxy(205,180,str);

        
  

    getch();
    return 0;
}