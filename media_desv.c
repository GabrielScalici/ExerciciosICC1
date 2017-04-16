/*
	Programa que calcula a media harmonica atraves de funcoes basicas	
	AUTOR: GABRIEL HENRIQUE CAMPOS SCALICI
	NUMERO: 9292970
	DATA:29-05-2015
*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int n;
double * seq = NULL;
double total=0, media=0, desv=0, fracao=0;

//FUcnao para ler o valor n
int readInt(){
	int n;	

	scanf("%d", &n);

	return n;
}

//FUncao para ler os valores reais
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



//FUncao principal	
int main(){
	double den =0;		
	int i;

	//CHamando a primeira funcao
	int n = readInt();
	
	//CHamando a segunda funcao
	double *seq = readDouble(&n);	

	//Calculando a media
	for(i=0; i<n; i++){
		media += *(seq+i)/n;
	} 
	
	//Calculando o desvio padrao
	for(i=0; i<n; i++){
		fracao += pow(*(seq+i)-media, 2)/n; 	
	}
	
	desv = sqrt(fracao);

	printf("%.4lf\n%.4lf", media, desv);
	
		
	//Liberando a memoria heap
	free(seq);

	return 0;
}
