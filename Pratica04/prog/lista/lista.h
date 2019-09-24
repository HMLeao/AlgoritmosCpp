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
    Lista(int cap){
        itens = new T[cap]();
        capacidade = cap;
        tamAtual = 0;
    }

    ~Lista(){
        delete []itens;
    }

    T pega(int idx) {
        idx++;
        T valorRetorno = 0;
        if(idx>(tamAtual-1)) {
            valorRetorno = itens[idx];
        } else {
            cout << "indice invalido!" << endl;
        }
        return valorRetorno;
    }

    void adiciona(const T & item) {
        if(tamAtual < capacidade) {
            itens[tamAtual] = item;
            tamAtual++;
        } else {
            cout << "lista cheia!" << endl;
        }
    }

    void insere(int idx, const T & item) {
        if((tamAtual < capacidade) || (idx < tamAtual-1) || (idx>1)){
            int ultimoIdx;
            ultimoIdx = (capacidade-tamAtual)-1;
            T temp = 0;
            for(;ultimoIdx>=idx;ultimoIdx--) {
                temp = itens[ultimoIdx];
                itens[ultimoIdx+1] = temp;
            }
            itens[idx-1] = item;
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
            tamAtual--;
        } else {
            cout << "lista vazia" << endl;
        }
    }

    void exibe() {
        for(int i=0; i<tamAtual; i++) {
            cout << itens[i] << " ";
        }
        cout << endl;
    }
};

#endif