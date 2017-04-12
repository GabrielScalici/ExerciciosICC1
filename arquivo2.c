/*
	Programa que faz a contagem de caracteres de um arquivo txt 	
	AUTOR: GABRIEL HENRIQUE CAMPOS SCALICI
	NUMERO: 9292970
	DATA: 05-06-15
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define ENTER 10

//FUcnao para somente ler o nome do arquivo
char *lendoNome(FILE *stream) {
	char value;
	char *nome = NULL;
	int cont = 0;
	
	//Enquanto for diferente do enter = 10 e nao for o fim da leitura
	while(value != ENTER && !feof(stream)) {
		value = fgetc(stream);
		if (value != ENTER && !feof(stream)) {
			//LOcando na memoria heap como string 
			nome = (char *) realloc(nome,sizeof(char) * (cont+1));
			//Armazenando no ponteiro locado na memoria heap
			nome[cont++] = value;
		}
	} 
	//PEgando o ultimo valor e colocando um fim de arquivo
	nome = (char *) realloc(nome,sizeof(char) * (cont+1));
	nome[cont++] = '\0';

	//Retornar esse ponteiro para uma variavel na main, para que possa ler o arquivo que possui esse nome
	return nome;
}

//FUncao para ler o arquivo
int readFile(char *filename) {
	//Variaveis internas	
	FILE *fp;
	char value;
	int cont = 0;
	double tam;

	//Abrindo o arquivo com fopen
	fp = fopen(filename, "r");

	//Se nao tiver nada, retornar null
	if (fp == NULL) {
		exit(0);
	}
	
	//Calculando o tamanho do arquivo (para usar sem o eof)
	fseek(fp, 0, SEEK_END);
	
	//Pegando o tamanho do arquivo
	tam = ftell(fp);

	//Atribuindo o tamanho, ah quantidade de caracteres que o arquivo possui
	cont = tam;
	
	//Fechando o arquivo que foi aberto
	fclose(fp);
	
	//REtornando o contador 
	return cont;
}


//FUncao principal
int main(){
	
	int num;
	char *nomeArq;

	//Utilizando a funcao somente para ter o nome do arquivo txt
	nomeArq = lendoNome(stdin);	
	
	//CHamando a funcao que faz a contagem dos caracteres de um arquivo	
	num = readFile(nomeArq);

	//Mostrando para o usuario a contagem
	printf("%d", num);


	//Liberando a memoria heap
	free(nomeArq);
	
	return 0;
}
