/*
	Programa que analisa o tamanho das variaveis aprendidas em sala
	AUTOR: GABRIEL HENRIQUE CAMPOS SCALICI	
	NUMERO: 9292970
	DATA: 12-04-15

*/

#include<stdio.h>

int main(void){

	//Declarando as variaveis para ser possivel medir os tamanhos
	char a;

	//Usando Sizeof para mostrar o tamanho de cada variavel
	printf("%ld\n", sizeof(char));
	printf("%ld\n", sizeof(unsigned int));
	printf("%ld\n", sizeof(short int));
	printf("%ld\n", sizeof(int));	
	printf("%ld\n", sizeof(long int));
	printf("%ld\n", sizeof(unsigned long int));
	printf("%ld\n", sizeof(long long int));
	printf("%ld\n", sizeof(float));
	printf("%ld\n", sizeof(double));
	printf("%ld\n", sizeof(long double));


	return 0;
}
