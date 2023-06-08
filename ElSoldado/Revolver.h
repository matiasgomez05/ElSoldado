#pragma once
#include "Arma.h";

class Revolver : Arma
{
public:
	string nombre = "Revolver";
	string disparar() { return "Púm..."; }
};

