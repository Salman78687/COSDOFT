#include <iostream>
using namespace std;

int main(){
	
	double n1, n2;
	cout << "Enter the 1st number: "; cin >> n1;
	cout << "Enter the 2nd number: "; cin >> n2;
	
	int operation;
	
	cout << "\nEnter the number for the operation.\n1 for addition\n2 for subtraction\n3 for multiplication\n4 for division\n: "; cin >> operation;
	
	
	if(operation==1)
		cout << "\nResult: " << n1+n2;
		
	else if(operation==2)
		cout << "\nResult: " << n1-n2;
	
	else if(operation==3)
		cout << "\nResult: " << n1*n2;
		
	else if(operation==4)
		cout << "\nResult: " << n1/n2;
		
	else{
		cout << "\nWrong Input!";
	}	
	
return 1;	
}