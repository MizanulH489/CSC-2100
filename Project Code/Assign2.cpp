//==========================================================
//
// Title:      Assignment 2 Inheritance
// Course:     CSC 2110
// Lab Number: Assignment 2
// Author:     Mizanul Haque
// Date:      1/29/2021
// Description:
//  This program uses inheritance to produce a short answer quiz as well as a regular quiz for user to utilize.
//
//
// 
//==========================================================

#include "Quiz.h"
#include <iostream> // For cin, cout, and system



using namespace std; 

int main()
{
    // Show application header
    cout << "Assignment 02!" << endl;
    cout << "--------------------------" << endl << endl;

    Quiz myQuiz;

    // Prompt User to Enter 1st Question
  myQuiz.question01.setText("Which country hosted the Fifa World Cup in 2018?");
    // Print choices to enter 
    myQuiz.question1.choices[0] = "UAE";
    myQuiz.question1.choices[1] = "Brazil";
    myQuiz.question1.choices[2] = "Russia";
    myQuiz.question1.choices[3] = "South Korea";
    myQuiz.question1.display();

    // Set Correct Answer for the question
    myQuiz.question1.setCorrectAnswer(3);

    // Prompt User to Enter 1st Question
    myQuiz.question02.setText("What year did Bangladesh achieve Independance??");
    
    // Set Correct Answer for the question 2
    myQuiz.question2.setCorrectAnswer("1971");


    // Prompt User to Enter 3rd Question
    myQuiz.question01.setText("Which country gifted the Statue of Liberty to the U.S.?");
    // Print choices to enter 
    myQuiz.question3.choices[0] = "Germany";
    myQuiz.question3.choices[1] = "Italy";
    myQuiz.question3.choices[2] = "France";
    myQuiz.question3.choices[3] = "China";
    myQuiz.question3.display();

    // Set Correct Answer for the question 3
    myQuiz.question3.setCorrectAnswer(2);

    // Prompt User to Enter 1st Question
    myQuiz.question04.setText("How many points did Germany score against Brazil in the Fifa World Cup 2014");

    // Set Correct Answer for the question 4
    myQuiz.question4.setCorrectAnswer("7");

    myQuiz.startAttempt();


   

    return 0;
}