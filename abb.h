#ifndef abb_H
#define abb_H

#include "Node.h"

class abb
{

public:

    abb();
    ~abb();
    bool estaVazia() const;
    void insere(int valor, char item[100]);
    void remover(int valor);
    void emOrdem() const;
    bool estaNaArvore(int valor);

private:

    NodePtr raiz;


    void destroiArvore(NodePtr& no);
    void insere(int valor, char item[100], NodePtr& no);
    void remover(int valor, NodePtr& no);
    void visita(const NodePtr& no) const;
    void emOrdem(const NodePtr& no) const;
    bool estaNaArvore(int valor, NodePtr& no);
};


#endif
