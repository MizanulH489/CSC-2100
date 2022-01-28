//==========================================================
//
// Title:      CSC 2111 - Lab 2
// Course:     CSC 2111
// Lab Number: Lab 1
// Author:     Mizanul Haque
// Date:      1/12/2921
// Description:
//   This program returns the value of a set of letters with a value returning function of isvowel.
// 
// 
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"


   // Defines isvowel 
bool isVowel(char l)
{
	if (l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u' || l == 'A' || l == 'E' || l == 'I' || l == 'O' || l == 'U')
	{

		return true;

	}
	else
	{
		return false;
	}
}

int main()
{
	// Declare Variable 
	char alpha;
	char input;




	// Show application header
	cout << "Welcome to my Alphabet Application!" << endl;
	cout << "--------------------------" << endl << endl;


	while (1)
	{
		// Prompt User to enter alphabet character
		cout << " Enter an alphabet character : ";
		cin >> alpha;

		if ((alpha >= 'a' && alpha <= 'z') || (alpha >= 'A' && alpha <= 'Z'))
		{
			bool result = isVowel(alpha);

			cout  << "     "  << alpha << " is a vowel : "<< boolalpha << result << endl; //added boolapha as a way to give result
			                                                                              //as true/false rather than integers 1/0.
			// Prompt User to Enter Yes/No to continue or stop
			cout << " Do you want to repeat this program ( y/n) : ";
			cin >> input;


			if (input == 'n' || input == 'N')
			{
				break;
			}

		}


		             // Give Response to the entered solution if char isnt entered
		else
		{
			cout << " Invalid Response\n";
			cout << " Please Try again\n";
		}
	}
	return 0;



	// Show application close
	cout << "\nEnd of my Application" << endl;

}


