/*
	Programa que realiza a listagem de uma sequencia 	
	AUTOR: GABRIEL HENRIQUE CAMPOS SCALICI
	NUMERO: 9292970
	DATA:
*/

#include<stdio.h>
#include<stdlib.h>


int main(){

	int n, i, j,cont=1;
	double *seq = NULL; 
	double aux;	

	//Pegando o valor de n
	scanf("%d", &n);

	//Alocando um ponteiro com n valores
	seq = (double*)malloc(sizeof(double)*n);

	//Armazenando os valores no ponteiro
	for(i=0; i<n; i++){
		//PEgando os valores da sequencia digitda pelo usuario
		scanf("%lf", &aux);
		seq[i] = aux;	

	}


	//Organizando os valores 
	for(i=0; i<n; i++){

		//LOgica para pegar os proximos valores
		for(j=0; j<n; j++){
			
			//Variaveis auxiliares para ajudar na transicao dos valores 
			double menor;
			
			//Comparando qual eh maior
			if(seq[j] > seq[i]){
				menor = seq[i];
				seq[i] = seq[j];
				seq[j] = menor; 
			}	
		}
	}

	//Eliminando a repeticao e fazendo a conagem na hora de exibir para o usuario	
	for(i=0; i<n; i++){

		
		//Exibi o valor
		i = i +(cont-1);
		
		printf("%.1lf ", seq[i]);
		
		if(i == n-1){

			printf("%d\n", cont);
		}else{
		cont =1;

		//LOgica paraanalisar se o valor esta sendo repetido
		for(j=i+1; j<n; j++){
			
			
				//Analisando se os proximos valores sao iguais
				if(seq[i]==seq[j]){
					//Aumenta um valora para exibir quantas repeticoes tem
					cont++;
				}else{
					//Caso seja diferente saia do for para fazer a proxima analise
					break;
				}
		}

		printf("%d\n", cont);
		}
	}

	//LIberando os espacos na memoria heap
	free(seq);

	return 0;
}
