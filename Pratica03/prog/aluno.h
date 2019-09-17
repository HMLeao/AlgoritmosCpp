#ifndef ALUNO_H_
#define ALUNO_H_

#include <iostream>
#include "arranjo.h"

class Aluno
{
private:
	string nome;
	string mat;
public:
	Aluno(){};
	Aluno(const char * nome, const char * mat) : nome(nome), mat(mat){}
	
	friend class Arranjo<Aluno>;	

	Aluno & operator = (const Aluno & aluno){
		static Aluno temp;
		temp.mat = aluno.mat;
		temp.nome = aluno.nome;
		return temp;
	}
};

// template<>
// void Arranjo<Aluno>::set(int idx, const Aluno & aluno){
// 	// atribua nome e mat do item do array a partir de aluno
// 	this->itens[idx].nome = aluno.nome;
// 	this->itens[idx].mat = aluno.mat;
// }

template<>
void Arranjo<Aluno>::exibir(){
	// exiba cada aluno do array no formato "idx: mat = nome"
	for (int i = 0; i < this->tamanho; ++i)
	{
		cout<<i<<": "<<this->itens[i].mat<<" = "<<this->itens[i].nome<<endl;
	}
}

#endif // ALUNO_H_