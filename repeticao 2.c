/*programa para treinar laços de repetição.
	Ler n numeros inteiros e mostrar o maior, menor emedia entre ele

	AUTOR: GABRIEL HENRIQUE CAMPOS SCALICI
	NUMERO: 9292970
	DATA: 26-03-2015	*/

#include <stdio.h>

int main(void){

	//declarando variaveis
	int n, menor, maior, aux, use;
	float media;	
	
	//variavel auxiliar
	aux = 0;
	media = 0;
	//verificando o valor n digitado pelo usuario 
	scanf("%d\n", &n);
	
	//funcao while para pegar os n valores digitados
	while(aux < n){
	
	scanf("%d",&use);	

	//decisao para ver qual variavel eh menor e qual eh maior
	
	if(aux==0){
		menor = use;
		maior = use;
	}else if(use <= menor){
		menor = use;
	}else if(use >= maior){
 		maior = use; 
	}
	
	
	//vai somando para futuramente dividir por n
	media = media + use;
	aux = aux+1;	

	}

	//finaiza a media divindo-a pela quantidade n
	media = media/n;

	
	//exibindo os valores	
	printf("%d\n%d\n",menor, maior);

	printf("%.3f\n",media);
	


return 0;
}
