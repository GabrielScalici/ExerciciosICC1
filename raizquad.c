/*
	Programa que verifica as raizes quadradas de uma equação do segundo grau	
	AUTOR: GABRIEL HENRIQUE CAMPOS SCALICI
	NUMERO: 9292970
	DATA:
*/

#include<stdio.h>
#include<math.h>

int main(){
	
	//variaveis
	float a, b, c;
	float r1, r2, delta;

	//Pegando os coefuicientes
	scanf("%f %f %f", &a, &b, &c);

	delta = (b*b)-(4*a*c);

	//Verificar se tem raizes imaginarias
	if(delta<0){
		
		delta = fabs(delta);
		r1 = (-b+sqrt(delta))/2*a;
                r2 = (-b-sqrt(delta))/2*a;

		printf("COMPLEXAS\nR %f\nI %f", r1, r2);		
	
	}else{
		r1 = (-b+sqrt(delta))/2*a;
		r2 = (-b-sqrt(delta))/2*a;
		
	
		if(r1==r2||r1==r2*(-1)){
			printf("DUPLA\nRD %f", r1);
		}else {
			printf("REAIS\nR1 %f\nR2 %f",r1, r2);
		}
	}

	
	return 0;
}
