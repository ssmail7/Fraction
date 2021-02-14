//***************************************************************
// Written by Steven Smail for COP3331
//
// FractDriver.cpp (Project 3)
//
// This is the driver program that tests the Fraction class
// and operator overloads.
//***************************************************************

#include <iostream>
#include "Fraction.h"
using namespace std;

int main ()
{
  // Create two fraction objects
  Fraction number1;
  Fraction number2;

  // User inputs fractions
  cout << "\nEnter the first fraction in the form a / b: ";
  cin >> number1;
  cout << "\nEnter the second fraction in the form a / b: ";
  cin >> number2;

  cout << endl;

  // General Output
  cout << "Fraction 1 = " << number1 << endl;
  cout << "Fraction 2 = " << number2 << endl;

  // Addition Output
  cout << number1 << " + " << number2
       << " = " << number1 + number2 << endl;

  // Subtraction Output
  cout << number1 << " - " << number2
       << " = " << number1 - number2 << endl;

  // Multiplication Output
  cout << number1 << " * " << number2
       << " = " << number1 * number2 << endl;

  // Division Output
  cout << "(" << number1 << ")" << " / "
       << "(" << number2 << ")" 
       << " = " << number1 / number2 << endl;
}