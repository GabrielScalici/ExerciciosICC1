/*
	Programa que pega a parte inteira de um numero real, a parte depois da virgula e o numero arredondado
	AUTOR: GABRIEL HENRIQUE CAMPOS SCALICI
	NUMERO: 9292970
	DATA: 13-04-15

*/

#include<stdio.h>
#include<math.h>

int main(void){

	//Variavel que vai ser utilizada
	double num, frac, ni, arred;

	//Pegar o valor digitado pelo usuario
	scanf("%lf", &num);

	//Funcao para pegar a parte inteira e a parte depoisda virgula
	frac = modf(num, &ni);
	 
	printf("%.0lf\n%.4lf\n", ni, frac);

	//Logica para analisar para qual lado arredonda (para cima ou para baixo)
	if(frac<0.5){
		arred = ni;
	}else{
		arred = ni+1;
	}

	//Mostrando o valor arredondado
	printf("%.0lf", arred);

	return 0;	
}
