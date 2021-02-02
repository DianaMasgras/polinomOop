#include "Polinom.h"

Polinom::Polinom(int grad)
{
	this->grad = grad;
	this->coeficienti = new int[this->n];
	for (int i = 0; i < n; i++)
	{
		coeficienti[i] = 0;
	}
}

Polinom::~Polinom()
{
	cout << "am apalelat destructorul:";
	delete coeficienti;
}

Polinom::Polinom(const Polinom& myPolinom)
{
	this->n = myPolinom.n;
	this->coeficienti = new int[this->n];
	for (int i = 0; i < this->n; i++)
		this->coeficienti[i] = myPolinom.coeficienti[i];
	cout << "se apeleaza constructorul de copiere";
}

Polinom Polinom::operator=(Polinom& myPolinom)
{
	this->n = myPolinom.n;
	this->coeficienti = new int[this->n];
	for (int i = 0; i < this->n; i++)
		this->coeficienti[i] = myPolinom.coeficienti[i];
	cout << "se apeleaza constructorul de copiere";
	return (*this);
}

ostream& operator<<(ostream& flux, const Polinom& obiect)
{
	flux << "dimensiune este: " << obiect.n << "\n";
	cout << "Elementele vectorului sunt ";
	for (int i = 0; i < obiect.n; i++)
		flux << obiect.coeficienti[i];
	return flux;
}