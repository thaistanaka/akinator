#ifndef NODE_H
#define NODE_H

#include "Escolha.h"

struct Node {
    Escolha escolha;
    Node* esq;
    Node* dir;
};

typedef struct Node* NodePtr;

#endif
