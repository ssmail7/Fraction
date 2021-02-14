//***************************************************************
// Written by Steven Smail for COP3331
//
// FractImp.cpp (Project 3)
//
// This is the implementation file that contains the function
// definitions for the Constructor, the Mutator function, the
// Operator functions for + - * /, and the Operator functions
// for << and >>.
//***************************************************************

#include <cstdlib>     // Needed for abs()
#include "Fraction.h"
using namespace std;

// Constructor
Fraction::Fraction()
  denominator = 1;
  simplify(); }

// Mutator function
  denominator = b;
  simplify(); }

//**********************************************
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
//**********************************************
  {
    temp.numerator = numerator + right.numerator;
    temp.denominator = denominator;
  }
  {
                     (right.numerator * denominator);
    temp.denominator = denominator * right.denominator;
  }
  temp.simplify();
//**********************************************
  {
    temp.numerator = numerator - right.numerator;
    temp.denominator = denominator;
  }
  {
                     (right.numerator * denominator);
    temp.denominator = denominator * right.denominator;
  }
  temp.simplify();

//**********************************************
//**********************************************
  temp.simplify();

//**********************************************
//**********************************************
  temp.simplify();

//**********************************************
// Overloaded << operator
//**********************************************
{
}

//**********************************************
//**********************************************
{

}