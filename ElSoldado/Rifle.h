#pragma once
#include "Arma.h";

class Rifle : Arma
{
public:
	string nombre = "Rifle";
	string disparar() { return "Púm púm púm!..."; }
};

