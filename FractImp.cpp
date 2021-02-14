//**************************************************************
// Written by Steven Smail for COP3331
//
// FractImp.cpp (Project 3)
//
// This is the implementation file that contains the function
// definitions for the Constructor, the Mutator function, the
// Operator functions for + - * /, and the Operator functions
// for << and >>.
//**************************************************************

#include <cstdlib>     // Needed for abs()
#include "Fraction.h"
using namespace std;

// Constructor
Fraction::Fraction()
{ numerator = 0;
  denominator = 1;
  simplify(); }

// Mutator function
void Fraction::setFraction(int a, int b)
{ numerator = a;
  denominator = b;
  simplify(); }

//**********************************************
// Definition of member function simplify.
// This function simplifies each fraction into
// it's most reduced form.
//**********************************************
void Fraction::simplify()
{
  if(numerator > 1)
  {
    for(int i = numerator; i > 1; i--)
    {
      if((numerator % i == 0) && (denominator % i == 0))
      {
        numerator /= i;
        denominator /= i;
        return;
      }
    }
  }
  else if(numerator < -1)
  {
    for(int i = abs(numerator); i > 1; i--)
    {
      if((numerator % i == 0) && (denominator % i == 0))
      {
        numerator /= i;
        denominator /= i;
        return;
      }
    }
  }
}

//**********************************************
// Overloaded + operator
//**********************************************
Fraction Fraction::operator + (const Fraction &right)
{
  Fraction temp;

  if(denominator == right.denominator)
  {
    temp.numerator = numerator + right.numerator;
    temp.denominator = denominator;
  }

  else
  {
    temp.numerator = (numerator * right.denominator) +
                     (right.numerator * denominator);
    temp.denominator = denominator * right.denominator;
  }
  temp.simplify();
  return temp;
}

//**********************************************
// Overloaded - operator
//**********************************************
Fraction Fraction::operator - (const Fraction &right)
{
  Fraction temp;

  if(denominator == right.denominator)
  {
    temp.numerator = numerator - right.numerator;
    temp.denominator = denominator;
  }

  else
  {
    temp.numerator = (numerator * right.denominator) -
                     (right.numerator * denominator);
    temp.denominator = denominator * right.denominator;
  }
  temp.simplify();
  return temp;
}

//**********************************************
// Overloaded * operator
//**********************************************
Fraction Fraction::operator * (const Fraction &right)
{
  Fraction temp;

  temp.numerator = numerator * right.numerator;
  temp.denominator = denominator * right.denominator;
  temp.simplify();
  return temp;
}

//**********************************************
// Overloaded / operator
//**********************************************
Fraction Fraction::operator / (const Fraction &right)
{
  Fraction temp;

  temp.numerator = numerator * right.denominator;
  temp.denominator = denominator * right.numerator;
  temp.simplify();
  return temp;
}

//**********************************************
// Overloaded << operator
//**********************************************
ostream& operator << (ostream& os, const Fraction& fraction)
{
  // Note that we print out a / as it is simply easier to do so!
  os << fraction.numerator << " / " << fraction.denominator;
  return os;
}

//**********************************************
// Overloaded >> operator
//**********************************************
istream& operator >> (istream& is, Fraction& fraction)
{
  char ch;

  is >> fraction.numerator;   //get the numerator
  is >> ch;                   //read and discard the '/'
  is >> fraction.denominator; //get the denominator
  return is;
}
