/*
	Programa que exibe n linhas da piramede de pascal	
	AUTOR: GABRIEL HENRIQUE CAMPOS SCALICI
	NUMERO: 9292970
	DATA:01-05-15
*/

#include<stdio.h>

int main(){

	char aux=0;//0 ttrabalha com a seq , e 1 trabalha com seq2
	int n;
	int seq* = NULL;
	int seq2* = NULL;

	//Pegando o valor digitado pelo usuario
	scanf("%d", n);


	//LOgica para fazer a piramede de pascal
	for(i=1; i<=n; i++){
		//Aumentando o espaço na memoria heap de acordo com o numeto de linhas
		seq = (int *)realloc(seq, sizeof(int)*i);  
		seq2 = (int *)realloc(seq2, sizeof(int)*i);  
		//Valores para o primeiro espaco na memoria
		seq[1]=1;
		seq2[1]=1;
		//Logica para atribuir valores para as linhas		
		
	

	}


	return 0;
}
