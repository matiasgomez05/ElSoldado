#pragma once
#include "Arma.h";

class Rifle : Arma
{
public:
	string nombre = "Rifle";
	string disparar() { return "P�m p�m p�m!..."; }
};

