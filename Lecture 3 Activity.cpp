////
// Name: Josh Valerio
// Section: CS 131 - 2830
// Program Name: Lecture 3 - Activity
////
#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

int main()
{
	cout << "My name is Josh Valerio.\n" << "Lecture 3 - Activity.\n";

	// Slide 24 - Odd/Even determiner with If Statement
	
	int userNum;
	cout << "Please enter a number: ";
	cin >> userNum;
	if ((userNum % 2) == 0) {
		cout << userNum << " is a positive number.\n";
	}
	else {
		cout << userNum << " is a negative number.\n";
	}
	

	// Slide 41 - Odd/Even determiner with Conditional Expression
	/*
	int userNum;
	string condString;
	cout << "Please enter a number: ";
	cin >> userNum;
	condString = ((userNum % 2) == 0) ? " positive " : " negative ";
	cout << userNum << " is a" << condString << "number.\n";
	*/

	// Slide 54 - Averaging with Loops
	/*
	int userInput;
	int loopNum = 1;
	int updateNum = 0;
	cout << "Please enter 10 numbers\n";
	while (loopNum < 11) {
		cout << "Number " << loopNum << ": ";
		cin >> userInput;
		updateNum = userInput + updateNum;
		loopNum ++ ;
	}
	cout << "The total of your 10 numbers is: " << updateNum << endl;
	cout << "The average for the 10 numbers is: " << updateNum / 10.0 << endl;
	*/
	
	// Slide 68 - Averaging with Loops but negative input = exit
	/*
	int userInput = 1;
	double loopNum = 1.0;
	int updateNum = 0;
	cout << "Please enter 10 numbers\n";
	while ((loopNum < 11) && (userInput > 0)) {
		cout << "Number " << loopNum << ": ";
		cin >> userInput;
		updateNum = userInput + updateNum;
		loopNum ++;
	}
	cout << "The total of your 10 numbers is: " << updateNum << endl;
	cout << "The average for the 10 numbers is: " << (updateNum / loopNum) << endl;
	*/

	// Slide 79 - Counting total number of iterations with rand
	/*
	int loopNum = 1;
	int randVar;
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	int num4 = 0;
	while (loopNum <= 4000) {
		randVar = rand() % 4 + 1;
		if (randVar == 1) {
			num1 ++;
		}
		else if (randVar == 2) {
			num2 ++;
		}
		else if (randVar == 3) {
			num3 ++;
		}
		else if (randVar == 4) {
			num4 ++;
		}
		loopNum++;
	}
	cout << "Number times \"1\" appeared: " << num1 << endl;
	cout << "Number times \"2\" appeared: " << num2 << endl; 
	cout << "Number times \"3\" appeared: " << num3 << endl;
	cout << "Number times \"4\" appeared: " << num4 << endl;
	*/

	system("pause");
	return 0;
}

