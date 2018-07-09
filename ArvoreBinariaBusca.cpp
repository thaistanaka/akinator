#include "ArvoreBinariaBusca.h"

ABB::ABB() {
    raiz = NULL;
}

ABB::~ABB() {
    destroiArvore(raiz);
}

bool ABB::estaVazia() const {
    return (raiz == NULL);
}

void ABB::insere(Escolha opcao) {
    insere(opcao, raiz);
}

void ABB::remover(Escolha opcao) {
    remover(opcao, raiz);
}

void ABB::preOrdem() const {
    preOrdem(raiz);
}

void ABB::emOrdem() const {
    emOrdem(raiz);
}

void ABB::posOrdem() const {
    posOrdem(raiz);
}

bool ABB::estaNaArvore(Escolha opcao) {
    return estaNaArvore(opcao, raiz);
}

void ABB::imprimeFolhas() const {
    imprimeFolhas(raiz);
}

void ABB::jogar() const {
    jogar(raiz);
}

void ABB::destroiArvore(NodePtr& no) {
    if (no != NULL) {
        destroiArvore(no->esq);
        destroiArvore(no->dir);
        delete no;
    }

    no = NULL;
}

void ABB::insere(Escolha opcao, NodePtr& no) {
    NodePtr aux;

    if ((no) == NULL) {
        aux = new Node;
        aux->escolha = opcao;
        aux->esq = NULL;
        aux->dir = NULL;
        no = aux;
        aux = NULL;
        return;
    }

    if (opcao.getID() == (no)->escolha.getID()) {
        return;
    }
    if (opcao.getID() > (no)->escolha.getID()) {
        insere(opcao, no->dir);
    }
    else {
        insere(opcao, no->esq);
    }

    return;
}

void ABB::remover(Escolha opcao, NodePtr& no) {
    if ((no) == NULL) {
        return;
    }

    if (opcao.getID() > (no)->escolha.getID()) {
        return remover(opcao, no->dir);
    }
    else if (opcao.getID() < (no)->escolha.getID()) {
        return remover(opcao, no->esq);
    }

    NodePtr p;

    if ((no)->esq == NULL && (no)->dir == NULL) {
        p = no;
        delete p;
        no = NULL;
        return;
    }
    else if ((no)->esq == NULL) {
        p = no;
        no = (no)->dir;
        delete p;
        return;
    }
    else if ((no)->dir == NULL) {
        p = no;
        no = (no)->esq;
        delete p;
        return;
    }
    else {
        p = (no)->esq;
        while(p->dir != NULL){
            p = p->dir;
        }

        (no)->escolha = (p)->escolha;

        remover(no->escolha, no->esq);
        return;
    }
}

void ABB::visita(const NodePtr& no) const {
    std::cout << no->escolha.getFrase() << endl;
}

void ABB::preOrdem(const NodePtr& no) const {
    if (no != NULL) {
        visita(no);
        preOrdem(no->esq);
        preOrdem(no->dir);
    }
}

void ABB::emOrdem(const NodePtr& no) const {
    if (no != NULL) {
        emOrdem(no->esq);
        visita(no);
        emOrdem(no->dir);
    }
}

void ABB::posOrdem(const NodePtr& no) const {
    if (no != NULL) {
        posOrdem(no->esq);
        posOrdem(no->dir);
        visita(no);
    }
}

bool ABB::estaNaArvore(Escolha opcao, NodePtr& no) {
    if (no == NULL)
        return false;
    else {
        if (no->escolha.getID() == opcao.getID())
            return true;
        else {
            if (no->escolha.getID() > opcao.getID())
                return estaNaArvore(opcao, no->esq);
            else
                return estaNaArvore(opcao, no->dir);
        }
    }
}

void ABB::imprimeFolhas(const NodePtr& no) const {
    if (no != NULL) {
        if (no->esq == NULL && no->dir == NULL) {
            visita(no);
            return;
        }
        imprimeFolhas(no->esq);
        imprimeFolhas(no->dir);
    }
}

void ABB::jogar(const NodePtr& no) const
{
    int opcao;

    if (no != NULL) {
        if (no->esq == NULL && no->dir == NULL) {
            visita(no);
            return;
        }
        visita(no);
        do {
            cout << "Digite 1 para \"Sim\" e 0 para \"Nao\": ";
            cin >> opcao;
        } while (opcao != 1 && opcao != 0);

        cout << endl;

        if (opcao)
            jogar(no->esq);
        else
            jogar(no->dir);
    }
}
