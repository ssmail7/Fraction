//***************************************************************
// Written by Steven Smail for COP3331
//
// Fraction.h (Project 3)
//
// This is the class file that contains the Fraction class and
// function prototypes for the Constructor, the Mutator function,
// the Operator functions for + - * /, and the Operator functions
// for << and >>.
//***************************************************************

#ifndef FRACTION_H
#define FRACTION_H

#include <iostream>
using namespace std;// Fraction class declarationclass Fraction{  private:    int numerator;    int denominator;
    void simplify();  public:
    // Constructor
    Fraction();

    // Mutator    void setFraction(int a, int b);

    // Overloaded + - * and /
    Fraction operator + (const Fraction &);
    Fraction operator - (const Fraction &);
    Fraction operator * (const Fraction &);
    Fraction operator / (const Fraction &);

    // Overloaded << and >>
    friend ostream& operator << (ostream&, const Fraction&);
    friend istream& operator >> (istream&, Fraction&);
};
#endif