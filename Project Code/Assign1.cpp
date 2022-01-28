//==========================================================
//
// Title:      Assignment 1 Objects and Class
// Course:     CSC 2110
// Lab Number: Assignment 1
// Author:     Mizanul Haque
// Date:      1/19/2021
// Description:
//  This program uses classes and objects to show quiz and have user enter choices.
//
//
// 
//==========================================================
#include "MCquestion.h"
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type

using namespace std; // So "std::cout" may be abbreviated to "cout"

int main()
{
    // Show application header
    cout << "Assignment 01!" << endl;
    cout << "--------------------------" << endl << endl;


    // Prompt User to Enter Question
    MCquestion question1("In Pirates of the Caribben, what was Captain Jack Sparrow's ship name?");
    // Print choices to enter 
    question1.choices[0] = "The Marauder";
    question1.choices[1] = "The Black Pearl";
    question1.choices[2] = "The Black Python";
    question1.choices[3] = "The Slytherin";
    question1.display();

    // Set Correct Answer for the question
    question1.setCorrectAnswer(1);
    int correctOption;

    // Prompt User to Enter number
    cout << " "<<"\nChoice: ";
    cin >> correctOption;

    // Check to ensure input is correct
    if (question1.isCorrect(correctOption)) {
        cout << "Your Choice is correct. " << endl;
    }
    else {
        cout << "Your Choice is not Correct. " << endl;
    }

    return 0;
}