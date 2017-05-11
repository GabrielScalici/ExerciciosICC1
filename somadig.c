/*
	Programa que realiza a soma dos algarismos de um numero	
	AUTOR: GABRIEL HENRIQUE CAMPOS SCALICI
	NUMERO: 9292970
	DATA:29-04-2015
*/

#include<stdio.h>
#include<string.h>

int main(){
	
	//VAriaveis 
	int n, aux;
	int result =0;
	
	//PEgando os valores digitados	
	scanf("%d", &n);

	//ENquanto tiver algum valor em n, continue
	while(n>0){
		aux = (n%10); 		//pegando o resto da divisao por 10
		n = n/10;		//dividindo por 10 para pegar os proximos digitos no proximo loop	
		result = result + aux;	//somando o valor que ja esta na soma com o resto da divisao
	}

	//exibindo os valores para o usuario
	printf("%d", result);
	
	return 0;
}
