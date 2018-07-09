# AKINATOR - Trabalho de ED 

JOÃO AUGUSTO LEITE 743551

THAIS OYAMADA TANAKA 743597

VINICIUS HENRIQUE DOS SANTOS CARVALHO 743602

VINICIUS PANSARIM 743603

## O JOGO

O jogo feito nesse trabalho é um akinator. Nele, a partir de uma árvore com perguntas e localidades, em que as folhas são as localidades, o jogador responde as perguntas de sim ou não até chegar a uma folha contendo alguma localidade. 

Antes do jogo começar, é impressa na tela a lista de localidades, que podem ser cidades, países e pontos turísticos.

O objetivo do jogo é o programa descobrir em qual localidade o jogador pensou ao responder as perguntas.

### Como executar o jogo

O jogo foi feito em C++.

```
Para linux:
	g++ *.c *.h -o jogo
	./jogo
```

### Classe Escolha

A classe Escolha possui os objetos que serem inseridos na árvore. Cada objeto da classe possui um ID e uma frase, que pode ser uma pergunta ou uma localidade. 

Na classe Escolha há apenas métodos que permitem imprimir ou alterar o objeto.

A função geraEscolhas insere IDs e frases a seus respectivos objetos.

### Classe ABB

A classe ABB é o tipo abstrato de dados árvore binária de busca. 
https://drive.google.com/file/d/1ZHJPd1vhLXvSvGWkGBOLqzEvAkeR6WgE/view

Com a função geraArvore, através do método insere, são inseridos os objetos escolha na árvore. Cada ID é pensado conforme a ordem das perguntas.

É utilizado o método imprimeFolhas para imprimir na tela todas as localidades possíveis. A fim de que o jogador escolha uma localidade e responda as perguntas conforme essa localidade.

Após a impressão das localidades, o jogador começa a jogar. 

O jogador digita 1, caso a resposta para a pergunta seja "Sim" e, digita 0, caso seja "Não". Se o jogador digitou 1, o jogo segue para o nó esquerdo da árvore. 

Se o jogador digitou 0, o jogo segue para o nó direito da árvore. Até não possuir mais nós à esquerda e/ou à direita, quando o programa encontra a localidade.
