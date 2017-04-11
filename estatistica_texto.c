/*
	Programa que simula ajuda para uma escritora por meio de funcoes com a contagem de caracteres., palvras, frases dentre outras.
	AUTOR: GABRIEL HENRIQUE CAMPOS SCALICI
	NUMERO: 9292970
	DATA: 05-06-15
*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define ENTER 10

//VAriaveis GLobais
char * texto = NULL;


//FUcnao para somente ler o nome do arquivo
char *armazenando_texto() {
	
	char valor;
	int cont = 1;

	//scanf("%c", &valor);
	
	//LOgica para pegando os valores ate a hora que for apertado o ENter	
	while(valor != ENTER){
		//PEgando os outros valores
		scanf("%c", &valor);
		
		//LOcando na memoria com ajuda de um contador para ter o tamanho exato da string
		texto = (char*)realloc(texto, sizeof(char)*(cont+1));

		//Armazenando no vetor
		//texto[cont-1] = valor;

		//AUmentando o contador para que possa ser feito a alocacao e armazenamento corretamente
		cont++;	
	}
	
	//Armazenando o ultimo valor
//	texto[cont-1] = valor;	
	
	//Retornando o endereco do ponteiro para que possa ser usado na main
	return texto;
}

//FUncao para ler o arquivo
void opcao_1(char * texto) {
	//Variaveis internas	
	char value;
	//Mudando o tipo de variavel para que ela possa aguentar grandes numeros
	double carac = 0, palav = 0, frase =0;
	double media = 0;
	int i;	
	
	//Enquanto nao acabar tudo que esta dentro do arquivo txt
	for(i=0; i<strlen(texto); i++) {
		//value = fgetc(fp);
		value = texto[i];

			//Aumenta o contador para saber quantos caracteres tem			
			carac++;
				
			//Analisando para saber quantas palavras tem com base no espaco e quebra de linha
			if(value == '\n' || value == ' '){
				palav++;
			}	
			
			//Verificando o numero de frases com base no ponto final
			if(value == '.' || value == '!' || value == '?' ){			
				//Aumentando a quantidade de frases
				frase++;
			}

		
	}

	
	//Fazendo a conta da media 
	media = (double)carac/(double)frase;

	//Mostrando os valores para o usuario
	printf("%d\n%d\n%d\n%.1lf", carac, palav, frase, media);

}

//FUncao para remover as pontuacoes e os espacos extra
void opcao_2(char *texto) {
        
	//Variaveis internas    
        char value;
	int aux = 1;
	int i;
	char *texto2 = NULL;

        //Enquanto nao acabar tudo que esta dentro do arquivo txt
        for(i=0; i<strlen(texto); i++){
                value = texto[i];
			
			//Logica para nao exibir as pontuacoes			
			if(value == '?' || value == '!' || value == '.' || value == ',' || value == ';' || value == ':'){
				//Nao faz nada, pois quer ignorar as pontuaacoes

			}else{
				//LOcando na memoria heap
				texto2 = (char*)realloc(texto2, sizeof(char)*aux); 
				
				//Armazenando na memoria heap
				texto2[aux-1] = value;
				
				//Incrementando a variavel auxiliar para que ela posso ajudar na locacao da segunda string
				aux++;
			}
        }

	//DEpois de locar sem as pontuacoes, retirando as barras de espaco para mostrar para o usuario
	for(i=0; i<strlen(texto2); i++){

			value = texto2[i];

			//Fazendo com que as barras repetidas sejam cortadasss
			if(value == ' ' && texto2[i+1] == ' '){
				//Não faz nada pois se tiver varias quer ignorar
			}else{
				//MOStrando para o usuario a nova string sem as barras de espaco em excesso
				printf("%c", value);
				
			}

	}


}

/*
//FUncao para remover as pontuacoes e os espacos extra
void opcao_2(char *texto) {
        
	//Variaveis internas    
        char value;
	int aux = 1;
	int i;
	char *texto2 = NULL;

        //Enquanto nao acabar tudo que esta dentro do arquivo txt
        for(i=0; i<strlen(texto); i++){
                value = texto[i];
			
			//Logica para nao exibir as pontuacoes			
			if(value == '?' || value == '!' || value == '.' || value == ',' || value == ';' || value == ':'){
				//Nao faz nada, pois quer ignorar as pontuaacoes

			}else{
				//LOcando na memoria heap
				texto2 = (char*)realloc(texto2, sizeof(char)*aux); 
				
				//Armazenando na memoria heap
				texto2[aux-1] = value;
				
				//Incrementando a variavel auxiliar para que ela posso ajudar na locacao da segunda string
				aux++;
			}
        }

	//DEpois de locar sem as pontuacoes, retirando as barras de espaco para mostrar para o usuario
	for(i=0; i<strlen(texto2); i++){

			value = texto2[i];
			//Fazendo com que as barras repetidas sejam cortadasss
			if(value == ' ' && texto2[i-1] == ' '){
				//Não faz nada pois se tiver varias quer ignorar
			}else{
				//MOStrando para o usuario a nova string sem as barras de espaco em excesso
				printf("%c", tolower(value));
				
			}
	}


}
*/
//Funcao para mostrar quantas vezes ocorre a palavra na string
void opcao_3(char * texto){



}

//FUncao principal
int main(){
	
	char *texto;
	int op;

	//Utilizando a funcao somente para ter o nome do arquivo txt
	texto = armazenando_texto();	
	
	//Pegando  qual operacao deve ser feita
	scanf("%d", &op);	

	//Opcoes para serem escolhidas pelo usuario
	switch(op){
		case 1:
			opcao_1(texto);
			break;

		case 2:
			opcao_2(texto);
			break;

		case 3:
			opcao_3(texto);
			break;
	}

	//Liberando a memoria heap
	free(texto);
	

	return 0;
}
