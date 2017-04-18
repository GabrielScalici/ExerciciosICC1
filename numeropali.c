/*
	Programa que verifica se um numero é palindromo	
	AUTOR: GABRIEL HENRIQUE CAMPOS SCALICI
	NUMERO: 9292970
	DATA:
*/

#include<stdio.h>

int main(){

	//CRiando as variaveis 
	int n,aux ;
	int metadeoposta =0;
	
	//PEgando o valor digitado pelo usuario
	scanf("%d", &n);
	
	//Adicionando o mesmo valor digitado para pegar a metade oposta
	aux = n;
	
	//LOgica para verificar se o numero é um palindromo por meio de divisões, multiplicações e módulo
	while (aux != 0) {
    		//Vai pegando os ultimos digitos de n e transformando em um novo numero com metade do tamanho do inicial
		metadeoposta = metadeoposta*10 + aux%10;  
    		aux = aux / 10;                     
  	}

 	if (metadeoposta != n){  	
		//Se a metade de tras for diferente da metade da frente, entao nao eh
    		printf("NAO");
	}else{ 			
		//Se a metade de tras for igual a metade da frente entao eh
    		printf("SIM");
	}

	
	return 0;
}
