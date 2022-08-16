#include <fstream>
#include <iostream>
// #include <string>
// #include <cstdlib>
#include <ctime>

std::string getting_string_from_file()
{
    string item = " ";
    int a = 1;

    srand((unsigned)time(0));

    int b = rand() % 50 + 1;

    // open a file

    ifstream myfile;
    myfile.open("Record.txt");
    if (!myfile.is_open())
    {
        cout << "Error Opening File" << endl;
    }
    else
    {

        // Randomly Getting the input
        while (myfile >> item)
        {
            if (a++ == b)
            {
                cout << item << endl;
                return item;
            }
        }
    }
}

