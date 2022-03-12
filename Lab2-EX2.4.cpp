#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
#define ARRAY_ELEMENTS 10

using namespace std;

class Complex
{
	

private:
	double Real;
	double Imaginar;
public:
	inline Complex() {
		Real = rand() % 20; Imaginar = rand() % 20;}
	friend bool operator > (Complex, Complex);
	friend bool operator >= (Complex, Complex);
	friend bool operator == (Complex, Complex);
	friend bool operator != (Complex, Complex);
	friend bool operator <= (Complex, Complex);
	friend bool operator < (Complex, Complex);

	void ToString();
	float Mod();
};


void Complex::ToString()
{
	if (Imaginar > 0) cout << Real << "+" << Imaginar << "j\t";
	else if (Imaginar == 0) cout << Real<<"\t";
	else cout << Real << Imaginar << "j\t";
	cout << Mod();
	cout << endl;
};
float Complex::Mod()
{
	return sqrt(Real * Real + Imaginar * Imaginar);
};

int main()
{
	Complex* c = new Complex[ARRAY_ELEMENTS];
	bool sortat = false;
	while (!sortat)
	{
		sortat = true;
		for (int i = 0; i < ARRAY_ELEMENTS - 1; i++) {
			if (c[i] > c[i + 1])
			{
				Complex aux = c[i];
			c[i] = c[i + 1];
			c[i + 1] = aux;
			sortat = false;
			}
		}
	}
	for (int i = 0; i < ARRAY_ELEMENTS; i++)
	{
		c[i].ToString();
	}
	_getch();
	return 0;
}

bool operator > (Complex x, Complex y)
{
	if (sqrt(x.Real * x.Real + x.Imaginar * x.Imaginar) > sqrt(y.Real * y.Real + y.Imaginar * y.Imaginar))
		return true;
	else
		return false;
};

bool operator >= (Complex x, Complex y)
{
	{
		if (sqrt(x.Real * x.Real + x.Imaginar * x.Imaginar) >= sqrt(y.Real * y.Real + y.Imaginar * y.Imaginar))
			return true;
		else
			return false;
	}
};
bool operator == (Complex x, Complex y)
{
	{
		if (sqrt(x.Real * x.Real + x.Imaginar * x.Imaginar) == sqrt(y.Real * y.Real + y.Imaginar * y.Imaginar))
			return true;
		else
			return false;
	}
};

bool operator != (Complex x, Complex y)
{
	{
		if (sqrt(x.Real * x.Real + x.Imaginar * x.Imaginar) != sqrt(y.Real * y.Real + y.Imaginar * y.Imaginar))
			return true;
		else
			return false;
	}
};
bool operator <= (Complex x, Complex y)
{
	{
		if (sqrt(x.Real * x.Real + x.Imaginar * x.Imaginar) <= sqrt(y.Real * y.Real + y.Imaginar * y.Imaginar))
			return true;
		else
			return false;
	}
};
bool operator < (Complex x, Complex y)
{
	{
		if (sqrt(x.Real * x.Real + x.Imaginar * x.Imaginar) < sqrt(y.Real * y.Real + y.Imaginar * y.Imaginar))
			return true;
		else
			return false;
	}
};