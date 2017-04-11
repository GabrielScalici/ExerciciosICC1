/*Programa que le 3 variaveis e as imprime na tela em ordem crescente

	AUTOR: GABRIEL HENRIQUE CAMPOS SCALICI
	NUMERO: 9292970	
	DATA: 25-03-2015

*/

#include <stdio.h>

int main(){

//declarando as variaveis usadas no programa
int v1, v2, v3;

//lendo os numeros inteiros digitados pelo usuario
	scanf("%d\n%d\n%d",&v1, &v2, &v3 );

//logica para analisar qual variavel eh maior

	
	if(v1<=v2 && v1<=v3 )
	{	
		if(v2<=v3){
			printf("%d %d %d\n", v1, v2, v3);
		}else{
			printf("%d %d %d\n", v1, v3, v2);
		}

	}else if(v2<=v1 && v2<=v3)
	{
		if(v1<=v3){
			printf("%d %d %d\n", v2, v1, v3);
		}else{
			printf("%d %d %d\n", v2, v3, v1);
		}		
	}else if(v3<=v1 && v3<=v2){
		if(v1<=v2){
			printf("%d %d %d\n", v3, v1, v2);
		}else{
			printf("%d %d %d\n", v3, v2, v1);
		}

	}


return 0;
}
