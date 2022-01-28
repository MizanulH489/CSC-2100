//==========================================================
//
// Title:      Lab 14 Complex
// Course:     CSC 2111
// Lab Number: Lab 14
// Author:     Mizanul Haque
// Date:      1/27/2021
// Description:
//  This program creates a function template with the name of sumSequence with the return type of the method.
//  In order to utilize this, it utilizies specific parameters as an argument, being sum, x, n
// 
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



template <class Type>
Type larger(Type x, Type y);


int main() {

	// Declare Variables
	int num1;
	int num2;


	string input1;
	string input2;

	double a;
	double b;



	// Show application header
	cout << "Welcome to my My Input Sp!" << endl;
	cout << "--------------------------" << endl << endl;



	// Prompt User for Integer input
	cout << "Enter the first integer value a : ";
	cin >> num1;
	cout << "Enter the second integer value b: ";
	cin >> num2;

	//  Print Output for int
	cout << " Larger of " << num1 << " and " << num2 << " = " << larger(num1, num2) << endl << endl;



	// Prompt User for String input
	cout << "Enter the first string value: ";
	cin >> input1;
	cout << "Enter the second string value: ";
	cin >> input2;


	//  Print Output for string
	cout << " Larger of " << input1 << " and " << input2 << " = " << larger(input1, input2) << endl << endl;




	// Prompt User for double input
	cout << "Enter the first double	 value a : ";
	cin >> a;
	cout << "Enter the second double value b: ";
	cin >> b;

	// Print Output for Double
	cout << " Larger of " << a << " and " << b << " = " << larger(a, b) << endl << endl;


	// Show application close
	cout << "\nEnd of my Application" << endl;







}

// Template cLass holding class Type 
template <class Type>
Type larger(Type x, Type y)
{
	if (x >= y)
		return x; // function to return Type x
	else
		return y; // function to return Type y
}