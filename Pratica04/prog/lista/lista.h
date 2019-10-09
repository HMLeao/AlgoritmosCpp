#ifndef LISTA_H_
#define LISTA_H_

#include <iostream>

using namespace std;

template <class T>
class Lista{
private:
    T * itens;
    int capacidade;
    int tamAtual;
public:
    Lista(int cap) {
        itens = new T[cap]();
        capacidade = cap;
        tamAtual = 0;
    }

    ~Lista(){
        delete []itens;
    }

    T pega(int idx) {        
        T valorRetorno = 0;
        if(idx < (tamAtual-1)) {
            idx++;
            valorRetorno = itens[idx];
        } else {
            cout << "tamanho atual: " << tamAtual <<endl;
            cout << "indice invalido!" << endl;
            exibe();
        }
        return valorRetorno;
    }

    void adiciona(const T & item) {
        if(tamAtual < capacidade) {
            itens[tamAtual] = item;
            tamAtual++;
            cout << "adicionando: " << item << endl;
            exibe();
        } else {
            cout << "lista cheia!" << endl;
        }
    }

    void insere(int idx, const T & item) {
        if((tamAtual < capacidade) || (idx < tamAtual-1) || (idx>1)){
            int ultimoIdx;
            T temp = 0;
            for(ultimoIdx = ((capacidade-tamAtual)-1);ultimoIdx>=idx;ultimoIdx--) {
                temp = itens[ultimoIdx];
                itens[ultimoIdx+1] = temp;
            }
            itens[idx-1] = item;
            exibe();
            tamAtual++;
        } else {
             cout << "lista cheia!" << endl;
        }
    }

    void remove(int idx) {
        if(tamAtual>0){
            idx--;
            for(int i=idx; i < (tamAtual-1); i++) {
                itens[idx] = itens[idx+1];
               // itens[idx+1] = 0;
            }
            exibe();
            tamAtual--;
            cout << "tamanho atual: " << tamAtual <<endl;
        } else {
            cout << "lista vazia" << endl;
        }
    }

    void exibe() {
        for(int i=0; i<(tamAtual-1); i++) {
            cout << itens[i] << " ";
        }
        cout << endl;
    }
};

#endif