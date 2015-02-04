//*******************************************
//An implementation of complex numbers.
//Trigonometric form: r * (cosFI + i * sinFI)
//
//Developed by Anastasiya Grigorieva
//on 04.02.2015
//Version 1.0
//*******************************************

class TComplex
{
	private:

	static int freeID;
	const int myID;

	//real numbers
	double _a;
	double _b;

	public:

	TComplex(double x=0, double y=0);
	TComplex(const TComplex &);
	~TComplex();

	TComplex& operator=(const TComplex &);

	double& a()				{ return _a;      }
	double& b()				{ return _b;      }
	const double& a()const  { return _a;      }
	const double& b()const  { return _b;      }
	const int getID() const { return myID; }
	static int amount()		{ return freeID;  }
};

ostream& operator<<(ostream&, const TComplex&);
const TComplex operator+(const TComplex &u, const TComplex & v);
TComplex& operator+=(TComplex&, const TComplex&);
bool operator==(const TComplex &u, const TComplex &v);
bool operator!=(const TComplex &u, const TComplex &v);