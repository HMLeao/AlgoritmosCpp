/*
 * veiculo.h
 *
 *  Created on: 6 de ago de 2019
 *      Author: henrique
 */

#ifndef VEICULO_H_
#define VEICULO_H_

#include <iostream>

using namespace std;

class Roda
{
public:
	Roda(){
		cout<<"uma roda foi criada"<<endl;
	}
	~Roda(){
		cout<<"uma roda foi destruída"<<endl;
	}
};

class Veiculo{
private:
	string nome;
	int numRodas = 0;
	Roda * rodas = NULL;
public:
	Veiculo(const char * novoNome)
	{
		this->nome = string(novoNome);
		cout << "Novo veículo criado com o nome "<<this->nome<<endl;
	}
	~Veiculo()
	{
		delete []rodas;
		cout<<"Veículo "<<nome<<" foi destruído"<<endl;
	}
	int	getNumRodas();

	void setNumRodas(int);

//	void setNumRodas(int num)
//	{
//		this->rodas = new Roda[num]();
//		this->numRodas = num;
//	}

};





#endif /* VEICULO_H_ */
