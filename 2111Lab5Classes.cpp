//==========================================================
//
// Title:      Bank Account Class Application - Lab 3 Assignment 5
// Course:     CSC 2111
// Lab Number: Lab 3-Assignment 5
// Author:     Mizanul Haque
// Date:      1/19/2021
// Description:
//  This program uses classes to show the amount balance of two Users/accounts, using private fields and constructors.
// It prints the original balance for both accounts, and allows the user to withdrawl or deposit any amount of money.
//
// 
//==========================================================
#include <cstdlib> // For several general-purpose functions
#include <fstream> // For file handling
#include <iomanip> // For formatted output
#include <iostream> // For cin, cout, and system
#include <string> // For string data type
using namespace std; // So "std::cout" may be abbreviated to "cout"


 // Produces a Bank Account Class that contains private fields, constructors, and methods for balance, desposit, and withdrawl
class Account{
private:
string cust_name; 
double bank_account; 

public:
Account(string name, double b_a)  // Constructor for Account
{
cust_name = name;
bank_account = b_a;



}
// String function to get Access User's name and balance for Account Users, and to return a value
string getName()
{
return cust_name; // return value of Customer's name to User
}

double getBalance()
{
return bank_account; // return value of bank account
}
           // Void function to allow code to deposit and withdraw an account
void deposit(double bal)
{
 bank_account += bal; // Add/Deposit function to User's Account
}

void withdraw(double bal)
{
	bank_account -= bal; // Withdrawl function to remove from User's account
}
};

int main()
{


	// Show application header
	cout << "Welcome to AMC Bank Services!" << endl;
	cout << "--------------------------" << endl << endl;


	// Producing two objects to use 
	Account account1("Mizanul", 1000);
	Account account2("Mizan", 2000);


         // Show Account 1's name and initial balance
	
	cout << "Account 1 information:" << endl;
	cout << "Customer name: " << account1.getName(); // function to get account 1's Username from object Account
	cout << "\nAccount balance: " << account1.getBalance(); // function to get account 1's Username from object Account
	cout << endl;

	     // Function to add money to Account 1's balance and then display it
	account1.deposit(10000);             
	cout << "\nAccount Details after deposit:";
	cout << "\nCustomer name: " << account1.getName();
	cout << "\nAccount balance: " << account1.getBalance();
	cout << endl;


	// Show Account 2's name and initial balance

	cout << "\nAccount 2 information:";
	cout << "\nCustomer name: " << account2.getName();
	cout << "\nAccount balance: " << account2.getBalance();
	cout << endl;

	// Function to withdraw money from Account 2's balance and then print final display 
	account2.withdraw(1400); 
	cout << "\nAccount Details after Withdrawl:";
	cout << "\nCustomer name: " << account2.getName();// function to get account 2's Username from object Account
	cout << "\nAccount balance: " << account2.getBalance(); // function to get account 2's Username from object Account
	cout << endl;
	
	
	cout << "\nEnd of my Application" << endl;
}

