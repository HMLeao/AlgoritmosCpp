/*
 * funcoes.h
 *
 *  Created on: 19 de ago de 2019
 *      Author: henrique
 */

#ifndef FUNCOES_H_
#define FUNCOES_H_
#include <cstring>

namespace funcoes{
	template <class T>
	void trocar(T & a, T & b){
		T temp = b;
		b = a;
		a = temp;
	}


	template <class T>
	T maximo(const T a, const T b){
	return (a>b) ? a : b;
	}


	template <class T>
	T minimo(const T a, const T b){
		return (a<b) ? a : b;
	}

	template<>
	const char * maximo<const char *>(const char * a, const char * b){
		const char * result = "";
		if(strcmp(a,b)>0){
			result = a;
		}else if(strcmp(a,b)<0){
			result = b;
		}else{
			result = "iguais!";
		}
		return result;
	}

	template<>
	const char * minimo<const char *>(const char * a, const char * b){
		const char * result = "";
		if(strcmp(a,b)>0){
			result = b;
		}else if(strcmp(a,b)<0){
			result = a;
		}else{
			result = "iguais!";
		}
		return result;
	}
}

#endif /* FUNCOES_H_ */
