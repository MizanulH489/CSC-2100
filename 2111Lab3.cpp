//==========================================================
//
// Title:      CSC 2111 - Lab 3
// Course:     CSC 2111
// Lab Number: Lab 1
// Author:     Mizanul Haque
// Date:      1/14/2021
// Description:
//  C++ Program is the code template for CSC 2111. This program declares an array and produces result.
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

int main()
{
     // Declare Constants
    const int ARRAY_SIZEP = 50;


  // Declare variables
	double alpha [ARRAY_SIZEP];
	
    
	

  // Show application header
  cout << "Welcome to my Application!" << endl;
  cout << "--------------------------" << endl << endl;

  // for loop statement regarding the integers and to square the i values

  for (int i = 0; i < 25; i++)
  {
      // Function for i*i=index times index
      alpha[i] = i * i;
      if (i > 25)
      {
          alpha[i] = i * i;
      }
  }
                 // Function to equalize to three times index variable
  for (int i = 25; i < 50; i++)
  {
      alpha[i] = i * i;
      if (i > 25)
      {
          alpha[i] = i * 3;
      }
  }




        // Function to print last ten arrays
  for (int i = 0; i < 50; i++)
  {
      if (i % 10 == 0)
      {
          cout << endl;
      }

      cout << setw(4) << alpha[i] << " ";


  }
  cout << "\nEnd of my Application" << endl;

}
