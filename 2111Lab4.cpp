//==========================================================
//
// Title:      Alphabetizer - Lab 4 Number 3 Assignment
// Course:     CSC 2111
// Lab Number: Lab 1
// Author:     Mizanul Haque
// Date:      1/14/2021
// Description:
//  C++ Program is the code template for CSC 2111. This program prompts the user to input a stirng, or a series of characters,
//and then storing the string array in a char array. Following this, using ASCII Code, the program converts the set of string 
// letters into Uppercase letters.
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
    char st[50];
    int i;
    
    
    
    

  // Show application header
  cout << "Welcome to Alphabet Capitalizer!" << endl;
  cout << "--------------------------" << endl << endl;

    // Prompt User to input  Word/String
  cout << "Enter a string/word: ";
      cin >> st;
      cout << endl;

          // For loop to use ASCII code to turn letter into capital
      for (i = 0; i <= strlen(st); i++)  // function strlen to use string length from user input and after storing into char array

      {
       
          // if statement to store and search through ASCII 
          if (st[i] >= 97 && st[i] <= 122)
          {
              st[i] = st[i] - 32;
          }


      }

                    // Print entered string in Uppercase
      cout << "The entered string in uppercase: " << st;
      return 0;

  
  cout << "\nEnd of my Application" << endl;

}
