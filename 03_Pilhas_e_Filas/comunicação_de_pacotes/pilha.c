
#include<stdio.h>
#include<stdlib.h>
#include "pilha.h"

Pilha* cria_pilha();
void push(Pilha*p, int x);
int pop(Pilha*p);

typedef struct elem{

    int dado;
    struct elem* prox;
}Elem;

typedef struct pilha{

    Elem* topo;
}topo;




int main(){




}















int pop(Pilha*p){
    
}



void push(Pilha*p, int x){

}




Pilha* cria_pilha(){
    Pilha* p = (Pilha*) malloc(sizeof(Pilha));
    p->topo = NULL;

    return p;
}