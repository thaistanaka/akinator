#include "Escolha.h"

Escolha::Escolha(int novoID, string novaFrase) {
    setID(novoID);
    setFrase(novaFrase);
}

int Escolha::getID() const {
    return ID;
}

string Escolha::getFrase() const {
    return frase;
}

void Escolha::setID(int novoID) {
    ID = novoID;
}

void Escolha::setFrase(string novaFrase) {
    frase = novaFrase;
}
