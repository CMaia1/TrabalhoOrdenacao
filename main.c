#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ordenacao.h"
#define TAM 1000000

void printVector(TVetor *V, int n);

int main(){
	TIndice i, j=0;
	TVetor* vetor = inicializavector(TAM);

	// srand( (unsigned)time(NULL) );

	//printVector(vetor, TAM);

    Quicksortinsercao(vetor, TAM, 10);

	//printVector(vetor, TAM);
}


void printVector(TVetor *V, int n){
	int i;
	for(i=0; i<n; i++)
		printf("%d ", V->Vector[i].chave);
	putchar('\n');
	putchar('\n');
}
