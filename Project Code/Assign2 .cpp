//==========================================================
//
// Title:      Assignment 3- Pointers and Class 
// Course:     CSC 2110
// Lab Number: Assignment 3
// Author:     Mizanul Haque
// Date:      1/29/2021
// Description:
//  This program uses inheritance to produce a short answer quiz as well as a regular quiz for user to utilize. This has numeric
// answers at all, and now requires user to enter only numeric answers.
//
//
// 
//==========================================================


#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
#include "Quiz.h"

using namespace std; // So "std::cout" may be abbreviated to "cout"


using namespace std;

int main()
{
	cout << "Assignment 03" << endl;

	Quiz quiz1;

	// Define Question 1
	NAquestion* pq1 = new NAquestion("How many soccer players on the field for 1 team", 10, 12);
	// Define Question 2
	NAquestion* pq2 = new NAquestion("How many basketball players on the court for 1 team", 4, 6);
	// Define Question 3
	NAquestion* pq3 = new NAquestion("How many goalies on the field for 1 team", 0, 2);
	// Set questions in the quiz
	quiz1.setQuestion(0, pq1);
	quiz1.setQuestion(1, pq2);
	quiz1.setQuestion(3, pq3);
	// Start quiz
	quiz1.startAttempt();
	// Reset quiz
	quiz1.resetAttempt();
}
