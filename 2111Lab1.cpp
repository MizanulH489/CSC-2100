//==========================================================
//
// Title:      CSC 2111 - Lab 1
// Course:     CSC 2111
// Lab Number: Lab 1
// Author:     Mizanul Haque
// Date:      1/12/2921
// Description:
//  C++ Program is the code template for CSC 2111. This program prompts the user to enter
// an integer and give an output of the individual digits as well as the sum of all the digits
// given out.
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

  // Declare variables
	int numb;
	int sum = 0;
	

	char ch[4];

  // Show application header
  cout << "Welcome to my Application!" << endl;
  cout << "--------------------------" << endl << endl;


  // Prompt user to enter integer
  cout << "Enter an Integer input: ";
  cin >> numb;
  

  while (numb != 0)
  {
	  sum = sum + (numb % 10);
	  numb = numb / 10;


  }

  int i;
  cout << "Enter a number to have it broken into digits: ";
  for (i = 0; i < 4; i++)
  {
	  cin.get(ch[i]);
  }
 

  cout << "The output of the individual digits are : " << ch[0] << " " << ch[1] << " " << ch[2] << " "
	  << ch[3] << " " << ch[4] << " " << endl;

  cout << "The sum of the  digits are: " << sum << endl;


  // Show application close
  cout << "\nEnd of my Application" << endl;

}
