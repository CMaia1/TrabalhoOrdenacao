typedef struct{
	unsigned int chave;
}TItem;

typedef struct{
	TItem* vector;
	int tamanho;
}TVetor;

typedef struct{
	TItem* vector;
	int topo, tamanho;
}TPilha;

TVetor* inicializavector(int tamanho);

TPilha* inicializapilha(int tamanho);
