/*
	Programa que faza media entre quatro numeros descartando o menor deles
	AUTOR: GABRIEL HENRIQUE CAMPOS SCALICI	
	NUMERO: 9292970
	DATA: 12-04-15

*/

#include<stdio.h>

int main(void){

	//Declarando variaveis 
	float num1, num2, num3, num4, soma;
	
	//Pegando os valores digitados pelo usuario
	scanf("%f %f %f %f", &num1, &num2, &num3, &num4);

	//Analisando qual é o menor valor e fazendo a soma com os maiores
	if(num1<=num2 && num1<=num3 && num1<=num4){
		soma = num2+num3+num4;
	}else if(num2<=num1 && num2<=num3 && num2<=num4){
		soma = num1+num3+num4;
	}else if(num3<=num1 && num3<=num2 && num3<=num4){
		soma = num1+num2+num4;
	}else if(num4<=num1 && num4<=num2 && num4<=num3){
		soma = num1+num2+num3;
	}

	//Fazendo a divisao e exibindo a media com quatro casas decimais
	soma=soma/3;
	printf("%.4f", soma);




	return 0;
}
