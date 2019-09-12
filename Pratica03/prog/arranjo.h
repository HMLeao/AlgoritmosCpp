/*
 * arranjo.h
 *
 *  Created on: 10 de set de 2019
 *      Author: henrique
 */

#ifndef ARRANJO_H_
#define ARRANJO_H_

#include<iostream>

using namespace std;

template <class T>
class Arranjo{
private:
	int tamanho;
	T * items = NULL;
public:
	Arranjo(int tam) {
		//instanciar o array de items com new (pratica 1) e seta tamanho
		items = new T[tam]();
		tamanho = tam;
	}

	virtual ~Arranjo() {
		// destruir o array de items
		delete []items;
	}

	virtual T get(int idx) {
		//retorna um item do array a partir do indice
		return items[idx];
	}

	virtual void set(int idx, const T & item) {
		//set o item do araray apontado pelo índice usando =
		items[idx] = item;
	}

	virtual void exibir();
};


template <class T>
void Arranjo<T>::exibir() {
	//exibir cad item do array numa linha da forma "<idx>: <item>"
	for(int i=0;i<this->tamanho;i++){
		cout<<"<"<<i<<">: <"<<this->items[i]<<">"<<endl;
	}
}



#endif /* ARRANJO_H_ */
