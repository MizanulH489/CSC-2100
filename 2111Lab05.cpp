//==========================================================
//
// Title:      Lab 5 Boxes and Rectangles
// Course:     CSC 2110
// Lab Number: Lab 5
// Author:     Mizanul Haque
// Date:      1/27/2021
// Description:
//  This program uses classes and objects to show quiz and have user enter choices from a base class of Rectangle to a derived
// class of Box.
//
//
// 
//==========================================================
#include "Box.h"
#include "Rectangle.h"
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type

using namespace std; // So "std::cout" may be abbreviated to "cout"




int main() {

	
	// Show application header
	cout << "Welcome to my  Box Rectangle Application!" << endl;
	cout << "--------------------------" << endl << endl;



 
	    // Create  Objects Box
	Box b1(2, 4, 6);
	Box b2(3, 5, 7);

	// Print Area and Volume for both items
	cout << "Box 1" << endl;
	b1.print();
	cout << "Area: " << b1.area() << endl;
	cout << "Volume: " << b1.Volume() << endl;

	cout << "---------------------" << endl;

	cout << "Box 2" << endl;
	b2.print();
	cout << "Area: " << b2.area() << endl;
	cout << "Volume: " << b2.Volume() << endl;

	return 0;


	// Show application close
	cout << "\nEnd of my Application" << endl;
}