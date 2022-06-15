#include<iostream>        
#include<fstream>
using namespace std;
int main(){
    fstream FileName;               
    FileName.open("FileName", ios::out);    
    if (!FileName){                 
        cout<<"Error while creating the file";    
    }
    else{
        cout<<"File created successfully";    
        FileName<<"This is a blog posted on Great Learning ";
        FileName.close();           
    }
    return 0;
}