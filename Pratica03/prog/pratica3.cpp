/*
 * pratica3.cpp
 *
 *  Created on: 19 de ago de 2019
 *      Author: henrique
 */
#include <iostream>
#include "funcoes.h"
#include "arranjo.h"
#include "aluno.h"

using namespace std;

int main(){
	
	// int x = 5, y = 10, z = 30;
	// // float x = 5.5, y = 10.15, z = 30.7;
	// trocar(x,y);
	// // funcoes::trocar(x,y);
	// cout<<"O minimo entre "<< x <<" e "<< y <<" e: "
	// 		<<minimo(x,y)<<endl;
	// cout<<"O maximo entre "<< x <<" e "<< y <<" e: "
	// 		<<maximo(x,y)<<endl;

	/***********************************************************/

	// const char * str1 = "Omega";
	// const char * str2 = "Alpha";
	// cout<<"A maior string e: "<<maximo(str1,str2)<<endl;

	
	/***********************************************************/


	// int x = 5, y = 10, z = 30;
	// // float x = 5.5, y = 10.15, z = 30.7;

	// funcoes::trocar(x,y);
	// cout<<"O minimo entre "<< x <<" e "<< y <<" e: "
	// 		<<funcoes::minimo(x,y)<<endl;
	// cout<<"O maximo entre "<< x <<" e "<< y <<" e: "
	// 		<<funcoes::maximo(x,y)<<endl;

	/***********************************************************/

	// const char * str1 = "Omega";
	// const char * str2 = "Alpha";
	// cout<<"A maior string e: "<<funcoes::minimo(str1,str2)<<endl;

	/***********************************************************/

	// Arranjo<int> arr(10);
	// arr.set(4,5);
	// arr.set(7,15);
	// arr.set(8,22);
	// arr.exibir();


	/***********************************************************/


	// Arranjo<float> arr(5);
	// arr.set(0,4.56);
	// arr.set(1,2.35);
	// arr.set(2,3.67);
	// arr.set(3,9.876);
	// arr.set(4,5.94);

	// try{
	// 	arr.set(9,6.5);
	// }catch(AcessoEx &e){
	// 	cout<<"Um erro ocorreu: "<<e.what()<<endl;
	// }

	// try{
	// 	cout<<arr.get(-1)<<endl;
	// }catch(AcessoEx &e){
	// 	cout<<"Um erro ocorreu: "<<e.what()<<endl;
	// }
	// arr.exibir();

	/***********************************************************/

	Arranjo<Aluno> turma(3);

	turma.set(0, Aluno("Joao","1234"));
	turma.set(1, Aluno("Maria","5235"));
	turma.set(2, Aluno("Jose","2412"));

	turma.exibir();

	return 0;
}
