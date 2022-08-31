#include<stdio.h>
#include<string.h>
/*
Implementar uma função que remova todas as
ocorrências de determinado caracter em uma
string.
*/

//mostrando que existe uma função
void removaChar(char str[], char caracter);

void main(){
	//declaração de variáveis
	char string[30], simbolo;
	int tamanho;
	
	printf("Digite: ");
	fflush(stdin);
	gets(string);
	
	printf("Escolha uma letra para excluir: ");
	scanf("%c", &simbolo);

	//chamando a função
	removaChar(string, simbolo);
	printf("%s", string);
}

void removaChar(char str[], char caracter){
	int i,j;
	for(i=0; str[i];)
	{
		if(str[i] == caracter)
		{
			for(j=i; str[j]; j++)
			{
				str[j]=str[j+1];
			}
		}else{
			 i++;
		}
	}
}
