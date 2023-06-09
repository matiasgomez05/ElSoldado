#pragma once

#include<string>

using namespace std;

class Arma
{
protected:
	string nombre;
	Arma();
	virtual ~Arma();
	virtual string disparar();
};

