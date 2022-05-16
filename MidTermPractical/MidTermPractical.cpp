// MidTermPractical.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include<string>
#include <iostream>
bool PrintQuestion(std::string menu[], int random)
{
	std::string answer;
	std::cout << menu[random] << " \n";
	std::getline(std::cin, answer);
	switch (random)
	{
	case 0:
	{
		if (answer == "BLUE" || answer == "Blue" || answer == "blue")
		{
			return true;
		}
		else
			return false;
	}
	case 1:
	{
		if (answer == "blue Whale" || answer == "Blue Whale"|| answer == "blue whale")
		{
			return true;
		}
		else
			return false;
	}
	case 2:
	{
		if (answer == "Yellow" || answer == "yellow")
		{
			return true;
		}
		else
			return false;
	}
	case 3:
	{
		if (answer == "Brown"|| answer == "brown")
		{
			return true;
		}
		else
			return false;
	}
	}
	return false;
}
int main()
{
	srand(time(NULL));
	std::string menu[] = { "What color is the sky?","What is the biggest animal in the world?", "Typically what color is a school bus?","What color is a snow fox during the summer?"};
	bool ansResult = true;
	int chosen;
	while (ansResult)
	{
		chosen = rand() % 4;
		ansResult = PrintQuestion(menu, chosen);
		if (ansResult)
		{
			std::cout << "Correct! keep going!"<<std::endl;
		}
		else
			std::cout << "Wrong! Game Over!"<<std::endl;
		std::cin.ignore();
		system("cls");
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
