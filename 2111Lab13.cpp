//==========================================================
//
// Title:      Lab 13 Complex
// Course:     CSC 2111
// Lab Number: Lab 13
// Author:     Mizanul Haque
// Date:      1/27/2021
// Description:
//  This program uses a class complex to perform functions to give a result. Class Complex is utilized so as to perform
// addition and subtraction, as well as to ultimately overload the function.
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



class Complex
{
private: // Private Class holding int values
    int realnum;
    int imag;

public:
    Complex(int r = 0, int i = 0)
    {
        realnum = r; // Assign value for realnum, r
        imag = i;  // Assign value for imag, i 
    }

    //this is called when '+' is used between two Complex objects
    Complex operator + (Complex const& obj)
    {
        Complex res;
        res.realnum = realnum + obj.realnum;
        res.imag = imag + obj.imag;

        return res; //return value
    }
    void print()
    {
        cout << realnum << " + i" << imag << endl;
    }




    int main()
    {

        // Show application header
        cout << "Welcome to my  Complex Number Application!" << endl;
        cout << "--------------------------" << endl << endl;

        // Complex 
        Complex c1(10, 5), c2(2, 4);
        Complex c3 = c1 + c2; 
        c3.print();





        // Show application close
        cout << "\nEnd of my Application" << endl;


    }

    





};


	
