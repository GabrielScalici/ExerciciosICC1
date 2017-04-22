/*

	Programa que le duas sequencias de numeros inteiros, e soma os valores 
	um a um, apresentrando como saida o resultado da soma das posicoes pares

	AUTOR: Gabriel Henroique Campos Scalici
	NUMERO: 9292970	
	DATA: 04-06-2015
*/

#include<stdio.h>

int main(void){

	//variaveis
	int n, i, j;
	int aux;
	
	//variavel n que o usuario digita
	scanf("%d",&n);

	//declaracao do vetor
	int vetor[n], vetor2[n];
	
	//estrutura para colocar os valores no primeiro vetor
	for (i=0; i<n; i++){
		scanf("%d", vetor+i);	
	}
	
	//estrutura para colocar os valores no segundo vetor
	for (i=0; i<n; i++){
                scanf("%d", vetor2+i);
        }
        

	//logica para somar as posicoes pares dos vetores (incluindo a posicao 0)
	//aux++ para percorrer todas as posicoes
	for(aux=0; aux<n; aux++){
		int total= *(vetor+aux) + *(vetor2+aux);
		printf("%d ", total);
		//aux++ novamente para pular um numero e ir somente nos pares
		aux++;


	}
	printf("\n");	


return 0;
}
