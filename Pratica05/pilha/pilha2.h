#ifndef PILHA_H_
#define PILHA_H_

#include <iostream>

using namespace std;

template <class T>
class Pilha{
private:

    class Node {
    public:
        T dado;
        Node * prox;
    };

    Node * topo;  
    int max;

public:
    Pilha(int capMax) {
        max = capMax;
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
        T dado = 0;
        if(topo != NULL){
            dado = topo->dado;
            Node * temp = topo;
            topo = topo->prox;
            delete temp;
        } else {
             cout<<"Pilha vazia!";
        }
        return dado;
    }
};

#endif