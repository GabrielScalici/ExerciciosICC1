/*
	Programa que transforma todos os caracteres em minusculo	
	AUTOR: GABRIEL HENRIQUE CAMPOS SCALICI
	NUMERO: 9292970
	DATA:10-05-2015
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int main(){

	//DEclarando a sequencia que irá armazenar os valores digitados 
	char * seq = malloc(10000);
	int i, j;

	//PEgando os valores digitados pelo usuario
	scanf("%s", seq);

	//Logica para analisar as letras que estão em maiúsculo
	for(i=0; i<strlen(seq); i++){
			
		switch (seq[i]){

		case 'A':
			seq[i] = 'a';
			break;
		case 'B':
                        seq[i] = 'b';
			break;
		case 'C':
                        seq[i] = 'c';
			break;
		case 'D':
                        seq[i] = 'd';
			break;
		case 'E':
                        seq[i] = 'e';
			break;
                case 'F':
                        seq[i] = 'f';
			break;
                case 'G':
                        seq[i] = 'g';
			break;
                case 'H':
                        seq[i] = 'h';
			break;
		case 'I':
                        seq[i] = 'i';
			break;
                case 'J':
                        seq[i] = 'j';
			break;
                case 'K':
                        seq[i] = 'k';
			break;
                case 'L':
                        seq[i] = 'l';
			break;

		case 'M':
                        seq[i] = 'm';
			break;
                case 'N':
                        seq[i] = 'n';
			break;
                case 'O':
                        seq[i] = 'o';
			break;
                case 'P':
                        seq[i] = 'p';
			break;

		case 'Q':
                        seq[i] = 'q';
			break;
                case 'R':
                        seq[i] = 'r';
			break;
                case 'S':
                        seq[i] = 's';
			break;
                case 'T':
                        seq[i] = 't';
			break;
		case 'U':
                        seq[i] = 'u';
			break;
                case 'V':
                        seq[i] = 'v';
			break;
                case 'X':
                        seq[i] = 'x';
			break;
                case 'Y':
                        seq[i] = 'y';
			break;
		case 'W':
                        seq[i] = 'w';
			break;
                case 'Z':
                        seq[i] = 'z';
                	break;		
		}
		
	}

	//Mostrar os valores com as letras passadas para maiuscuçlo
	for(i=0; i<strlen(seq); i++){
		printf("%c", seq[i]);	

	}
	return 0;
}
