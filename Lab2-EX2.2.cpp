#include<iostream>
#include<conio.h>
#include<math.h>

using namespace std;

class Complex
{
	friend bool operator > (Complex&, Complex&);
	friend bool operator >= (Complex&, Complex&);
	friend bool operator == (Complex&, Complex&);
	friend bool operator != (Complex&, Complex&);
	friend bool operator <= (Complex&, Complex&);
	friend bool operator < (Complex&, Complex&);

private:
	double Real;
	double Imaginar;
public:
	inline Complex(double Re, double Im) { Real = Re; Imaginar = Im; };
	void ToString();
};


void Complex::ToString()
{
	if (Imaginar > 0) cout << Real << "+" << Imaginar << "j";
	else cout << Real << Imaginar << "j";
	cout << endl;
}

void main()
{
	Complex a1(2, 3), a2(3, -4);
	if (a1 > a2)
		cout << "a1 >= a2" << endl;
	else
		cout << "a1 < a2" << endl;
	_getch();
}

bool operator > (Complex& x, Complex& y)
{
	if (sqrt(x.Real * x.Real + x.Imaginar * x.Imaginar) > sqrt(y.Real * y.Real + y.Imaginar * y.Imaginar))
		return true;
	else
		return false;
}

bool operator >= (Complex& x, Complex& y)
{
	{
		if (sqrt(x.Real * x.Real + x.Imaginar * x.Imaginar) >= sqrt(y.Real * y.Real + y.Imaginar * y.Imaginar))
			return true;
		else
			return false;
	}
}
bool operator == (Complex& x, Complex& y)
{
	{
		if (sqrt(x.Real * x.Real + x.Imaginar * x.Imaginar) == sqrt(y.Real * y.Real + y.Imaginar * y.Imaginar))
			return true;
		else
			return false;
	}
}

bool operator != (Complex& x, Complex& y)
{
	{
		if (sqrt(x.Real * x.Real + x.Imaginar * x.Imaginar) != sqrt(y.Real * y.Real + y.Imaginar * y.Imaginar))
			return true;
		else
			return false;
	}
}
bool operator <= (Complex& x, Complex& y)
{
	{
		if (sqrt(x.Real * x.Real + x.Imaginar * x.Imaginar) <= sqrt(y.Real * y.Real + y.Imaginar * y.Imaginar))
			return true;
		else
			return false;
	}
}
bool operator < (Complex& x, Complex& y)
{
	{
		if (sqrt(x.Real * x.Real + x.Imaginar * x.Imaginar) < sqrt(y.Real * y.Real + y.Imaginar * y.Imaginar))
			return true;
		else
			return false;
	}
}