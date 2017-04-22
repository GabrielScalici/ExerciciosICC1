/*
	Programa que verifica a quantidade de vezes que um caracter aparece em uma string	
	AUTOR: GABRIEL HENRIQUE CAMPOS SCALICI
	NUMERO: 9292970
	DATA:
*/

#include<stdio.h>
#include<stdlib.h>

//VAriaveis globais
char * seq = NULL;
size_t tam;
char car;
int total;

int analisar_string(char * seq, size_t * tam, char * car){

	int cont = 0, i;

	//Logica para verificar todos os espacos da string
	for(i=0; i<*(tam); i++){
		//Caso encontre o caracter igual
		if(seq[i] == *(car)){
			cont++;
		}
	}

	//Retornando a quantidade de vezes encontrada
	return cont;
}


int main(){

	//Pegando a string digitada pelo usuario
	getline(&seq, &tam, stdin);

	//PEgando o valor do caracter a ser analisado
	scanf("%c", &car);

	//Chamando a funcao para analisar a quantidade de ocorrencias do caracter na string
	total = analisar_string(seq, &tam, &car);		

	//MOstrando para o usuario quantas vezes ocorreu o caracter
	printf("%d", total);
	
	return 0;
}
