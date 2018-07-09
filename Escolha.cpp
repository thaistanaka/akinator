#include "Escolha.h"

Escolha::Escolha(int novoID, string novaFrase) {
    setID(novoID);
    setFrase(novaFrase);
}

int Escolha::getID() const {
    return ID;
}

string Escolha::getFrase() const {      //Função utilizada para exibir as perguntas e respostas durante o percurso da árvore
    return frase;
}

void Escolha::setID(int novoID) {
    ID = novoID;
}

void Escolha::setFrase(string novaFrase) {
    frase = novaFrase;
}
