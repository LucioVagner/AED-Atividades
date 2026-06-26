#include<stdio.h>
#include<stdlib.h>

#ifndef PILHA_H
#define PILHA_H


typedef struct elem Elem; //no
typedef struct pilha Pilha;

// Protótipos das funções idênticos aos da professora
Pilha* cria_pilha();
void push(Pilha* p, int x);
int pop(Pilha* p);
int vazia(Pilha* p);

#endif 