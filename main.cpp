//*******************************************
//An implementation of complex numbers.
//
//Developed by Anastasiya Grigorieva
//on 04.02.2015
//Version 1.0
//*******************************************

#include "AComplex.h"
#include "TComplex.h"
#include <iostream>
using namespace std;

int main()
{
	cout<< "a" <<endl;
	Point a(1, 2.4);
	cout<< "b" <<endl;
	Point b(1.5);
	
	cout<< "ab" <<endl;
	Segment ab(a,b);
	cout<< "ba" <<endl;
	Segment ba(b,a);

	cout<< "Segment g created via Segment(0);" <<endl;
	Segment g(0);
	
	cout << endl;

	cout << "ab length is " << ab.length() << endl;
	cout << "ba length is " << ba.length() << endl;
	cout << endl;

	cout<<"h is clone of ab"<<endl;
	Segment h(ab);
	cout << endl;

	h = ba;
	cout << "h=ba : " << h <<endl;
	cout << endl;

	cout<< "c" <<endl;
	Point c(3, 0);
	cout<< "Distance from Point c to Segment h is " << h.distance(c) <<endl;
	cout<< "Distance from Point a to Segment h is " << h.distance(a) <<endl;
	cout << endl;

	cout<<"TESTING COMPLETE" <<endl;
	
	cin.clear();
    cin.sync();
    cin.get();
	return 0;	
}