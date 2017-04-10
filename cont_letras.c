/*
	Programa que realiza a contagem de letras maiusculas em minuscula de uma determinada quantidade decaracteres	
	AUTOR: GABRIEL HENRIQUE CAMPOS SCALICI
	NUMERO: 9292970
	DATA:29-05-2015
*/

#include<stdio.h>
#include<stdlib.h>

int n=0;

//FUcnao que pega os valores dos caracteres
void pegar_char(int *n){
	
	int i;
	char letra;	
	int mai=0, min=0;
	int aux = *(n);	

	//Logica usada com base nos intervalos na tabela asc2 entre letras maiusculase minusculas
	for(i=0 ; i<aux*2 ; i++){
		
		//Pegando o valor em inteiro (asc2) da letra, já contando com o \n, que é ignorado na condicao do for
		scanf("%c", &letra);
		
		//Analisando com base na tabela asc2
		if(letra<='z' && letra >='a'){
			//Aumentando a conta na maiuscula
			min++;
		}else if(letra<='Z' && letra>='A'){
			//Aumentando a conta na minuscula
			mai++;
		}

	}	
	printf("%d %d\n", mai, min);

}


int main(){
	
	//Pegando a quantidade de letras digitadas
	scanf("%d", &n);
	
	//Chamando funcao para pegar os valores dos caracteres
	pegar_char(&n);		


	return 0;
}
