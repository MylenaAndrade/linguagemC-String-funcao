#include<stdio.h>
#include<string.h>
/*
Dada uma string s, desenvolver uma função
que determine se s é ou não um palíndromo.
Observação: uma string s será um palíndromo
quando seus caracteres formarem a mesma
sequência, independente se s é percorrida da
esquerda para direita ou vice-versa.
ARARA
LUZ AZUL
*/

//mostrando que existe uma função
int palindromo(char str[], int TAM);

//definindo constantes
#define TRUE 1
#define FALSE 0

//função principal
void main(){
	//declaração de variáveis
	char string[30],tamanho; 
	printf("Descubra se a palavra e um palindromo: ");
	fflush(stdin);
	gets(string);
	
	//atribuindo o tamanho do vetor à uma variável
	tamanho=strlen(string);
	
	
	//chamando a função
	if(palindromo(string, tamanho)==TRUE)
	{
		printf("E UM PALINDROMO");
	}else
		{
			printf("NAO E UM PALINDROMO");
		}
}

//função para saber se é ou não um palíndromo
int palindromo(char str[], int TAM){
	//declaração de variáveis
	int i,j;
	

	//varrendo o vetor da esquerda para direita e da direita para esquerda
	for(i=0, j=TAM; i<TAM && j>0; i++, j--)
	{
		if(str[i]!=str[j])
		{
			printf("%s %s", str[i], str[j]);
			return FALSE;
		}
	}
	
	return TRUE;
}
