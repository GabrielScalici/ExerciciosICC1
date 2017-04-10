/*
	Programa que converte numeros em decimal, para binário	
	AUTOR: GABRIEL HENRIQUE CAMPOS SCALICI
	NUMERO: 9292970
	DATA:29-04-2015
*/

#include<stdio.h>
#include<math.h>
#include<stdlib.h>


int main() {

	//Declarando as variaveis que serao utilizadas
	int n;
	int i =0;
	char seq[32]; //sequencia com 32 para 32 bits
	
	//Pegando o valor digitado 
	scanf("%d", &n);

	//Logica para transformar de decimal para binario 
	while(i<32){
		
		//Usando operador ternario para preencher ao vetor (com base no i) com 0 e 1 
		seq[31-i] = n & (int)pow(2, i) ? '1' : '0';
		i++;
	}
	
	//Preenchendo o resto da sequencia para nao aparecer caracteres estranhos
	seq[32] = '\0';

	//Exibindo valor para usuario
	printf("%s", seq);

	return 0;
}
