#include "ordenacao.h"

void Particao(int esq, int dir, int *i, int *j, TItem *V){
	TItem pivo, aux;
	*i = esq; *j = dir;

	pivo = V[(*i + *j)/2];

	do{
		while(pivo.chave > V[*i].chave) (*i)++;
		while(pivo.chave < V[*j].chave) (*j)--;
		if(*i <= *j){
			aux = V[*i];
			V[*i] = V[*j];
			V[*j] = aux;
			(*i)++;
			(*j)--;
		}
	}while( *i <= *j );
}

void Ordena(int esq, int dir, TItem *V){
	int i, j;
	Particao(esq, dir, &i, &j, V);
	if(esq < j) Ordena(esq, j, V);
	if(i < dir) Ordena(i, dir, V);
}

void Quicksort(TItem *V, int n){
	Ordena(0, n-1, V);
}
