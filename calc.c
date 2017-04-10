/*
	Programa que realiza calculos simples	
	AUTOR: GABRIEL HENRIQUE CAMPOS SCALICI
	NUMERO: 9292970
	DATA:
*/

#include<stdio.h>

int main(){

	double a, b, total;
	char operador;

	scanf("%lf %c %lf", &a, &operador, &b);
	
	//selecionando qual operacao foi desejada
	switch(operador){

		case '+':
			total = a + b;
			break;
		case '-':
			total = a - b;
			break;
		case '*':
			total = a*b;
			break;
		case '/':
			total = a/b;
			break;
		case '%':
			total = (100*a)/b;
			break;
	
	}
	
	//exibindo o valor para o usuario
	printf("%lf", total);


	return 0;
}
