/*
 * pratica3.cpp
 *
 *  Created on: 19 de ago de 2019
 *      Author: henrique
 */
#include <iostream>
#include "funcoes.h"
#include "arranjo.h"

using namespace std;

int main(){
//	int x = 5, y = 10, z = 30;
//	float x = 5.5, y = 10.15, z = 30.7;
//
//	funcoes::trocar(x,y);
//	cout<<"O mínimo entre "<< x <<" e "<< y <<" é: "
//			<<funcoes::minimo(x,y)<<endl;
//	cout<<"O máximo entre "<< x <<" e "<< y <<" é: "
//			<<funcoes::maximo(x,y)<<endl;
//
//	const char * str1 = "Omega";
//	const char * str2 = "Alpha";
//	cout<<"A maior string é: "<<funcoes::maximo(str1,str2)<<endl;

	Arranjo<int> arr(10);
	arr.set(4,5);
	arr.set(7,15);
	arr.set(8,22);
	arr.exibir();

	return 0;
}
