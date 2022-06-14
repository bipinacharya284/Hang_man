#include<iostream>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
using namespace std;

int main()
{
	
	//Initializing the variables
	
	char wordSet[10][10]=
	{
	"BASKET",
	"BALL",
	"FOOTBALL",
	"CRICKET",
	"KRISHNA",
	"BIPIN",
	"SUDIP",
	"RAJINA",
	"COLLEGE"
	};
	int i=0, hangScore=0;
    int highScore=0, currentScore=0;
	char guessWord[20]= " ";
	char letter;
	char orginalWord[10];
	

	// Browsing the string 
	while(i<10)
	{
		char temp;
		temp = wordSet[0][i];
		orginalWord[i] = temp;
	i++;
	}
	
	
	
	// giving hint to the user
	int wordLength = strlen(orginalWord);    
    cout<<"The word hint are:: "<<endl;
    cout<<"The word is of "<<wordLength<<" letters"<<endl;
    cout<<"First Letter is "<<orginalWord[0]<<endl;
    cout<<"The Letter in "<<(wordLength-1)/2<< " position is "<<orginalWord[(wordLength-1)/2]<<endl;
    cout<<"Last Letter is "<<orginalWord[wordLength-1]<<endl;
    
    
    // Taking input from user
	i=0;
    while (i<strlen(orginalWord))
    {
        letter = getch();
        cout<<endl;
        letter = (char)toupper(letter);
        if(letter == orginalWord[i])
        {
            guessWord[i] = letter;
            cout<<"Keep Going"<<endl;
            currentScore = currentScore + 1;
            cout<<"Score is "<<currentScore<<endl;
            
        }else
        {
            cout<<"Try Again"<<endl;
            i--;
            hangScore = hangScore +1;
            cout<<"HangScore = "<<hangScore<<endl;
        }
        
        i++;
        
        if (hangScore == 5)
        {
        	cout<<"You are hanged";
        	break;
		}
    }

	//Checking the win case
    if(strcmp(orginalWord,guessWord) == 0)
   	{
   		cout<< "You win";
	}
	
    
    return 0;
}
