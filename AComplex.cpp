//*******************************************
//An implementation of complex numbers.
//Algebraic form: a + b*i
//
//Developed by Anastasiya Grigorieva
//on 04.02.2015
//Version 1.0
//*******************************************

#include "AComplex.h"
#include <iostream>

using namespace std;

int TComplex::freeID = 0;

TComplex::TComplex(double x=0, double y=0)
{

}

TComplex::TComplex(const TComplex &)
{

}

TComplex::~TComplex()
{

}

//TComplex& TComplex::operator=(const TComplex &);

//double& x()				{ return _x;      }
//double& y()				{ return _y;      }
//const double& x()const  { return _x;      }
//const double& y()const  { return _y;      }
//const int getID() const { return myID; }
//static int amount()		{ return freeID;  }

ostream& operator<<(ostream&, const TComplex&);
const TComplex operator+(const TComplex &u, const TComplex & v);
TComplex& operator+=(TComplex&, const TComplex&);
bool operator==(const TComplex &u, const TComplex &v);
bool operator!=(const TComplex &u, const TComplex &v);