#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;

class Mamifer
{
public:
	Mamifer();
	~Mamifer();

};
class Felina : public Mamifer
{
public: 
	Felina();
	~Felina();
};
class Canida : public Mamifer
{
public:
	Canida();
	~Canida();

};
class Pisica : public Felina
{ 
	public: 
	Pisica();
	~Pisica();
};
class Leu : public Felina
{
public:
	Leu();
	~Leu();
};
class Caine : public Canida
{
	public:
		Caine();
		~Caine();
};
Mamifer::Mamifer() { cout << "Mamifer este constructor" << endl; };
Mamifer::~Mamifer() { cout << "Mamifer distrus" << endl; };
Felina::Felina() { cout << "Felina este constructor" << endl; };
Felina::~Felina() { cout << "Felina distrusa" << endl; };
Pisica::Pisica() { cout << "Pisica este constructor" << endl; };
Pisica::~Pisica() { cout << "Pisica distrusa" << endl; };
Leu::Leu() { cout << "Leu este constructor" << endl; };
Leu::~Leu() { cout << "Leu distrus" << endl; };
Canida::Canida() { cout << "Canida este constructor" << endl; };
Canida::~Canida() { cout << "Canida distrus" << endl; };
Caine::Caine() { cout << "Caine este constructor" << endl;};
Caine::~Caine() { cout << "Caine distrus" << endl; };
void main()
{ 
	int i;
	for (i = 0; i < 1; i++)
	{
		Pisica pisica;
		Leu leu;
		Caine caine;
		_getch();

	}
	_getch();
}