//*******************************************
//An implementation of complex numbers.
//Algebraic form: a + b*i
//
//Developed by Anastasiya Grigorieva
//on 04.02.2015
//Version 1.0
//*******************************************

class AComplex
{
	private:

	static int freeID;
	const int myID;
	
	//real numbers
	double _a;
	double _b;

	public:

	AComplex(double x=0, double y=0);
	AComplex(const AComplex &);
	~AComplex();

	AComplex& operator=(const AComplex &);

	double& a()				{ return _a;      }
	double& b()				{ return _b;      }
	const double& a()const  { return _a;      }
	const double& b()const  { return _b;      }
	const int getID() const { return myID; }
	static int amount()		{ return freeID;  }
};

ostream& operator<<(ostream&, const AComplex&);

// This type!
const AComplex operator+(const AComplex &u, const AComplex & v);
const AComplex operator+(const AComplex &u, const TComplex & v);
const AComplex operator+(const TComplex &u, const AComplex & v);

AComplex& operator+=(AComplex&, const AComplex&);
bool operator==(const AComplex &u, const AComplex &v);
bool operator!=(const AComplex &u, const AComplex &v);