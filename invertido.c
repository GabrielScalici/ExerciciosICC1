/*
	Programa que mostra a ordem inversa da sequencia que foi digitada	
	AUTOR: GABRIEL HENRIQUE CAMPOS SCALICI
	NUMERO: 9292970
	DATA:
*/

#include<stdio.h>
#include<stdlib.h>


int main(){

	//VAriaveis utilizadas no programa
	int n, i;
	int j = 1;
	

	//PEgando o valor da sequencia digitada pelo usuario
	scanf("%d", &n);
	
	int seq[n];
	
	//Fazendo uma logica para pegar os valores digitados e armazenar em uma sequecia 
	for(i=n; i>0; i--){		
		//PEgando os valores e armazenando na variavel
		scanf("%d", seq+i);
	}

	//MOstrando os valores da sequencia
	for(i=1; i<=n; i++){
		printf("%d\n", *(seq+i));
	}

	

	
	return 0;
}
