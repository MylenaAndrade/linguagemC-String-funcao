#include<stdio.h>
#include<string.h>
/*
Desenvolver uma função que, dada uma string
s, crie uma substring que inicie na posição p de
s e contenha n caracteres.
Observações: se p e/ou n forem inválidos, a
substring será vazia; ii) se s não possuir n
caracteres além de p, a substring a ser criada
começará em p e terminará no final de s.
*/
int substring(char str[], int tamanho1, char substr[], int p, int n);

#define TRUE 1
#define FALSE 0

void main(){
	char string[30], sub[30];
	int tamanho1, tamanho2, posicao=3, numero=5;
	
	printf("Digite: ");
	fflush(stdin);
	gets(string);
	
	tamanho1=strlen(string);
	
	
	substring(string, tamanho1, sub, posicao, caracter);

}

void substring(char str[], int tamanho1, char substr[], int p, int n){
	int i,j;
	if(p<0 || p>=tamanho1 || c<=0)
	{
		strcopy(sub," ");
	}else{
		for(i=p, j=0; j<n || str[i]; i++, j++)
		{
			substr[j]=str[i];
		}
	}
	
	substr[j]='\0'

}

