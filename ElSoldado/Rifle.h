#pragma once
#include "Arma.h";

class Rifle : Arma
{
public:
	Rifle() { this->nombre = "Rifle"; }
	~Rifle() { };
	string disparar() { return "Púm púm púm!..."; }
};

