#ifndef PILHA_H_
#define PILHA_H_

#include <iostream>

using namespace std;

template <class T>
class Fila{
private:
    
public:
    Fila(int cap) : tam(0), posAtual(0) {

    }

    ~Fila() {

    }

    void enfileira(const T & item) {

    }

    T desenfileira() {

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