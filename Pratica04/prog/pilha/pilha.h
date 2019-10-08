#ifndef PILHA_H_
#define PILHA_H_

#include <iostream>

using namespace std;

template <class T>
class Pilha{
private:
    T * itens = NULL;
    int capacidade;
    int topo;
public:
    Pilha(int cap) : capacidade(cap),  topo(0) {
        itens = new T[cap]();
    }

    ~Pilha() {
        delete []itens;
    }

    void empilha(T item) {
        if(topo < capacidade) {
            itens[topo] = item;
            // cout<<"empilhando: "<<itens[topo]<<endl;
            topo++;
        } else {
            cout<<"Estouro de pilha!";
        }
    }

    T desempilha() {
        T dado = 0;
        if (topo > 0) {
            topo--;
            dado = itens[topo];
            // cout<<"desempilhando: "<<itens[topo]<<endl;
        } else {
            cout<<"Pilha vazia!";
        }
        return dado;
    }
};

#endif