#include<stdio.h>
#include<string.h>
/*
Desenvolver uma fun��o que, dada uma string
s, crie uma substring que inicie na posi��o p de
s e contenha n caracteres.
Observa��es: se p e/ou n forem inv�lidos, a
substring ser� vazia; ii) se s n�o possuir n
caracteres al�m de p, a substring a ser criada
come�ar� em p e terminar� no final de s.
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

