#include<stdio.h>
#include<string.h>
/*
Implementar uma fun��o que remova todas as
ocorr�ncias de determinado caracter em uma
string.
*/

//mostrando que existe uma fun��o
void removaChar(char str[], char caracter);

void main(){
	//declara��o de vari�veis
	char string[30], simbolo;
	int tamanho;
	
	printf("Digite: ");
	fflush(stdin);
	gets(string);
	
	printf("Escolha uma letra para excluir: ");
	scanf("%c", &simbolo);

	//chamando a fun��o
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
