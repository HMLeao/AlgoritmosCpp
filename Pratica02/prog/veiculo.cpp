/*
 * veiculo.cpp
 *
 *  Created on: 6 de ago de 2019
 *      Author: henrique
 */
#include "veiculo.h"

int Veiculo::getNumRodas()
{
	return this->numRodas;
}

void Veiculo::setNumRodas(int num)
{
	delete []rodas;
	this->rodas = new Roda[num]();
	this->numRodas = num;
}



