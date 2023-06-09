#pragma once
#include "Arma.h";

class Escopeta : Arma
{
public:
	Escopeta() { this->nombre = "Escopeta"; }
	~Escopeta() { };
	string disparar() { return "бPссс!..."; }
};

