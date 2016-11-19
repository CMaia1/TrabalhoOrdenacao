#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "ordenacao.h"
#define TAM 10

void printVector(TVetor *V, int n);

int main(){
	TIndice i, j=0;
	TVetor* vetor = inicializavector(TAM);

	// srand( (unsigned)time(NULL) );

	for(i=TAM; i>0; i--){
		vetor->vector[j].chave = i;
		j++;
	}

	//printVector(vetor, TAM);

	//Quicksort(vetor, TAM);

	//printVector(vetor, TAM);
}


void printVector(TVetor *V, int n){
	int i;
	for(i=0; i<n; i++)
		printf("%d ", V->vector[i].chave);
	putchar('\n');
}
