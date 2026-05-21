//criar o TAD mascote

#ifndef MASCOTE_H
#define MASCOTE_H

#include<stdio.h>
#include<stdlib.h>

typedef struct mascote Mascote;

Mascote* mascote_cria(char* nome, Mascote* m);

void mascote_alimentar(Mascote* m);

void mascote_brincar(Mascote* m);

void mascote_status(Mascote* m);

void mascote_libera(Mascote* m);
#endif