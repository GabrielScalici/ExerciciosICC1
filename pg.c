/*
	Programa que faz progressoes geometricas baseado na quantidade desejada pelo usuario
	AUTOR: GABRIEL HENRIQUE CAMPOS SCALICI	
	NUMERO: 9292970
	DATA: 12-04-15

*/

#include<stdio.h>
#include<math.h>

int main(void){
	
	//Declarando variaveis 
	float a1, q, n, i, aux;

	float  soma, an;

	//Pegando os valores digitados pelo usuario
	scanf("%f %f %f", &a1, &q, &n);

	//Logica para mostrar a soma da sequencia
	soma = ((a1*(pow(q,n) - 1))/(q-1));

	//Logica para mostra o valor a_n
	an = (a1 * pow(q,n-1));
	
	//Exibindo os valores para o usuario
	printf("%.2f\n%.2f", an, soma);


	return 0;
}
