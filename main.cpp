#include <iostream>
#include <conio.h>
#include <graphics.h>
#include "./Modules/Graphics/graphics_mainscreen.h"
#include "Modules/Graphics/graphics_playing_window.h"
#include "Modules/Graphics/graphics_contributor.h"

using namespace std;

bool startGameMenu;
char input;
int menu_select = 0;

void clear()
{
    clearviewport();
}

void selecting_mainmenu_items()
{
    while (1)
    {
        if (menu_select > 3)
        {
            menu_select = 0;
        }

        if (menu_select == 0)
        {
            setcolor(WHITE);
            select_Menu_Exit();
            setcolor(RED);
            select_Menu_Start();
        }
        else if (menu_select == 1)
        {

            setcolor(WHITE);
            select_Menu_Start();
            setcolor(RED);
            select_Menu_Contribute();
        }
        else if (menu_select == 2)
        {

            setcolor(WHITE);
            select_Menu_Contribute();
            setcolor(RED);
            select_Menu_About();
        }
        else if (menu_select == 3)
        {

            setcolor(WHITE);
            select_Menu_About();
            setcolor(RED);
            select_Menu_Exit();
        }

        // for reading the input from keyboard
        input = getch();
        if (input == 9)
        {
            menu_select = menu_select + 1;
        }

        if (input == 13 && menu_select == 0) // Selecting the Start menu
        {
            // setcolor(WHITE);
            // outtextxy(getmaxx()/2-80,getmaxy()/2,"Loading...");
            startGameMenu = true;
            break;
        }
        else if (input == 13 && menu_select == 3) // Selecting the Exit menu
        {
            break;
        }else if (input == 13 && menu_select == 1) // Selecting the Exit menu
        {
            contributor();
            break;
        }
    }
}

void start_game()
{

    clear();
    draw_boders();
    j = 0;
    assign_word();
}

int main()
{
    int gd = DETECT, gm;

    // Initializing the graphs
    initgraph(&gd, &gm, (char *)"");

    // <------ Starting the Main menu ------>
    setting_main_menu_items();
    selecting_mainmenu_items();
    // <------ Ending the Main menu ------>

    clear();

    // <------ Starting the Game ------>
    if (startGameMenu == true)
    {
        // Loading text
        setcolor(WHITE);
        outtextxy(getmaxx() / 2 - 80, getmaxy() / 2, "Loading...");
        delay(100);

        start_game();

        // checking for game restart
        while (1)
        {

            if (getch() == 32)
            {
                start_game();
            }
            else
            {
                clearviewport();
                setting_main_menu_items();
                selecting_mainmenu_items();
                start_game();
            }
        }
    }

    // getch();

    return 0;
}
