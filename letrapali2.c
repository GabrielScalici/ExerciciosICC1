/*
	Programa que realiza calculos simples	
	AUTOR: GABRIEL HENRIQUE CAMPOS SCALICI
	NUMERO: 9292970
	DATA:
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

	char seq[255];
	int i, j, tam;	
	int pali =1;	

	scanf("%s", seq);
		
	tam = strlen(seq);
	
	char seq2[tam];

	//CRiar uma sequencia que eh a inversa da primeira
	for(i=0; i<tam;i++){
		
		seq2[i] = seq[(tam-i)-1];
		
	}

	//Comparando as duas sequencias
	for(i=0; i<tam; i++){
		if(seq[i] != seq2[i]){
			pali = 0;
		}
	}
	
	if(pali == 0){
		printf("NAO");
	}else{
		printf("SIM");
	}

	return 0;
}
