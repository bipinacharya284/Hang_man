#include<iostream>
#include<conio.h>
#include<graphics.h>
#include<string>
#include"graphics_hangman_model.h"
#include"graphics_gameover_screen.h"
#include"../Others/file_handling_randomly_reading.h"
#include"graphics_gamecomplete_screen.h"

using namespace std;

// char orginalString[10];
// int stringLength;
void giveHint(string orginalWord);
void entryField(string orginalWord);

void assign_word()
{
    string orginalWord = getting_string_from_file();
    
    // cout<<orginalString;
    giveHint(orginalWord);
}

int i=0,j=0,k=0;
char inputstr[10];
int gameOverScore;

void draw_boders()
{
    rectangle(10, 10, getmaxx()-10, getmaxy()-10);
    rectangle(15, 15, getmaxx()-15, getmaxy()-15);

    settextstyle(8,0,5);
    outtextxy(getmaxx()/2-100, 20,"HANGMAN");
    settextstyle(0,0,0);
}



void giveHint(string orginalWord)
{
    char orginalString[orginalWord.length() + 1];

    strcpy(orginalString, orginalWord.c_str());
    
    int stringLength = strlen(orginalString) ;

    

        // Text Hint
    outtextxy(getmaxx()/2-200,getmaxy()-50,"Hint");

    // Filling hint text 
    char hintText_arry[15];
    char hintText;

    j=0;
    for (i=0;i<stringLength;i++)
    {
        j = j+40;
        line(140+j,439, 160+j, 439);
       
    }

    j = 0;

    for (i=0; i<stringLength; i++)
    {
        j = j + 40;

        
        if (i== 0)
        {
            hintText = orginalString[i];
        }else if (i== stringLength-1)
        {
            hintText = orginalString[i];
        }else if (i == stringLength /2)
        {
            hintText = orginalString[i];
        }else{
            // hintText = orginalString[100];
            hintText = NULL;
        }
        
        sprintf(hintText_arry,"%c",hintText);
        outtextxy(145+j,getmaxy()-60,hintText_arry);
    }

    entryField(orginalWord);
    

}


void entryField(string orginalWord)
{

    char orginalString[orginalWord.length() + 1];

    strcpy(orginalString, orginalWord.c_str());
    
    int stringLength = strlen(orginalString) ;

    j=0;
     // creating entryable text field
    for (i=0;i<stringLength;i++)
    {
        j = j+40;   
        line(80+j,200, 100+j, 200);
       
    }



    //Entering user inputs
    j=0;
    gameOverScore=0;
    for (i=0;i<stringLength;i++)
    {
    j = j+40;
    inputstr[0] = getch();
    inputstr[0] = (char) toupper(inputstr[0]);

    if (inputstr[0] == orginalString[i])
    {
        outtextxy(85+j,180,inputstr);
       if(i == (stringLength-1))
       {
            // break;
            clearviewport();
            gameComplete();
       }
    }else{
        i = i-1;
        j = j-40;
        gameOverScore = gameOverScore +1;
    }


    // if (i == stringLength)
    // {
    //     // break;
    //     clearviewport();
       
        
    // }




    if(gameOverScore==1)
    {
        draw_bar();
    }else if (gameOverScore == 2)
    {
        draw_head();
    }else if (gameOverScore == 3)
    {
        draw_body();
    }else if (gameOverScore == 4)
    {
        draw_hand();
    }else if (gameOverScore == 5)
    {
        draw_leg();
        delay(200);
        gameOver_screen();
        break;
    }
    
    
    
    }
}

