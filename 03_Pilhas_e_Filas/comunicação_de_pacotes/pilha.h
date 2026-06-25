#include<stdio.h>
#include<stdlib.h>

#ifndef PILHA_H
#define PILHA_H

typedef struct elem Elem;
typedef struct pilha Pilha;

Pilha* cria_pilha();
void push(Pilha*p, int x);
int pop(Pilha*p);
int pilha_vazia(Pilha*p);
void libera_pilha(Pilha*p);

#endif 