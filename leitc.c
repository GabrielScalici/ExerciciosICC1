/*
	Programa que coloca nomes na forma bibliografica	
	AUTOR: GABRIEL HENRIQUE CAMPOS SCALICI
	NUMERO: 9292970
	DATA:10-05-15
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
	
	int i, cont, j, cont2;
	
	//Criando um ponteiro
	char *seq = NULL;
	
	//VAraivel para armazenar o tamano do ponteiro
	size_t tam = 0;
	
	//Usando funcao especifica que ja loca espacos na memoria dependendo da string
	getline(&seq, &tam, stdin);

	//Logica para analisar os espacos 
	for(i=0; i<tam; i++){
		//Pegando o local onde está cada um dos nomes
		if(seq[i]== ' '){
			cont = i;		
		}
		//Caso encontre o final da string
		if(seq[i]== '\0'){
			
			cont2 = i;
			
			//Exibindo o primeiro nome
			for(j=cont+1; j<cont2-1; j++){
				
				//MOStrando para o usuario
				printf("%c",toupper(seq[j]));		
			}
			
			//Ja encontrou entao sair
			break;	
		}
	}

	//Imprimindo uma virgula para que fique formato corretamente
	printf(", ");	

	for(i=0; i<cont; i++){
		//MOstrando o resto dos nomes
		printf("%c", seq[i]);
	}
	printf("\n");	 
     
	//Liberando a memoria heap
	free(seq);



	return 0;
}
