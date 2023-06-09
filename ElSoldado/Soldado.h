#pragma once
#include"Arma.h";

class Soldado { 

protected:
	Arma *arma;
public:
	Soldado(Arma* arma) { this->arma = arma; };
	~Soldado() { delete arma; };
	void recogerArma(Arma *arma);
	void dejarArma();
	void disparar();
	void verArma();
};

