/*
	Programa que mostra os numeros i congruente modulo m de j, mostrando os n primeiros.	
	AUTOR: GABRIEL HENRIQUE CAMPOS SCALICI
	NUMERO: 9292970
	DATA: 29-04-15
*/

#include<stdio.h>
	
int main(){

	//Variaveis 
	int n, j, m;
	int cont =0;
	int i =1;
	
	//Pegando os valores do usuario
	scanf("%d %d %d", &n, &j, &m);
	
	//Logica para analisar os n primeiros numeros
	while(cont < n){
		if(i%m == j%m){
			printf("%d\n", i);
			cont++; //Aumenta 1 quando é congruente, para ter os n primeiros numeros	
		}		

		i++; //Aumenta em i para que todos os numeros possam ser analisados
	}

	return 0;
}
