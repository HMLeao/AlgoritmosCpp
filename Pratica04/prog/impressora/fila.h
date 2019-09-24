#ifndef PILHA_H_
#define PILHA_H_

#include <iostream>

using namespace std;

template <class T>
class Fila{
private:
    T * itens;
    int capacidade;
    int tam; // n de elementos da fila  
    int posAtual;
public:
    Fila(int cap) : tam(0), posAtual(0) {
        capacidade = cap;
        itens = new T[cap]();
    }

    ~Fila() {
        delete []itens;
    }

    void enfileira(const T & item) {
        if(tam < capacidade) {
            itens[(posAtual+tam)%capacidade] = item;
            tam++;
        } else {
            cout << "Fila cheia!" << endl;
        }
    }

    T desenfileira() {
        T valorRetorno = 0;
        if(posAtual >= 0) {
            valorRetorno = itens[posAtual];
            posAtual = (posAtual+1) % capacidade;
            tam--;
        } else {
            cout << "fila vazia!" << endl;
        }
        return valorRetorno;
    }

    int cheia() {
        return (tam < capacidade) ? 0 : 1;
    }

    int  vazia() {
        return (tam > 0) ? 0 : 1;
    }

    int tamanho() {
        return tam;
    }
};

#endif