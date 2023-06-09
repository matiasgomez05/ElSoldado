#pragma once
#include "Arma.h";

class Revolver : Arma
{
public:
	Revolver() { this->nombre = "Revolver"; }
	~Revolver() { };
	string disparar() { return "Púm..."; }
};

