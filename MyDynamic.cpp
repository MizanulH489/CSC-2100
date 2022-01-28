//==========================================================
//
// Title:      CSC 2111 - Lab 10-My Dynamic Array
// Course:     CSC 2111
// Lab Number: Lab 10
// Author:     Mizanul Haque
// Date:      2/12/2921
// Description:
//  C++ Program that runs a set of array of values using dynamic variables and pointers.
// It prompts user to enter a set of numbers, which it then fills using dynmamic array and printing out.
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

 // Declare void functions
void fillUp(int data[], int size);
void showArray(int values[], int size);



int main()
{

  // Declare variables
	int size = 0;
	
	

	

  // Show application header
  cout << "Welcome to my My Dynamic Array!" << endl;
  cout << "--------------------------" << endl << endl;


  // Prompt user to enter integer
  cout << "How many values: ";
  cin >> size;
  
  // Create the dynamic array arr
  int *arr = new int[size]; // dynamic array new int holds value of size 

 

  // Call fillup() function with the dynamic array
  fillUp(arr, size);

  cout << "You entered : " << size << endl;

  // Call showArray() function with the dynamicArray
  showArray(arr, size);

  // Delete the dynamic array
  delete[] arr;

  return 0;

  // Show application close
  cout << "\nEnd of my Application" << endl;

}


   // Declare void to fill up and then show array
void fillUp(int data[], int length) {
	cout << "Enter " << length << "numbers: \n";
	for (int i = 0; i < length; i++) 
	{
		cin >> data[i];
	}


}

void showArray(int values[], int size) {
	for (int i = 0; i < size; i++)
	{
		cout << values[i] << endl;
	}


}
