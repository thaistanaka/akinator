#include "ArvoreBinariaBusca.h"
#include "GeraEscolhas.h"
#include "GeraArvore.h"

int main() {
    bool opcao;

    cout << "AKINATOR!!!!!" << endl << endl;

    Escolha escolhas[73];
    ABB arvoreEscolhas;

    geraEscolhas(escolhas);
    geraArvore(escolhas, arvoreEscolhas);

    arvoreEscolhas.imprimeFolhas();

    cout << endl << endl << "Pense em uma dessas localidades e chegue ate ela pelo akinator" << endl << endl;

    arvoreEscolhas.jogar();

    return 0;
}
