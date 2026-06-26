#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

struct elem {
    int info;     
    struct elem *prox;
};

struct pilha {
    Elem* topo; 
};


Pilha* cria_pilha() {
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->topo = NULL;
    return p;
}

int vazia(Pilha* p) {
    if(p->topo == NULL){
        printf("Pilha vazia.\n");
            return 1; 
    }
}
void push(Pilha* p, int x) {
   Elem* novo = (Elem*) malloc(sizeof(Elem));
    novo->info = x;                
    novo->prox = p->topo;          
    p->topo = novo;
}

int pop(Pilha* p) {
    if (vazia(p)) {
        printf("Pilha vazia.\n");
        exit(1);
    }

    int ret = p->topo->info;       
    Elem* temp = p->topo;           // Guarda o endereço do nó a ser removido
    p->topo = p->topo->prox;        // Atualiza o topo para o elemento de baixo
    free(temp);                     // Libera a memória do nó removido
    return ret;                     // Retorna o valor
}