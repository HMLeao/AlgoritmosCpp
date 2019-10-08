/*
 * pratica01.cpp
 *
 *  Created on: 5 de ago de 2019
 *      Author: henrique
 */

#include <iostream>
#include <chrono>

#include "veiculo.h"

using namespace std;


int main()
{
//	Parte 1
//	passo 3:
//	cout << "Primeira aplicação C++" << endl;

//	Parte 2
//	passo 5:
	{
	Veiculo veiculo1("v1");
	{
		Veiculo veiculo2("v2");
		{
			Veiculo veiculo3("v3");
		}
	}
	}

//	passo 6:
//	Veiculo * veiculo1 = new Veiculo("v1");
//	{
//		Veiculo * veiculo2 = new Veiculo("v2");
//		{
//			Veiculo * veiculo3 = new Veiculo("v3");
//		}
//	}

//	passo 7:
	Veiculo * veiculo1 = new Veiculo("v1");
	{
		Veiculo * veiculo2 = new Veiculo("v2");
		{
			Veiculo * veiculo3 = new Veiculo("v3");
			delete veiculo3;
		}
		delete veiculo2;
	}
	delete veiculo1;

////	Parte 3:
	int nRodas = 4;
	Veiculo * carro = new Veiculo("Carro");



	auto start = chrono::high_resolution_clock::now();

//	for(int i = 0;i<1000;i++)
//	{
		carro->setNumRodas(nRodas);
		carro->setNumRodas(nRodas);
//	}
	cout<<"O veículo criado tem "<<carro->getNumRodas()<<" rodas"<<endl;
	auto finish = chrono::high_resolution_clock::now();
	long elapsed = chrono::duration_cast<chrono::nanoseconds>(finish-start).count()/1000;

	cout<<"tempo (us) = "<<elapsed<<endl;

	delete carro;
	return 0;
}

