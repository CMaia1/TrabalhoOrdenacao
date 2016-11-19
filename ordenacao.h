#include <stdio.h>
#include <stdlib.h>
#include "TADs.h"

typedef int TIndice;

void Particao(int esq, int dir, int *i, int *j, TItem *V);
void Ordena(int esq, int dir, TItem *V);
void Quicksort(TItem *V, int n);
