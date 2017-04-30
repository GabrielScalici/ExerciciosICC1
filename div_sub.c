/*
	Programa que realiza calculos simples	
	AUTOR: GABRIEL HENRIQUE CAMPOS SCALICI
	NUMERO: 9292970
	DATA:
*/

#include<stdio.h>

int main(){

	//variaveis
	int a, b, c, q, r;	

	//pegando os dados do usuario
	scanf("%d %d", &a, &b);

		

	//atribuindo o valor inicial do resto e do quociente
	r = a;
	q = 0;	

	//analisando se o valor do denominador eh zero
	if(b==1){
		q = a;
		r = 0;
	
	}else{
		while(r>b){
			a = a - b;
			q++;
			r = a;
		}
	}
	//mostrando os valores
	printf("%d\n%d", q, r);

	return 0;
}
