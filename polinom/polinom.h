#pragma once
#include <iostream>
using namespace std;

class Polinom
{
private:
	int grad;
	int* coeficienti;
	int n;
public:
	Polinom(int n = 1);
	~Polinom();
	Polinom(const Polinom& myPolinom);
	Polinom operator=(Polinom& myPolinom);
	friend ostream& operator<<(ostream& flux, const Polinom& obiect);
	friend istream& operator>>(istream& flux, Polinom& obiect);

};
