#include<stdio.h>
/*
Suponha que não existissem as funções strlen,
strcpy, strcat e strcmp. Pede-se, então, a
implementação de funções que tenham o
mesmo objetivo daquelas.
*/
int stringLen(char str[]);
void stringCpy(char str[], char strC[]);
void stringCat(char str[], char strC[]);
void main(){
	char origem[20], destino[20], destino2[20];
	printf("Escreva seu nome: ");
	fflush(stdin);
	gets(origem);
	

	
	printf("%d\n",stringLen(origem));
	stringCpy(destino, origem);
	//printf("%s", string);
	//printf("%s", stringC);
	
	printf("Escreva seu sobrenome: ");
 	fflush(stdin);
 	gets(destino);
 	
	stringCat(destino2, origem);
	printf("%s", origem);
	
}

int stringLen(char str[]){
	int i;
	for(i=0; str[i]; i++);
		return i;
	
}

void stringCpy(char strC[], char str[]){
	int i;
	for(i=0; str[i]; i++)
	{
		strC[i]=str[i];
	}
	strC[i] ='\0';
}

void stringCat(char strC[], char str[]){
	int quant, i;
	for(quant=stringLen(str), i=0; strC[quant]; i++, quant++)
	{
		strC[quant]=str[i];
	}
	
	
}

void stringCmp(char strC[], char str[]){
	
}


