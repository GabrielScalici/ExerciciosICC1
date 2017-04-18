/*
	Programa que mostra os multiplos de dois numeros	
	AUTOR: GABRIEL HENRIQUE CAMPOS SCALICI
	NUMERO: 9292970
	DATA:29-04-2015
*/

#include<stdio.h>

int main(){

	int n, i, j;
	int cont =0;
	int aux=0;
	
	//PEgando dos valores digitados pelo usuario
	scanf("%d %d %d", &n, &i, &j);
	
	//LOgica so com menor estrito para que sejam exibidos apenas os n primeiros
	while(cont < n){
		if(aux%i==0 || aux%j==0){
			printf("%d\n", aux);
			cont++; //Para que possam ser analisados os n primeiros numeros que sao multiplos
		}
		
		aux++; //Analisar todos os numeros
	}

	return 0;

}
