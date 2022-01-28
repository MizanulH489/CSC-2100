// Course:     CSC 2111
// Lab Number: Lab 6
// Author:     Mizanul Haque
// Date:      1/29/2021
// Description:
//  C++ Program is the code template for CSC 2111. This program implements properties to find perimeter. 
// 
// 
// 
//
//==========================================================
#include "lineType.h"
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"







int main() 
{
	
  // Show application header
  cout << "Welcome to my Application!" << endl;
  cout << "--------------------------" << endl << endl;
	
	// Print main here 
	pointType p1(2, 3), p2(4, 5);
	cout << setprecision(2) << fixed << p1.distance(p2) << endl;
	lineType l1(2, 0, 2, 1);
	lineType l2(3, 7, -1, 8);
	lineType l3(2, 5, 3, 5);
	cout << l1.Vert_Line() << endl;
	cout << l1.HorzonatalLines() << endl;
	cout << l2.Vert_Line() << endl;
	cout << l2.HorzonatalLines() << endl;
	cout << l3.Vert_Line() << endl;
	cout << l3.HorzonatalLines() << endl;
	l1.lineEquation();
	l3.lineEquation();
	l1.intersectionPoint(l2).print();
	return 0;

	cout << "\nEnd of my Application" << endl;

}