#include <stdio.h>
#include <stdlib.h>      

/* Exercício 2: Dada uma lista de tamanho N, reverta todos os k nós (onde k é uma
entrada para a função) na lista. Se o número de nós não for um múltiplo de k,
então os nós restantes deixados de fora, no final, devem ser considerados como
um grupo e devem ser revertidos. */

typedef struct no {
    int valor;
    struct no* prox;
} No;

// Protótipos das funções
void imprimir(No* inicio);
No* inserir(No* inicio, int valor);
No* reversao(No* inicio, int k);

int main() {
    No* inicio = NULL;  
    int valor, k;
    int control = 0;

    do {
        printf("Insira um valor: ");
        scanf("%d", &valor);
        
        inicio = inserir(inicio, valor);
        
        printf("Deseja continuar inserindo numeros? (0 para parar): ");
        scanf("%d", &control);

    } while (control != 0);      

    
    printf("\n--- Lista Original ---\n");
    imprimir(inicio);


    printf("\nInsira o valor de k (tamanho do grupo para reverter): ");
    scanf("%d", &k);

    
    inicio = reversao(inicio, k);


    printf("\n--- Lista Revertida de %d em %d ---\n", k, k);
    imprimir(inicio);

    return 0;
}

void imprimir(No* inicio) {
    No* aux = inicio; 
    int cont = 1;
    
    if (aux == NULL) {
        printf("Lista vazia\n");
        return;
    }

    while (aux != NULL) {
        printf("Posicao %d = %d\n", cont, aux->valor);
        aux = aux->prox;
        cont++;
    }
}

No* inserir(No* inicio, int valor) {
    No* novo = (No*) malloc(sizeof(No));
    novo->valor = valor;
    novo->prox = NULL;

    if (inicio == NULL)
        return novo;

    No* atual = inicio;
    while (atual->prox != NULL) {
        atual = atual->prox;
    }
    atual->prox = novo;         

    return inicio;
}

// Função principal do desafio
No* reversao(No* inicio, int k) {
  
    if (inicio == NULL) {
        return NULL;
    }

    No* anterior = NULL;   // Vai guardar o nó que ficou para trás
    No* atual = inicio;    // A caixa que estamos olhando agora
    No* proximo_no = NULL; // Vai salvar o resto do mapa
    int cont = 0;   

  
    while (atual != NULL && cont < k) {
        proximo_no = atual->prox; 
        atual->prox = anterior;   
        anterior = atual;         
        atual = proximo_no;       
        cont++;
    }


    if (atual != NULL) {
        inicio->prox = reversao(atual, k);
    }

  
    return anterior; 
}