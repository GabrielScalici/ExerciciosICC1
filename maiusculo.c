/*
	Programa que transforma todos os caracteres em maiusculo	
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

		case 'a':
			seq[i] = 'A';
			break;
		case 'b':
                        seq[i] = 'B';
			break;
		case 'c':
                        seq[i] = 'C';
			break;
		case 'd':
                        seq[i] = 'D';
			break;
		case 'e':
                        seq[i] = 'E';
			break;
                case 'f':
                        seq[i] = 'F';
			break;
                case 'g':
                        seq[i] = 'G';
			break;
                case 'h':
                        seq[i] = 'H';
			break;
		case 'i':
                        seq[i] = 'I';
			break;
                case 'j':
                        seq[i] = 'J';
			break;
                case 'k':
                        seq[i] = 'K';
			break;
                case 'l':
                        seq[i] = 'L';
			break;

		case 'm':
                        seq[i] = 'M';
			break;
                case 'n':
                        seq[i] = 'N';
			break;
                case 'o':
                        seq[i] = 'O';
			break;
                case 'p':
                        seq[i] = 'P';
			break;

		case 'q':
                        seq[i] = 'Q';
			break;
                case 'r':
                        seq[i] = 'R';
			break;
                case 's':
                        seq[i] = 'S';
			break;
                case 't':
                        seq[i] = 'T';
			break;
		case 'u':
                        seq[i] = 'U';
			break;
                case 'v':
                        seq[i] = 'V';
			break;
                case 'x':
                        seq[i] = 'X';
			break;
                case 'y':
                        seq[i] = 'Y';
			break;
		case 'w':
                        seq[i] = 'W';
			break;
                case 'z':
                        seq[i] = 'Z';
                	break;		
		}
		
	}

	//Mostrar os valores com as letras passadas para maiuscuçlo
	for(i=0; i<strlen(seq); i++){
		printf("%c", seq[i]);	

	}
	return 0;
}
