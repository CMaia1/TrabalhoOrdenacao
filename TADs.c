#include <stdio.h>
#include "TADs.h"

TVetor* inicializavector(int tamanho){
  int i;
  TVetor* vetor = (TVetor*)malloc(sizeof(TVetor));
  vetor->vector = (int*)malloc(sizeof(int)*tamanho);
  vetor->tamanho = tamanho;

  for(i = 0; i < tamanho; i++){
    vetor->vector[i] = rand()%10000000;
  }

  return vetor;
}

TPilha* inicializapilha(int tamanho){
  int i;
  TPilha vetor = (TPilha*)malloc(sizeof(TPilha));
  vetor->vector = (int*)malloc(sizeof(int)*tamanho);
  vetor->tamanho = tamanho;

  for(i = 0; i < tamanho; i++){
    vetor->vector[i] = rand()%10000000;
  }
  vetor->topo = tamanho;
  return vetor;
}
