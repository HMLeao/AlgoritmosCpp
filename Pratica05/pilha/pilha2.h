#ifndef PILHA_H_
#define PILHA_H_

#include <iostream>

using namespace std;

template <class T>
class Pilha{
private:

    template <class T>
    class Node {
        T dado;
        Node * prox;
    };

    Node * topo;

public:
    Pilha() {
        topo = NULL;
    }

    ~Pilha() {}

    void empilha(T item) {
        Node * newNode = new Node();
        newNode->dado = item;
        newNode->prox = topo;
        topo = newNode;
    }

    T desempilha() {
        if(topo != NULL){
            T dado = topo->dado;
            Node * temp = topo;
            topo = topo->prox;
            delete temp;
        } else {
            return 0;
        }
    }
};

#endif