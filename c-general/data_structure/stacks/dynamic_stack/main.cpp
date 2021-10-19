/*Algoritmo que implementa uma estrutura de dados do tipo pilha dinamica para dados do tipo char e utiliza as fun�oes implementadas para
resolu�ao de um exerc�cio de programa�ao: inverter as letras de palavras em uma frase,sem modificar as palavras de seus lugares de origem.*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int size(char *stack){
	int counter=0;
	while(*(stack+counter)!='\0'){
		counter++;
	}
	return counter;
}
 
bool isEmpty(char *stack){
	return size(stack)==0;
}

bool push(char *stack,char charactere){
	if(size(stack)==0) stack=(char*) realloc(stack,2*sizeof(char));
	else stack=(char*) realloc(stack,(size(stack)+2)*sizeof(char));
	if(!stack) {
		return false;
	}
	int sizeStack=size(stack);
	*(stack+sizeStack)=charactere;
	*(stack+sizeStack+1)='\0'; 
	return true;
}

bool pop(char *stack){
	if(isEmpty(stack)) return false;//Pilha vazia
	int counter=0;
	while(true){
		if(*(stack+counter+1)=='\0'){
			*(stack+counter)='\0';
			break;
		}
		counter++;
	}
	if(size(stack)==0) stack=(char*) realloc(stack,sizeof(char));
	else stack=(char*) realloc(stack,(size(stack)+1)*sizeof(char));
	return true;
}

char top(char *stack){
	if(isEmpty(stack)) return ' '; 
	/*Se a pilha estiver vazia,retornar� um espa�o em branco (nao pode-se retornar -1 pois trata-se
	 de uma string,ou seja,mais de um caractere). Se nao,retornar� o elemento no topo.*/
	return *(stack+size(stack)-1);
}

bool clean(char *stack){
	if(isEmpty(stack)) return false;
	while(!isEmpty(stack)) pop(stack);//Enquanto a pilha nao estiver vazia,retire o elemento do topo.
	return true;
}

bool printStack(char *stack){
	if(isEmpty(stack)) {
		printf("\n> Pilha vazia <\n");
		return false;
	}
	for(int counter=size(stack)-1;counter>=0;counter--){
		printf("%c",*(stack+counter));
	}
	return true;
}

int main(){
	char *stack;//Criando um ponteiro para construir a pilha na mem�ria.
	stack=(char*) malloc(sizeof(char));//Alocando o espa�o de mem�ria inicial para a pilha: espa�o de apenas 1 byte.
	*(stack)='\0';//Esse espa�o inicial conter� o caractere finalizador de strings (cadeias de caracteres): '\0'. 
	int phraseSize;
	char phrase[151];//Criando um vetor para conter a frase que ser� digitada pelo usu�rio.
	printf("<<<<<< Inversor de Frases >>>>>>\n");
	printf("Insira sua frase (max. 150 carac): ");
	scanf("%[^\n]s",phrase);//Usando este formato para a fun��o scanf(),espa�os em branco entre palavras s�o inclu�dos.
	printf("\nInvertida: ");
	int counter=0; 
	while(phrase[counter]!='\0'){//Enquanto nao estivermos no caractere de encerramento de strings: '\0'.
		push(stack,phrase[counter]);//Realizando operacoes de push de cada caractere da string digitada pelo usu�rio,na pilha.
		counter++;
		if(phrase[counter]==' '||phrase[counter]=='\0'){//Se encontramos um espa�o em branco (intervalo entre uma palavra e outra).
			printStack(stack);							//O operador || � utilizado para que a �ltima palavra da string tamb�m seja mostrada.
			clean(stack);								//Ou seja,nao encontramos um espa�o em branco mas j� chegamos ao final,entao,mostre o que tem mesmo assim!
			printf(" ");//Espa�o para organiza�ao das palavras.
		}
	}
	free(stack);
	printf("\n");
	system("pause");
	return 0;
}
