#pragma once
#include "Arma.h";

class Rifle : Arma
{
public:
	Rifle() { this->nombre = "Rifle"; }
	~Rifle() { };
	string disparar() { return "P�m p�m p�m!..."; }
};

