#ifndef PILHA_H_
#define PILHA_H_

#include <iostream>

using namespace std;

template <class T>
class Fila{
private:

    class Node {
    public:
        T dado;
        Node * prox;
    };

    Node * inicio;
    Node * fim;

    int capacidade;
public:
    Fila(int cap) : capacidade(cap) {
        inicio = NULL;
        fim = NULL;
    }

    ~Fila() {
        delete inicio;
        delete fim;
    }

    void enfileira(const T & item) {
        Node * newNode = new Node();
        newNode->prox = null;
        newNode->dado = item;
        if (inicio == NULL) {   // Fila está vazia
            inicio = newNode;
        } else {                //A fila está vazia
            final->prox = newNode;
        }   
        final = newNode;
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