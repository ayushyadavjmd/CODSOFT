#include <stdio.h>
#include <iostream>
#include <cstdlib>

using namespace std;
int main()
{
	int rn,number;
	char yn;
	string name;
	cout<<"Enter your name: ";
	cin>>name;
	do{
		srand(1);
		rn=rand()%5 +1;
		cout<<"Guess any number between 1 to 5: ";
		cin>>number;
	    if(rn==number)
	    {
	    	cout<<"Congratulations you guessed right number "<<rn<<endl;
	    	
		}
		else{
			cout<<"Oops! wrong. The number is  "<<rn<<endl;
		}
		cout<<"Would you like to play again: Y or N:";
		cin>>yn;
	}
	while(yn!='n');
	
			cout<<"Game end"<<endl;
			
	
	
	
	
	
	return 0;
	
}
