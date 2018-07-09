#include "ArvoreBinariaBusca.h"
#include "GeraEscolhas.h"
#include "GeraArvore.h"

int main() {
    bool opcao;

    cout << "O Mind Reader eh uma IA super-poderosa que adivinhara o que voce esta pensando! (Por favor, pense em uma das localidades abaixo)" << endl << endl;
    
    Escolha escolhas[73];
    ABB arvoreEscolhas;

    geraEscolhas(escolhas);
    geraArvore(escolhas, arvoreEscolhas);

    arvoreEscolhas.imprimeFolhas();

    cout << endl << endl;

    arvoreEscolhas.jogar();

    cout << "O Mind Reader nunca erra!" << endl;
    return 0;
}
