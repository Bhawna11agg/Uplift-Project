/*
Author: Mohit Radadiya
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int compGuess = rand() % 1500 +1;
	cout << "Please pick a number between 1 - 1500!\n";
	int guess;
	do {
		cout << "Enter your estimate: ";
		cin >> guess;
		if(guess < compGuess)
		{
			cout << "Your Guess number is less than the Computer Guess number.\n";
		}
		else if(guess > compGuess)
		{
			cout << "Your Guess number is greter than the Computer Guess number.\n";
		}
		else
		{	  
			cout << "Hureyy! Your guess is right!";
		}
  }while (guess != compGuess);
	return 0;
}
