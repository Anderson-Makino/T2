#ifndef PILHA_H
#define PILHA_H

struct node{
    char *dados;
    struct node *prox;
};

void inicia(node *pilha); /*inicializa pilha*/
void aloca (int tam,node *pilha); /*aloca memoria para a pilha*/
void insere (node *pilha); /*insere elementos na pilha*/
void retira (node *pilha); /*reita elementos da pilha*/
void liberamemo (node *pilha); /*libera memoria da pilha*/

#endif
