/*
	Programa que realiza a media armonica armotizada	
	AUTOR: GABRIEL HENRIQUE CAMPOS SCALICI
	NUMERO: 9292970
	DATA:
*/

#include<stdio.h>
#include<stdlib.h>


int main(){

	int n, i;
	//float *seq = NULL;
	float soma = 0;
	float m;
	
	//Pegando o numero de trabalhos
	scanf("%d", &n);

	//Baseado no numero de trabalhos, pegando as notas
	for(i=1; i<=n; i++){
                scanf("%f", &m);
                //fgetc(stdin);
                //seq = (float *)realloc(seq, sizeof(float)*i);
                soma = soma + (1/(m+1));
        }
	
	soma = n/soma;

	printf("%.2f",soma-1);

	return 0;
}
