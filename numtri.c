/*
	Programa que verifica se um numero eh triangulares
	AUTOR: GABRIEL HENRIQUE CAMPOS SCALICI
	NUMERO: 929297
	DATA: 13-04-15

*/

#include<stdio.h>

int main(void){

	//Variaveis
	int num, i, prox;
	int aux = 0;
		
	//Pegando o valor digitado pelo usuario
	scanf("%d", &num);

	//Logica para ver se eh triangular
	for(i=+1;i<=num ;i++){
		aux = aux+i;
		
		if(num==aux){
			printf("SIM\n");
			i++;
			prox = aux+i; //Mostrar o proximo numero triangular
			printf("%d\n", prox);
			//Verificando se a soma é um quadrado
			if(prox+num%4){
				printf("SIM");
			}else{
				printf("NAO");
			}
			break;
		}else if(num==i){
			printf("NAO");
			break;
		}			
	}


	return 0;



}

