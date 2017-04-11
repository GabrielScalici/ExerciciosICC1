/*
	Programa que verifica correção de gabaritos	
	AUTOR: GABRIEL HENRIQUE CAMPOS SCALICI
	NUMERO: 9292970
	DATA:01-06-2015
*/

#include<stdio.h>
#include<stdlib.h>

	//VAriaveis Globais
	char ** seq = NULL;
	int nq, na;

//FUncao para criar a matriz
char **criar_matriz(int * nl1, int *nc1){

        //Variaveis internas
        int i, j;
	char aux;

        //Criando a quantidade de linhas na matriz
        seq = (char**)malloc(sizeof(char*) * *(nl1));

        //Percorrendo todas as linhas e criando as colunas
        for(i=0; i<*(nl1); i++){

                //LOcando em cada linha a quantidade de colunas
                seq[i] = (char*) malloc(sizeof(char)* *(nc1));

                //Percorrer e colocar os valores . em cada espaco
                for(j=0; j<*(nc1); j++){
                        scanf("%c", &aux);
			seq[i][j] = aux;	
                }
		
		getchar();
	}


        return seq;

}



int main(){
	
	//PAra alocar a matriz
	char **seq;
        int i, j;
	double nota, corretos;	

	//Locando variaveis na memoria heap
	char * gab_correto = NULL;
	
	//PEgando os primeiros valores (numero de questoes -- numero de alunos)	
	scanf("%d %d", &nq, &na);	
	getchar();

	//Pegando o gabarito correto
	for(i=0; i<nq; i++){
		
		//Alocando na memoria heap o vetor com o gabarito correto
		gab_correto = (char*)realloc(gab_correto, sizeof(char)*i);
		
		//Salvando o valor digitado na string
		scanf("%c", gab_correto+i);
	}
	getchar();
	
	//Armazenando os gabaritos dos alunos em uma matriz
	//Onde cada linha eh um aluno difente com o gabarito completo
	seq = criar_matriz(&na, &nq);
	
	//Comparando o gabarito correto com o dos alunos
	for(i=0; i<na; i++){

		//ZErando o contador de questoes corretas 
		corretos =0;
		
		for(j=0; j<nq ; j++){
		
			//Cada linha da matriz eh um aluno
			if(gab_correto[j]==seq[i][j]){
				
				//Aumentando um na quantidade de exercicios certos
				corretos++;
			}		
		
		}

		//Calculando a nota do aluno
		nota = (corretos*10)/nq;
		
		//Imprimindo para o usuario a nota do primeiro aluno 
		printf("%.2lf\n", nota);
	}


	

	//Liberando a memoria heap
	int k;
        for(k=0; k<na; k++){
                free(seq[k]);
        }
        free(seq);
	free(gab_correto);

	return 0;
}
