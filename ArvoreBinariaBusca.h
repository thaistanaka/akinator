#ifndef ARVOREBINARIABUSCA_H
#define ARVOREBINARIABUSCA_H

#include "Node.h"

class ABB {
public:
    //********** OPERADORES TAD **********
    ABB();
    ~ABB();
    bool estaVazia() const;
    void insere(Escolha opcao);
    void remover(Escolha opcao);
    void preOrdem() const;
    void emOrdem() const;
    void posOrdem() const;
    bool estaNaArvore(Escolha opcao);
    //********** FIM OPERADORES TAD **********

    void imprimeFolhas() const;
    void jogar() const;

private:
    NodePtr raiz;

    void destroiArvore(NodePtr& no);
    void insere(Escolha opcao, NodePtr& no);
    void remover(Escolha opcao, NodePtr& no);
    void visita(const NodePtr& no) const;
    void preOrdem(const NodePtr& no) const;
    void emOrdem(const NodePtr& no) const;
    void posOrdem(const NodePtr& no) const;
    bool estaNaArvore(Escolha opcao, NodePtr& no);
    void imprimeFolhas(const NodePtr& no) const;
    void jogar(const NodePtr& no) const;
};

#endif
