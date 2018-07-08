#include <iostream>
#include <cstring>
#ifdef __cplusplus__
  #include <cstdlib>
#else
  #include <stdlib.h>
#endif

#include "abb.h"

abb::abb() {
    raiz = NULL;
}

abb::~abb() {
    destroiArvore(raiz);
}

bool abb::estaVazia() const {
    return (raiz == NULL);
}

void abb::insere(int valor, char item[100]) {
    insere(valor, item, raiz);
}

void abb::remover(int valor) {
    remover(valor, raiz);
}

void abb::emOrdem() const {
    emOrdem(raiz);
}

bool abb::estaNaArvore(int valor) {
    return estaNaArvore(valor, raiz);
}

void abb::destroiArvore(NodePtr& no) {
    if (no != NULL) {
        destroiArvore(no->esq);
        destroiArvore(no->dir);
        delete no;
    }

    no = NULL;
}

void abb::insere(int valor, char item[100], NodePtr& no) {

    NodePtr aux;

    if ((no) == NULL) { //arvore vazia
        aux = new Node;
        aux->valor = valor;
        strcpy(aux->item,item);
        aux->esq = NULL;
        aux->dir = NULL;
        no = aux;
        aux = NULL;
        return;
    }

    //considerando que nao pode haver chaves duplicadas
    if (valor == (no)->valor) {
        return;
    }

    if (valor > (no)->valor) { // direita
        insere(valor,item, no->dir);
    } else {
        insere(valor,item, no->esq);
    }

    return;

}

void abb::remover(int valor, NodePtr& no) {

    if ((no) == NULL) { // nao achou
        return;
    }

    if (valor > (no)->valor) { // direita
        //printf("(%d, %d) dir ->\n", C, (*A)->Item.Chave);
        return remover(valor, no->dir);
    } else if (valor < (no)->valor) { // esquerda
        //printf("(%d, %d) <- esq\n", C, (*A)->Item.Chave);
        return remover(valor, no->esq);
    }

    // se chegou aqui, eh pq a chave eh igual
    NodePtr p;

    // Dá para tirar um desses ifs. Respondam como fariam isso.
    if ((no)->esq == NULL && (no)->dir == NULL) { //folha
        p = no;
        delete p;
        no = NULL; //vai fazer o ponteiro dir ou esq chamado recursivamente apontar para nulo
        return;
    } else if ((no)->esq == NULL) { //soh tem o da direita
        p = no;
        no = (no)->dir;
        delete p;
        return;
    } else if ((no)->dir == NULL) { //soh tem o da esquerda
        p = no;
        no = (no)->esq;
        delete p;
        return;
    } else {
        p = (no)->esq;
        while(p->dir != NULL){
            p = p->dir;
        }

        (no)->valor = (p)->valor;

        remover(no->valor, no->esq);
        return;

    }

}

void abb::visita(const NodePtr& no) const {
    std::cout << no->item << " ";
}

void abb::emOrdem(const NodePtr& no) const {
    if (no != NULL) {
        emOrdem(no->esq);
        visita(no);
        emOrdem(no->dir);
    }
}

bool abb::estaNaArvore(int valor, NodePtr& no) {
    if (no == NULL)
        return false;
    else {
        if (no->valor == valor)
            return true;
        else {
            if (no->valor > valor)
                return estaNaArvore(valor, no->esq);
            else
                return estaNaArvore(valor, no->dir);
        }
    }
}