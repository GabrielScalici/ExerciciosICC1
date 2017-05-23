/*
	Programa que simula a classificacao em uma olimpiada 	
	AUTOR: GABRIEL HENRIQUE CAMPOS SCALICI
	NUMERO: 9292970
	DATA:18-06-2015

*/

#include<stdio.h>
#include<stdlib.h>

//Fazndo uma strutct
typedef struct cadastro_paises{
	char *nome;
	int ouro;
	int prata;
	int bronze;
}PAIS;

//Funcao para pegar o nome corretamente
char *lerstring() {

        char valor = '@';
        char *palavra = NULL;
        int aux =1;

        //Enquanto for diferente de enter
        while(valor!= ' '){
                //Pegando o que o usuario digito
                scanf("%c", &valor);

                //realocando e colocando no vetor
                palavra = (char*)realloc(palavra, sizeof(char)*aux);
                palavra[aux-1] = valor;
                aux++;
        }

        palavra = (char*)realloc(palavra, sizeof(char)*aux);
        palavra[aux-1] = '\0';

        return palavra;
}

//FUncao para cadastrar o pais
PAIS * cadastra_pais(PAIS * paises, int *n){
	
	char * nome;
	int i, ouro, prata, bronze;
	PAIS pa; 
	
	//sETANDO NULL para nao interfirir nas outras vezes que a funcao for usada
	pa.nome = NULL;
	pa.ouro = 0;
	pa.prata = 0;
	pa.bronze = 0;

	//Armazenando o buffer do teclado
	char buffer;

	for(i=0; i<*(n); i++){

		//Colocando no ponteiro de structs, um novo cadastro de pais		
		nome = lerstring();
		scanf("%d %d %d", &ouro, &prata, &bronze);
		buffer = getchar();		

		//Atribuindo os valores no cadastro do pais
		pa.nome = nome;
		pa.ouro = ouro;
		pa.prata = prata;
		pa.bronze = bronze;

		//Colocando os valores digitados no cadastro dos paises	
		paises[i] = pa; 
	
	}

	
	return paises;
}

//Funcao para ordenar a tabela de acordo com as medalhas
void ordenar_mostrar(PAIS * paises, int * n ){
	
	int i, index_aux, atual, anterior;
	PAIS str_aux;	

	for(i=1; i<= *(n); i++){
	
		//Anotando os valores das medalhas de ouro inicialmente
		atual = paises[i].ouro;
		anterior = paises[i-1].ouro;

		//Analisando qual eh menor
		if(atual <= anterior){
			//CAso entre na condicao e seja igual, usar outro criterio (medalha de prata) para ordenacao
			if(atual == anterior){
				//PEgando as medalhas de prata
				atual = paises[i].prata;
				anterior = paises[i-1].prata;
				
				//Analisando qual tem a maior quantidade de medalhas de prata
				if(atual <= anterior){
					//Caso seja igual, mudar para analisar as medalhas de bronze
					if(atual == anterior){
						//PEgando as medalhas de bronze
						atual = paises[i].bronze;
						anterior = paises[i-1].bronze;

						//Analisando qual eh maior que qual, se for igual agora nao havera criterio de desempoate
						if(atual <= anterior){
							//Realizar a troca
							//Copiando a struct atual para a auxiliar e realizando a troca
							str_aux = paises[i-1];
							paises[i-1] = paises[i];
							paises[i] = str_aux;
						}
					}else{
					//Realizando a troca caso a medalha de prata ja seja suficiente
					str_aux = paises[i-1];
					paises[i-1] = paises[i];
					paises[i] = str_aux;
					}
				}
			}
			//Realizando as trocas caso a medalha de ouro ja seja suficiente
			str_aux = paises[i-1];
			paises[i-1] = paises[i];
			paises[i] = str_aux;
		}
	}	


	//Mostrando para o usuario como ficou a nova tabela
	for(i=0; i< *(n); i++){
		//Mostrando a struct
		printf("%s %d %d %d", paises[i].nome, paises[i].ouro, paises[i].prata, paises[i].bronze);
	}


}

int main(){

	int n, i;
	PAIS * paises = NULL;

	//Pedindo a quantidade de paises
	scanf("%d", &n);

	//Alocando o vetor de structs com base na quantidade de paises
	paises = (PAIS*)malloc(sizeof(PAIS)*n);
	
	//CHhamando a funcoa para cadastrar os n paises
	paises = cadastra_pais(paises, &n);

	//Chamando funcao para ordenar
	ordenar_mostrar(paises, &n);

	return 0;
}
