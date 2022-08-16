#include <fstream>
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <conio.h>
using namespace std;

void getting_string_from_file()
{
    string item = " ";
    int a = 1;

    srand((unsigned)time(0));

    int b = rand() % 10 + 1;

    // open a file

    ifstream myfile;
    myfile.open("record.txt");
    if (!myfile.is_open())
    {
        cout << "File cannot open" << endl;
    }
    else
    {

        // Randomly Getting the input
        while (myfile >> item)
        {
            if (a++ == b)
            {
                cout << item << endl;
            }
        }
    }
}
