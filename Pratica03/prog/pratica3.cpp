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
	// int x = 5, y = 10, z = 30;
	// float x = 5.5, y = 10.15, z = 30.7;

	// funcoes::trocar(x,y);
	// cout<<"O mínimo entre "<< x <<" e "<< y <<" é: "
	// 		<<minimo(x,y)<<endl;
	// cout<<"O máximo entre "<< x <<" e "<< y <<" é: "
	// 		<<maximo(x,y)<<endl;

	// const char * str1 = "Omega";
	// const char * str2 = "Alpha";
	// cout<<"A maior string é: "<<maximo(str1,str2)<<endl;

	// int x = 5, y = 10, z = 30;
	// float x = 5.5, y = 10.15, z = 30.7;

	// funcoes::trocar(x,y);
	// cout<<"O mínimo entre "<< x <<" e "<< y <<" é: "
	// 		<<funcoes::minimo(x,y)<<endl;
	// cout<<"O máximo entre "<< x <<" e "<< y <<" é: "
	// 		<<funcoes::maximo(x,y)<<endl;

	// const char * str1 = "Omega";
	// const char * str2 = "Alpha";
	// cout<<"A maior string é: "<<funcoes::maximo(str1,str2)<<endl;

	// Arranjo<int> arr(10);
	// arr.set(4,5);
	// arr.set(7,15);
	// arr.set(8,22);
	// arr.exibir();

	Arranjo<float> arr(5);
	arr.set(0,4.56);
	arr.set(1,2.35);
	arr.set(2,3.67);
	arr.set(3,9.876);
	arr.set(4,5.94);

	try{
		arr.set(9,6.5);
	}catch(AcessoEx &e){
		cout<<"Um erro ocorreu: "<<e.what()<<endl;
	}

	try{
		cout<<arr.get(-1)<<endl;
	}catch(AcessoEx &e){
		cout<<"Um erro ocorreu: "<<e.what()<<endl;
	}
	arr.exibir();


	return 0;
}
