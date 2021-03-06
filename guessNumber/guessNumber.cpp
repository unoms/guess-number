// guessNumber.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std; 

int main()
{
	srand(static_cast<unsigned int>(time(0)));  //seed random number generator

	int tries = 0;
	int myNum;
	int randNum = rand();
	int guessNum = (randNum % 100) + 1;
	cout << "Try to guess my number\n\n\n";
	do {
		cout << "Please, enter your guess\n";
		cin >> myNum;
		tries++;

		if (myNum > guessNum) {
			cout << "Sorry, too high\n";
		}
		else if (myNum < guessNum) {
			cout << "Sorry, too low\n";
		}

	} while (guessNum != myNum);

	cout << "Congratulation!!! You guessed the number in " << tries << " tries\n";

    return 0;
}

