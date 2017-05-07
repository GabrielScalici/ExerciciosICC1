/*
	Programa que faz progressoes aritmeticas baseado na quantidade desejada pelo usuario
	AUTOR: GABRIEL HENRIQUE CAMPOS SCALICI	
	NUMERO: 9292970
	DATA: 12-04-15

*/

#include<stdio.h>

int main(void){
	
	//Declarando variaveis 
	long int a1, r, n, i, aux, an;

	long int soma=0;

	//Pegando os valores digitados pelo usuario
	scanf("%ld %ld %ld", &a1, &r, &n);

	//Logica para mostrar a soma da sequencia
	for(i=0; i<n; i++ ){
		aux = a1+(i*r);
		soma = soma+aux;
	}
	
	//Logica para mostra o valor a_n
	an = a1+((n-1)*r);
	
	//Exibindo os valores para o usuario
	printf("%ld\n%ld", an, soma);


	return 0;
}
