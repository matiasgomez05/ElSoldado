#pragma once
#include"Arma.h";

class Soldado { 

private:
	Arma *arma;
public:
	Soldado(Arma *arma);
	~Soldado();
	void recogerArma(Arma *arma);
	void dejarArma();
	void disparar();
	void verArma();
};

