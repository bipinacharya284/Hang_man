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
        FileName<<"this code is done by rajina ";
        FileName.close();           
    }
    return 0;


}