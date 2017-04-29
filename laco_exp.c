/*
	Programa que realiza calculos simples	
	AUTOR: GABRIEL HENRIQUE CAMPOS SCALICI
	NUMERO: 9292970
	DATA:
*/

#include<stdio.h>

int main(){
	
	double a, total;
	int b, i;

	//Pegando valores digitados
	scanf("%lf %d", &a, &b) ;

	//atribuindo valor iniacial para total, equivalente a x elevado a 1
	total = a;

	//logica para ver se o expoente eh zero	
	if(b==0){
		total =1;
	}else{
	
		//Logica para multiplicar a por ele mesmo, b vezes
		for(i=0; i<b-1; i++){
			total = total* a;
		}
	}
	//Imprimindo o resultado
	printf("%.4lf", total);

	return 0;
}
