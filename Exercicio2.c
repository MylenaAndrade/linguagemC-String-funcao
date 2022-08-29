#include<stdio.h>
#include<string.h>
/*
Dada uma string s, desenvolver uma fun��o
que determine se s � ou n�o um pal�ndromo.
Observa��o: uma string s ser� um pal�ndromo
quando seus caracteres formarem a mesma
sequ�ncia, independente se s � percorrida da
esquerda para direita ou vice-versa.
ARARA
LUZ AZUL
*/

//mostrando que existe uma fun��o
int palindromo(char str[], int TAM);

//definindo constantes
#define TRUE 1
#define FALSE 0

//fun��o principal
void main(){
	//declara��o de vari�veis
	char string[30],tamanho; 
	printf("Descubra se a palavra e um palindromo: ");
	fflush(stdin);
	gets(string);
	
	//atribuindo o tamanho do vetor � uma vari�vel
	tamanho=strlen(string);
	
	
	//chamando a fun��o
	if(palindromo(string, tamanho)==TRUE)
	{
		printf("E UM PALINDROMO");
	}else
		{
			printf("NAO E UM PALINDROMO");
		}
}

//fun��o para saber se � ou n�o um pal�ndromo
int palindromo(char str[], int TAM){
	//declara��o de vari�veis
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
