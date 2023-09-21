#include <iostream>
using namespace std;
int main()
{
	int a,b;
	float result;
	char op;
	cout<<"Enter the two numbers: ";
	cin>>a>>b;
	cout<<"Enter the operation you want to perform: ";
	cin>>op;
	switch(op)
	{
		case '+' : {
			result=a+b;
		
		}
		break;
		case '-' : {
			result=a-b;
		
		}
			break;
	    case '*': {result=a*b;
			
			}
		break;
		case '/': {
		result=a/b;
		}
		break;
		default : {
			cout<<"Invalid operation";
		
		}
	}
	
	
	cout<<"Your answer is : "<<result;
	
	
	return 0;
}
