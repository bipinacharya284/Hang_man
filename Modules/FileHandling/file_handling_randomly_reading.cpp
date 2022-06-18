#include <fstream> 
#include <iostream> 
#include <string> 
#include <cstdlib> 
#include <ctime> 
using namespace std; 
int main () { 
        string item; 
        int a = 1; 
         
        srand((unsigned)time(0)); 
       
        int b = rand()%10+1; 

    // open a file

    fstream file("record.txt", ios:: in);
    if(!file.is_open())
    {
        cout<<"File not opened"<<endl;
    }
    else{

        // Randomly Getting the input
        while (file >> item) { 
                if (a++ == b) { 
                        cout<< item << endl; 
                } 
        } 

    }
} 