#include <stdio.h>
#include<string.h>
#include <stdlib.h>
#include "mascote.h"
struct mascote{
    char nome[50];
    int felicidade;
    int energia;
    int fome;


};



Mascote* mascote_cria(char* nome) {

    Mascote* novo_mascote = (Mascote*) malloc((sizeof(mascote)));
    strcpy(novo_mascote->nome, nome);
    novo_mascote->fome = 50;
    novo_mascote->energia = 50;
    novo_mascote->felicidade = 50;
    
    return novo_mascote;
}