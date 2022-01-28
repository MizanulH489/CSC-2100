//==========================================================
//
// Title:      CSC 2111 - Lab 10-My Dynamic Array part 2
// Course:     CSC 2111
// Lab Number: Lab 10
// Author:     Mizanul Haque
// Date:      2/12/2921
// Description:
//  C++ Program that runs a set of array of values using dynamic variables and pointers.
// It prompts user to enter a string, which it then fills using dynmamic array and printing it out in capital letter
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

 


int main()
{


	

  // Show application header
  cout << "Welcome to my My Dynamic Array part 2!" << endl;
  cout << "--------------------------" << endl << endl;

  // Declare Variables

  char *input;
  input = new char[80]; // Dynamic Array holding  char of 80
  int length;
  int i;

  // Prompt User to enter input
  cout << "Enter a input: ";

  cin.get(input, 50); // get function
  cout << endl;
  
  // Print output of string 
  cout << "Your String in upper case letters is:" << endl;

  length = strlen(input); // set length to equal strl by whatever string User enters


  // Take User's input and turn string into capital letters
  for (i = 0; i < length; i++)
	  cout << static_cast<char>(toupper(*(input + i))); // function to take string inpute and capetalize it 
       cout << endl;



  // Show application close
  cout << "\nEnd of my Application" << endl;

}



