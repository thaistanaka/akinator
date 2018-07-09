#ifndef ESCOLHA_H
#define ESCOLHA_H

#include <iostream>

using namespace std;
// classe escolha com ID e a string frase, cada n� da �rvore � composto de um objeto escolha
class Escolha {
public:
    Escolha(int novoID = 0, string novaFrase="");
    int getID() const;
    string getFrase() const;
    void setID(int novoID);
    void setFrase(string novaFrase);

private:
    int ID;
    string frase;
};

#endif
