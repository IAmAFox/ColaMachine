/*
This basic programme allows a user to choose between a list of drinks 
and will then output the result to the console while ensuring only valid
input is used.
*/

#include <iostream>

void printIntro();
int getValidInput();
void printOutput();

int main()
{
	printIntro();
	printOutput();

	return 0;
}

// Introduces the programme to users
void printIntro()
{
	std::cout << "Welcome to the beverage machine. Please see our menu below.\n\n";
	std::cout << "1. Coca Cola\n2. Sprite\n3. Lemon Twist\n4. Fanta Orange\n5. Water\n";
}

// Stores input from user and ensures it is valid to the programme
int getValidInput()
{
	int drinkNumber;
	std::cout << "\nPlease input the number of the beverage you would like: ";
	std::cin >> drinkNumber;

	if (drinkNumber < 1 || drinkNumber > 5)
	{
		std::cout << "Sorry, that is a invalid option!\n";
		return 1;
	}

	return drinkNumber;
}

// Prints out the drink choice of the user based on input from getValidInput
void printOutput()
{
	int drink = getValidInput();

	if (drink == 1)
	{
		std::cout << "\nHere is your Coca Cola!\n";
	}
	else if (drink == 2)
	{
		std::cout << "\nHere is your Sprite!\n";
	}
	else if (drink == 3)
	{
		std::cout << "\nHere is your Lemon Twist!\n";
	}
	else if (drink == 4)
	{
		std::cout << "\nHere is your Fanta Orange!\n";
	}
	else
	{
		std::cout << "\nHere is your water!\n";
	}
}
