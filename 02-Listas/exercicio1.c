/*exercício 1: Crie/implemente as seguintes funções de iteração em uma lista:
a. void reseta(Lista* l);  reseta a lista ao seu estado original
sem elementos 
b. int vazio(Lista* l);  verifica se a lista está vazia 
c. Nodo* proximo(Lista* l); retorna o próximo elemento da lista
d. int buscaValor(Lista *l, int id);  busca um elemento na lista
pelo seu id */


#include <stdio.h>
#include <stdlib.h>

typedef struct no{

    int valor;
    struct no* prox;

}No;

No* inserir(No* inicio,int valor);
void imprimir(No* inicio);
int busca_valor(No* inicio,int valor);
int vazio(No* inicio);
No* proximo(No* inicio);
void reseta(No* inicio); 

int main(){

    No *inicio = NULL;
    int control, valor;

    do{
        printf("Insira um valor:");
            scanf("%d", &valor);
        inicio = inserir(inicio,valor);
        printf("Deseja continuar inserindo números ?(0 para parar):");
            scanf("%d", &control);

        }while (control != 0);
    imprimir(inicio);


    printf("Insira um valor para busca-lo:");
        scanf("%d", &valor);
    valor = busca_valor(inicio, valor);
    


    No* prox_value = proximo(inicio);
    printf("Proximo valor após o inicio da lista é: %d", prox_value->valor);


    printf("Resetando a lista...");

    reseta(inicio);
    inicio = NULL;
}

 void reseta(No* inicio){

    No* atual = inicio;
    No* aux;
    while(atual != NULL){
        
         aux = atual->prox;
         free(atual);
         atual = aux;
        }
        printf("Lista limpa");

 }


No* proximo(No* inicio){
    
    No* atual = inicio;
    if(atual != NULL)
        atual = atual->prox;

    return atual;
}

int vazio(No* inicio){

    No* atual = inicio;

    if (atual == NULL){
        printf("Lista vazia");
        return 1;
    }
    else{
        printf("Lista não está vazia");
        return 0;
    }

}









int busca_valor(No* inicio,int valor){

    No* atual = inicio;
    
    while (atual != NULL)
    {
        if (atual->valor == valor){
            printf("Valor = %d\n", valor);
            return valor;

        }
        atual = atual->prox;
    }
    printf("Este valor não existe");
    return 0;
}


















No* inserir(No* inicio, int valor){

    No* novo_no = (No*) malloc(sizeof(No));

    novo_no->valor = valor;
    novo_no->prox = NULL;

    if(inicio == NULL)
        return novo_no;
    
    No* atual = inicio;
    while (atual->prox != NULL)
    {
            atual = atual->prox;
    }
    
    atual->prox = novo_no;

    return inicio;
}

void imprimir(No *inicio){
    int cont =1;
    No* atual = inicio; 
    while(atual != NULL){
       
        printf("Posição: %d Valor:%d\n",cont ,atual->valor);
        cont++;
        atual= atual->prox;
    }

}