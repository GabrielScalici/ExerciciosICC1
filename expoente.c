/*
	Progrtama que analisa dois numeros digitados elo usuario e faz a potencia de um pelo outro
	AUTOR: GABRIEL HENRIQUE CAMPOS SCALICI	
	NUMERO: 9292970
	DATA: 12-04-15

*/	


#include <math.h>
#include <stdio.h>

int main(void){

	//Variaveis
	double n1, n2, total;

	//Pegando os valores digitados pelo usuario
	scanf("%lf %lf", &n1, &n2);
	
	//Usando a funcao matematica para fazer a exponenciacao
	total = pow( n1, n2);

	//Exibindo o valor da conta
	printf("%.4lf", total);




	return 0;
}
