#include<iostream>        
#include<conio.h>
#include<fstream>
using namespace std;
int main(){

    fstream file("record.txt", ios:: app);
    if(!file.is_open())
    {
        cout<<"File not opened"<<endl;
    }
    else{
        cout<<"File Successfully opened"<<endl;
        string content;
        cout<<"Enter the data to be entered"<<endl;
        getline(cin,content);
        file<<endl<<content;
    }
    file.close();

    return 0;
}

    // fstream nameStorage;           
    // nameStorage.open("Name Storage File", ios::app);    
    // if (!nameStorage){                 
    //     cout<<"Error while creating the file";    
    // }
    // else{
    //     cout<<"File created successfully";    
    //     nameStorage<<endl<<name;
    //     nameStorage.close();           
    // }