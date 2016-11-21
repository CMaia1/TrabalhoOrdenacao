typedef struct{
	unsigned int chave;
}TItem;

typedef struct{
	TItem* Vector;
	int tamanho;
}TVetor;

typedef struct{
	TItem* Vector;
	int topo, tamanho;
}TPilha;

TVetor* inicializavector(int tamanho);

TPilha* inicializapilha(int tamanho);
