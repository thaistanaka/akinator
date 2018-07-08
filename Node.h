#ifndef NODE_H
#define NODE_H

struct Node {
	int valor;
    char item[100];
    Node* esq;
    Node* dir;
};

typedef struct Node* NodePtr;

#endif
