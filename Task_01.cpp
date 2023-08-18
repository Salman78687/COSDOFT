#include <iostream>
#include <ctime>
using namespace std;

int main(){
	
	srand((unsigned int)time(NULL));
	
	
	int n = rand()%100;
	
	int guessNumber = 101;
	
	cout << "\nGuess the number between 0 and 99 and you will have 5 chances to guess.\n\n"; 
	
	int chances=5;
	while(guessNumber != n && chances>0){
		cout << "\n\nEnter: "; cin >> guessNumber;
		if(guessNumber > n){
			cout << "\nYour guessed number is high from the original!\nCHANCES LEFT: " << --chances;
		}
		else if(guessNumber < n){
			cout << "\nYour guessed number is low from the original!\nCHANCES LEFT: " << --chances;
		}
		
	}
	
	if(chances==0){
		cout << "\n\nOOPS you lost. Better luck next time.\nThe right number was " << n << "!";
	}
	else{
		cout << "\nCONGRATULATIONS :) you have guessed the right number which was " << n << "!";
	}

return 1;	
}