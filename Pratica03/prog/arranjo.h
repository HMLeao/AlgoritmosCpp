/*
 * arranjo.h
 *
 *  Created on: 10 de set de 2019
 *      Author: henrique
 */

#ifndef ARRANJO_H_
#define ARRANJO_H_

#include <iostream>
#include <exception>

using namespace std;

class AcessoEx: public exception {
public:
	const char* what() const throw() {
		return "Tentativa de acesso invalido!";
	}
};

template <class T>
class Arranjo{
private:	
	int tamanho;
	T * itens = NULL;
public:
	Arranjo(int tam) {
		//instanciar o array de itens com new (pratica 1) e seta tamanho
		itens = new T[tam]();
		tamanho = tam;
	}

	virtual ~Arranjo() {
		// destruir o array de itens
		delete []itens;
	}

	virtual T get(int idx) {
		//retorna um item do array a partir do indice
		if ((idx<0 )||(idx>=tamanho))
		{
			AcessoEx acEx;
			throw acEx;
		}
		return itens[idx];
	}

	virtual void set(int idx, const T & item) {
		//seta o item do array apontado pelo índice usando =
		if ((idx<0 )||(idx>=tamanho))
		{
			AcessoEx acEx;
			throw acEx;
		}
		itens[idx] = item;
	}

	virtual void exibir();
};


template <class T>
void Arranjo<T>::exibir() {
	//exibir cada item do array numa linha da forma "<idx>: <item>"
	for(int i=0;i<this->tamanho;i++){
		cout<<"<"<<i<<">: <"<<this->itens[i]<<">"<<endl;
	}
}



#endif /* ARRANJO_H_ */
