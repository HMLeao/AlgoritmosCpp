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
            itens[topo++] = item;
        } else {
            cout<<"Estouro de pilha!";
        }
    }

    T desempilha() {
        T dado = 0;
        if (topo > 0)
        {
            dado = itens[topo--];
        } else
        {
            cout<<"Pilha vazia!";
        }
        return dado;
    }
};