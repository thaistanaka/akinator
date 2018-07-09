#include "GeraArvore.h"

void geraArvore(Escolha *escolhas, ABB& arvoreEscolhas) {
    //"Esta na Africa" eh verdadeiro
    arvoreEscolhas.insere(escolhas[7]);
    arvoreEscolhas.insere(escolhas[3]);
    arvoreEscolhas.insere(escolhas[1]);
    arvoreEscolhas.insere(escolhas[5]);
    arvoreEscolhas.insere(escolhas[0]);
    arvoreEscolhas.insere(escolhas[2]);
    arvoreEscolhas.insere(escolhas[4]);
    arvoreEscolhas.insere(escolhas[6]);

    //"Esta na Africa" eh verdadeiro e "Esta na Europa" eh verdadeiro
    arvoreEscolhas.insere(escolhas[25]);
    arvoreEscolhas.insere(escolhas[13]);
    arvoreEscolhas.insere(escolhas[9]);
    arvoreEscolhas.insere(escolhas[8]);
    arvoreEscolhas.insere(escolhas[11]);
    arvoreEscolhas.insere(escolhas[10]);
    arvoreEscolhas.insere(escolhas[12]);
    arvoreEscolhas.insere(escolhas[17]);
    arvoreEscolhas.insere(escolhas[15]);
    arvoreEscolhas.insere(escolhas[19]);
    arvoreEscolhas.insere(escolhas[14]);
    arvoreEscolhas.insere(escolhas[16]);
    arvoreEscolhas.insere(escolhas[18]);
    arvoreEscolhas.insere(escolhas[21]);
    arvoreEscolhas.insere(escolhas[20]);
    arvoreEscolhas.insere(escolhas[23]);
    arvoreEscolhas.insere(escolhas[22]);
    arvoreEscolhas.insere(escolhas[24]);

    //"Esta na Europa" eh falso e "Esta na Oceania" eh verdadeiro
    arvoreEscolhas.insere(escolhas[29]);
    arvoreEscolhas.insere(escolhas[27]);
    arvoreEscolhas.insere(escolhas[26]);
    arvoreEscolhas.insere(escolhas[28]);

    //"Esta na Oceania" eh falso e "Esta na Asia" eh verdadeiro
    arvoreEscolhas.insere(escolhas[43]);
    arvoreEscolhas.insere(escolhas[35]);
    arvoreEscolhas.insere(escolhas[31]);
    arvoreEscolhas.insere(escolhas[30]);
    arvoreEscolhas.insere(escolhas[33]);
    arvoreEscolhas.insere(escolhas[32]);
    arvoreEscolhas.insere(escolhas[34]);
    arvoreEscolhas.insere(escolhas[37]);
    arvoreEscolhas.insere(escolhas[36]);
    arvoreEscolhas.insere(escolhas[39]);
    arvoreEscolhas.insere(escolhas[38]);
    arvoreEscolhas.insere(escolhas[41]);
    arvoreEscolhas.insere(escolhas[40]);
    arvoreEscolhas.insere(escolhas[42]);

    //"Esta na Asia" eh falso e "Esta na America" eh verdadeiro
    arvoreEscolhas.insere(escolhas[71]);
    arvoreEscolhas.insere(escolhas[51]);
    arvoreEscolhas.insere(escolhas[47]);
    arvoreEscolhas.insere(escolhas[45]);
    arvoreEscolhas.insere(escolhas[44]);
    arvoreEscolhas.insere(escolhas[46]);
    arvoreEscolhas.insere(escolhas[49]);
    arvoreEscolhas.insere(escolhas[48]);
    arvoreEscolhas.insere(escolhas[50]);
    arvoreEscolhas.insere(escolhas[59]);
    arvoreEscolhas.insere(escolhas[53]);
    arvoreEscolhas.insere(escolhas[52]);
    arvoreEscolhas.insere(escolhas[55]);
    arvoreEscolhas.insere(escolhas[54]);
    arvoreEscolhas.insere(escolhas[57]);
    arvoreEscolhas.insere(escolhas[56]);
    arvoreEscolhas.insere(escolhas[58]);
    arvoreEscolhas.insere(escolhas[65]);
    arvoreEscolhas.insere(escolhas[61]);
    arvoreEscolhas.insere(escolhas[60]);
    arvoreEscolhas.insere(escolhas[63]);
    arvoreEscolhas.insere(escolhas[62]);
    arvoreEscolhas.insere(escolhas[64]);
    arvoreEscolhas.insere(escolhas[67]);
    arvoreEscolhas.insere(escolhas[66]);
    arvoreEscolhas.insere(escolhas[69]);
    arvoreEscolhas.insere(escolhas[68]);
    arvoreEscolhas.insere(escolhas[70]);

    //"Esta na America" eh falso, ou seja, eh a Antartica
    arvoreEscolhas.insere(escolhas[72]);
}
