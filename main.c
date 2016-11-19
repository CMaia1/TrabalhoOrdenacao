#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ordenacao.c"
#define TAM 10

void printVector(TItem *V, int n);

int main(){
	TIndice i, j=0;
	TItem vetor[TAM];

	// srand( (unsigned)time(NULL) );

	for(i=TAM; i>0; i--){
		vetor[j].chave = i;
		j++;
	}

	printVector(vetor, TAM);

	Quicksort(vetor, TAM);

	printVector(vetor, TAM);
}


void printVector(TItem *V, int n){
	int i;
	for(i=0; i<n; i++)
		printf("%d ", V[i].chave);
	putchar('\n');
}
