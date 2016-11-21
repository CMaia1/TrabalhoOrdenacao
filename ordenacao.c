#ifndef _ordenacao_
#define _ordenacao
//#include "ordenacao.h"
#include "TADs.h"
#endif // _ordenacao_

void Particao(int esq, int dir, int *i, int *j, TVetor *V){
	TItem pivo, aux;
	*i = esq; *j = dir;

	pivo = V->Vector[(*i + *j)/2];

	do{
		while(pivo.chave > V->Vector[*i].chave) (*i)++;
		while(pivo.chave < V->Vector[*j].chave) (*j)--;
		if(*i <= *j){
			aux = V->Vector[*i];
			V->Vector[*i] = V->Vector[*j];
			V->Vector[*j] = aux;
			(*i)++;
			(*j)--;
		}
	}while( *i <= *j );
}

void Ordena(int esq, int dir, TVetor *V){
	int i, j;
	Particao(esq, dir, &i, &j, V);
	if(esq < j) Ordena(esq, j, V);
	if(i < dir) Ordena(i, dir, V);
}

void Quicksort(TVetor *V, int n){
	Ordena(0, n-1, V);
}

/*alteração Yuri*/
void Ordenainsercao(int esq, int dir, TVetor *V, int m){
	int i, j;
	int aux;

	Particao(esq, dir, &i, &j, V);

	for(i = 1; i < m; i++){
		aux = V->Vector[i].chave;
		j = i - 1;
		while ((j >= 0) && aux < V->Vector[j].chave ) {
			V->Vector[j + 1].chave = V->Vector[j].chave;
			j--;
		}
		V->Vector[j + 1].chave = aux;
	}
	if(m+m < V->tamanho){
		Ordenainsercao(m, m-1, V, m+m);
	}
}

void Quicksortinsercao(TVetor *V, int n,int m){
	Ordenainsercao(0, n-1, V, m);
}

void Ordenaiterativo(int esq, int dir, TVetor *V){
	int i, j;
	Particao(esq, dir, &i, &j, V);

	while(i <= 0){
		if(esq < j){
			Particao(esq, j, &i, &j, V);
		}
		if(i < dir){
			Particao(i, dir, &i, &j, V);
		}
	}
}

void Quicksortiterativo(TVetor *V, int n){
	Ordenaiterativo(0, n-1, V);
}

