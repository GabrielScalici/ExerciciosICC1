/*
	Programa que faz operacao bit a bit com dois numeros digitados pelo usuario
	AUTOR: GABRIEL HENRIQUE CAMPOS SCALICI
	NUMERO: 9292970
	DATA: 15-04-15

*/

#include<stdio.h>

int main(void){

	//Variaveis 
	int num1, num2;
	int and, or, xor, compa, compb, rish, lesh;
	
	//Pegando os valores inteiros digitados pelo usuario
	scanf("%d %d", &num1, &num2);
	
	//Fazendo as operacoes
	and = num1 & num2;
	or = num1 | num2;
	xor= num1 ^ num2;
	compa = ~ num1;
	compb = ~ num2;
	rish = num1 >> 2;
	lesh = num2 << 2;

	//MOstrando as opercoes
	printf("%d\n", and);
	printf("%d\n", or);
 	printf("%d\n", xor);
 	printf("%d\n", compa);
 	printf("%d\n", compb);
 	printf("%d\n", rish);
	printf("%d\n", lesh);

	
	return 0;
}
