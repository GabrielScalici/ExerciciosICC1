/*
	Programa que realiza calculos simples	
	AUTOR: GABRIEL HENRIQUE CAMPOS SCALICI
	NUMERO: 9292970
	DATA:
*/

#include<stdio.h>

int main(){

	int i, n, p, max, min;
	
	//pegando a quantidade de valores do conjunto
	scanf("%d", &n);

	
	for(i=0; i<n; i++){
		//pegando os valores de dentro do conjunto
		scanf("%d", &p);
		
		//Da primeira vez que rodar armazenar o valor como max e min
		if(i==0){
			max = p;
			min = p;
			
			//analisando se o valore de p é maior que o valor armazenado
		}else if(p>max){
				max = p; //realizando a troca
				//analisando se o valor de p eh menor que o de min
			} else if(p<min){
				min = p; //realizando a troca dos valores
				}
	}

	//mostrando os valores para o usuario
	printf("max: %d\nmin: %d", max, min);


	return 0;
}
