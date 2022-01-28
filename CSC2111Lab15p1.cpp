//==========================================================
//
// Title:      CSC 2111 - Lab 15-P1 Measurement Program
// Course:     CSC 2111
// Lab Number: Lab 15
// Author:     Mizanul Haque
// Date:      3/09/2921
// Description:
//  C++ Program that prompts user to enter measurement in length and inches, and gives result in centimeters. If user inputs
// a false or string input, program will return false.
//
// 
// 
//
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data typ
using namespace std; // So "std::cout" may be abbreviated to "cout"


 // Declare Global Variables
double getdata(string); // double variable getdata to hold value of string


int main()
{

	// Declare Variables 
	double feet;
	double inches;
	double centimeters;
	feet = getdata("feet"); // variable feet to hold value for feet as well as string "feet"
	inches = getdata("inches"); // variable inches to hold value for inches as well as string "inches"\

	// Set conversion for values into centimeters
	centimeters = (12. * feet + inches) * 2.54;


	// Print out values for inches and feet into centimeters
	cout << feet << " feet " << inches << " inches=" << setprecision(2) << fixed << centimeters << " centimeters\n" << endl;
	system("pause");
	

	// Show application close
	cout << "\nEnd of my Application" << endl;
}
// double getdata function
double getdata(string userinput)
{

	// values for do function to catch any false errors 
	bool done = false;
	double input = 0;
	string error = "input failed";

	do
	{
		// try function to catch any errors 
		try
		{
			// Show application header
			cout << "Welcome to my My Measurement Progaram!" << endl;
			cout << "--------------------------" << endl << endl;
			// Prompt User to enter
			cout << "Enter number to convert to centimeter " << userinput << ": ";
			cin >> input;
			if (cin.fail())
				throw error;
			if (input < 0)
				throw - 1;
			done = true;
		}
		catch (int) // function to catch any negative or inproper int values that are inputted
		{
			cout << "invalid number entered\n";
			input = 0;
		}
		catch (string error) //function to catch any string values that are inputted
		{
			cout << error << "-wrong, non digit value entered ";
			cin.clear();
			cin.ignore(1000000, '\n');
		}
	}
	// while function 
	while (!done); // function to return user's input if not done
	return input;

	

}





