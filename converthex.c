/*
	Programa que converte da base decimal para a base hexadecimal	
	AUTOR: GABRIEL HENRIQUE CAMPOS SCALICI
	NUMERO: 9292970
	DATA:29-04-2015
*/

#include<stdio.h>

int main(){

	//Declarando variaveis
	long int n;
	
	//Pegnado o valor digitado pelo usuario
	scanf("%ld", &n);

	//Usando uma mascara no proprio printf para que seja transformado
	printf("%lX", n);

	return 0;
}
