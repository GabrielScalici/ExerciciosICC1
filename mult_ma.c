/*
	Programa que realiza a multiplicacao de matrizes	
	AUTOR: GABRIEL HENRIQUE CAMPOS SCALICI
	NUMERO: 9292970
	DATA:
*/

#include<stdio.h>
#include<stdlib.h>

	//VAriaveis globais
	int **seq = NULL;
	int **seq2 = NULL;
	int **total = NULL;
	int nl1, nc1, nl2, nc2;



//FUncao para criar a primeira matriz
int **criar_matriz1(int * nl1, int *nc1){
	
	//Variaveis internas
	int i, j, aux;
	
	//Criando a quantidade de linhas na matriz
	seq = (int**)malloc(sizeof(int*) * *(nl1));

	//Percorrendo todas as linhas e criando as colunas
	for(i=0; i<*(nl1); i++){

		//LOcando em cada linha a quantidade de colunas
		seq[i] = (int*) malloc(sizeof(int)* *(nc1));

		//Percorrer e colocar os valores . em cada espaco
		for(j=0; j<*(nc1); j++){
			scanf("%d", &aux);
			seq[i][j] = aux; 
			
		}
	}

	return seq;
}



//FUncao para criar a segunda matriz
int **criar_matriz2(int * nl2, int *nc2){

        //Variaveis internas
        int i, j, aux;

        //Criando a quantidade de linhas na matriz
        seq2 = (int**)malloc(sizeof(int*) * *(nl2));

        //Percorrendo todas as linhas e criando as colunas
        for(i=0; i<*(nl2); i++){

                //LOcando em cada linha a quantidade de colunas
                seq2[i] = (int*) malloc(sizeof(int)* *(nc2));

                //Percorrer e colocar os valores . em cada espaco
                for(j=0; j<*(nc2); j++){
                        scanf("%d", &aux);
                        seq2[i][j] = aux;

                }
        }

        return seq2;
}


//Criando a matriz que vai receber a multiplicacao das duas matrizes
int **criar_total(int *nl1, int *nc2, int **seq, int **seq2, int *nc1, int*nl2){

        //Variaveis internas
        int i, j, aux;
	int k , l, soma=0;

        //Criando a quantidade de linhas na matriz
        total = (int**)malloc(sizeof(int*) * *(nl1));

        //Percorrendo todas as linhas e criando as colunas
        for(i=0; i<*(nl1); i++){

		//Zerando a soma
		soma = 0;

                //LOcando em cada linha a quantidade de colunas
                total[i] = (int*) malloc(sizeof(int)* *(nc2));

		
                //Percorrer e colocar os valores . em cada espaco
                for(j=0; j<*(nc2); j++){
			
			//Zerando o contador
			soma = 0;
			                       
			//Fazendo o calculo da soma
			for(k=0; k<*(nc1) || k<*(nl2) ;k++){

					 
					soma += seq[i][k] * seq2[k][j]; 
			}
			
			total[i][j]= soma;
                }
		
        }

        return total;
}



//Funcao principal
int main(){
	
	int **seq;
	int **seq2;	
	int i, j;

	//Pegando o tamanho da primeira matriz
	scanf("%d %d", &nl1, &nc1);	
	
	//CHamando a funcao para armazenar a primeira matriz
	seq = criar_matriz1(&nl1, &nc1);
	
	//PEgando os valores para a segunda matriz
	scanf("%d %d", &nl2, &nc2);

	//CHamando a funcao que armazena a segunda matriz
	seq2 = criar_matriz2(&nl2, &nc2);		
	
	//Chamando a matriz que faz a multiplicacao das duas matrizes
	total = criar_total(&nl1, &nc2, seq, seq2, &nc1, &nl2);
		
	//Exibindo a matriz com multiplicacao
	for(i=0; i<nl1; i++){
		for(j=0; j<nc2; j++){
			printf("%d ", total[i][j]);
		}
		printf("\n");
	}

	//Liberando os espacos na memoria heap	
	int k;
	for(k=0; k<nc1; k++){
		free(seq[k]);
	}	
	free(seq);


	return 0;
}
