#include "GeraEscolhas.h"

void geraEscolhas(Escolha *escolhas) {
    for (int i = 0; i < 73; i++)        // Adiciona o ID a cada objeto escolha, � usado na inser��o da �vore ABB (maior -> dir, menor -> esq)
        escolhas[i].setID(i);

    //S�o cadastradas as perguntas e respostas dos n�s da �rvore
    escolhas[0].setFrase("Costa do Marfim");
    escolhas[1].setFrase("Possui grande comercio de marfim?");
    escolhas[2].setFrase("Africa do Sul");
    escolhas[3].setFrase("Eh um pais?");
    escolhas[4].setFrase("Piramide de Gise");
    escolhas[5].setFrase("Eh um ponto turistico?");
    escolhas[6].setFrase("Cairo");
    escolhas[7].setFrase("Esta na Africa?");
    escolhas[8].setFrase("Alemanha");
    escolhas[9].setFrase("Ganhou do Brasil por 7x1 na Copa de 2014");
    escolhas[10].setFrase("Portugal");
    escolhas[11].setFrase("Roubou nosso ouro?");
    escolhas[12].setFrase("Espanha");
    escolhas[13].setFrase("Eh um pais?");
    escolhas[14].setFrase("Torre de Piza");
    escolhas[15].setFrase("Eh uma torre inclinada?");
    escolhas[16].setFrase("Torre Eiffel");
    escolhas[17].setFrase("Eh um ponto turistico?");
    escolhas[18].setFrase("Paris");
    escolhas[19].setFrase("Eh uma cidade romantica?");
    escolhas[20].setFrase("Chernobyl");
    escolhas[21].setFrase("Eh uma cidade onde houve uma grande explosao de uma usina?");
    escolhas[22].setFrase("Barcelona");
    escolhas[23].setFrase("Eh a cidade onde o Messi mais joga?");
    escolhas[24].setFrase("Madrid");
    escolhas[25].setFrase("Esta na Europa?");
    escolhas[26].setFrase("Opera de Sydney");
    escolhas[27].setFrase("Eh um ponto turistico?");
    escolhas[28].setFrase("Australia");
    escolhas[29].setFrase("Esta na Oceania?");
    escolhas[30].setFrase("Japao");
    escolhas[31].setFrase("Eh uma ilha");
    escolhas[32].setFrase("China");
    escolhas[33].setFrase("Eh um dos paises mais populosos do mundo?");
    escolhas[34].setFrase("Emirados Arabes Unidos");
    escolhas[35].setFrase("Eh um pais?");
    escolhas[36].setFrase("Hiroshima");
    escolhas[37].setFrase("Eh uma cidade?");
    escolhas[38].setFrase("Muralha da China");
    escolhas[39].setFrase("Construido para a defesa do pais?");
    escolhas[40].setFrase("Taj Mahal");
    escolhas[41].setFrase("Eh uma das maravilhas do mundo?");
    escolhas[42].setFrase("Burj Khalifa");
    escolhas[43].setFrase("Esta na Asia?");
    escolhas[44].setFrase("Canada");
    escolhas[45].setFrase("Eh o segundo maior pais do mundo?");
    escolhas[46].setFrase("Estados Unidos da America");
    escolhas[47].setFrase("Esta no hemisferio norte?");
    escolhas[48].setFrase("Argentina");
    escolhas[49].setFrase("Fala espanhol?");
    escolhas[50].setFrase("Brasil");
    escolhas[51].setFrase("Eh um pais?");
    escolhas[52].setFrase("Machu Picchu");
    escolhas[53].setFrase("Sao ruinas de uma ex cidade");
    escolhas[54].setFrase("Chichen Itza");
    escolhas[55].setFrase("Eh uma piramide?");
    escolhas[56].setFrase("Cristo Redentor");
    escolhas[57].setFrase("Eh uma representacao de cristo?");
    escolhas[58].setFrase("CNN Tower");
    escolhas[59].setFrase("Eh um ponto turistico?");
    escolhas[60].setFrase("Sao Carlos");
    escolhas[61].setFrase("Tem a melhor universidade do Brasil?");
    escolhas[62].setFrase("Sao Paulo");
    escolhas[63].setFrase("Eh a maior cidade do pais?");
    escolhas[64].setFrase("Campinas");
    escolhas[65].setFrase("Eh uma cidade no Brasil");
    escolhas[66].setFrase("Nova York");
    escolhas[67].setFrase("Eh a cidade onde tem o Empires State?");
    escolhas[68].setFrase("Los Angeles");
    escolhas[69].setFrase("Eh a cidade onde os filmes famosos sao produzidos?");
    escolhas[70].setFrase("Toronto");
    escolhas[71].setFrase("Esta na America?");
    escolhas[72].setFrase("Antartica");
}
