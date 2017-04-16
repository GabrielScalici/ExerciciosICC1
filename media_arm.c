/*
	Programa que calcula a media harmonica atraves de funcoes basicas	
	AUTOR: GABRIEL HENRIQUE CAMPOS SCALICI
	NUMERO: 9292970
	DATA:29-05-2015
*/

#include<stdio.h>
#include<stdlib.h>

int n;
double * seq = NULL;
double fracao;

//FUncoes basicas pre-estabelecidas

int readInt(){
	int n;	

	scanf("%d", &n);

	return n;
}

double* readDouble(int * n){
	int i;

	for(i=0; i<*(n); i++){
		
		//Locando espacos na memoria heap
		seq = (double*)realloc(seq, sizeof(double)*(i+1));

		//Armazenando vaores digitados pelo usuario
		scanf("%lf", (seq+i));
	}	

	//Retornando o endereco do vetor
	return seq;
}

void printDouble(double *fracao){

	printf("%.2lf", *(fracao));
} 


//FUncao principal	
int main(){
	double den =0;		
	int i;

	//CHamando a primeira funcao
	int n = readInt();
	
	//CHamando a segunda funcao
	double *seq = readDouble(&n);	

	//Calculando a media armonica
	//1. Denominador
	for(i=0; i<n; i++){

		den += 1/(*(seq+i)+1);	
	}

	//Fracao
	fracao = n/den;

	//Subtraindo 1
	fracao -= 1;

	//CHamando a funcao para exibir o valor da media
	printDouble(&fracao);
		 
	//Liberando a memoria heap
	free(seq);

	return 0;
}
