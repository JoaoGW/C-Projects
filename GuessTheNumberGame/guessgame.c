#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>
#include <time.h>

int main()
{
   //Abertura com ASCII Art
   printf("                                 \n");
   printf("           ________              \n");
   printf("     _jgN########Ngg_            \n");
   printf("   _N##N@@""     ""9NN##Np_      \n");
   printf("  d###P            N####p        \n");
   printf("  '^^'              T####        \n");
   printf("                    d###P        \n");
   printf("                 _g###@F         \n");
   printf("              _gN##@P            \n");
   printf("            gN###F'              \n");
   printf("           d###F                 \n");
   printf("          0###F                  \n");
   printf("          0###F                  \n");
   printf("          0###F                  \n");
   printf("          'NN@'                  \n");
   printf("                                 \n");
   printf("           ___                   \n");
   printf("          q###r                  \n");
   printf("           ___                   \n");
   printf("                                 \n");


    //Pegando as informa��es dos caracteres
    setlocale(LC_ALL, "Portuguese");

    //Configura��o do N�mero Secreto de Forma Aleat�ria
    int segundos = time(0);
    srand(segundos);
    int numerogrande = rand();

    //Armazenando as vari�veis
    int numerosecreto = numerogrande % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;
    int numerotentativas;


    //Boas-Vindas
    printf("-----------------------------------\n");
    printf("Bem-vindo ao jogo de advinha��o\n");
    printf("-----------------------------------\n");
    sleep(1);


    //Dificuldade
    int nivel;
    printf("Qual o N�vel de Dificuldade? Isto Afeta a Quantidade de Tentativas!\n");
    printf("F�cil - 1; M�dio - 2; Dif�cil - 3; Imposs�vel - 4\n");
    scanf("%d", &nivel);
    switch(nivel) {
        case 1:
            numerotentativas = 20;
            break;
        case 2:
            numerotentativas = 15;
            break;
        case 3:
            numerotentativas = 10;
            break;
        case 4:
            numerotentativas = 5;
            break;
    }
    printf("-----------------------------------\n\n");
    sleep(1);

    //Testes com loop for
    for(int i = 1; i <= numerotentativas; i++){
        //N�mero da tentativa
        printf("Tentativa %d\n", tentativas);
        //Chute do Usu�rio
        printf("Qual n�mero voc� imagina?");
        scanf("%d", &chute);
        printf("Seu chute foi: %d\n", chute);

        if(chute < 0) {
            printf("Voc� n�o pode chutar n�meros negativos!\n");
        continue;
        }

        //Exibindo resultados
        if(chute == numerosecreto) {
            break;
        }else{
            if(chute > numerosecreto) {
                printf("Seu chute foi maior que o n�mero secreto\n");
            }
            else {
                printf("Seu chute foi menor que o n�mero secreto\n");
            }
            printf("Tente novamente\n\n");
        }
        //C�lculo das Tentativas
        tentativas = tentativas + 1;

        //C�lculo da Pontua��o
        double pontosperdidos = abs(chute - numerosecreto) / (double)2;
        pontos = pontos - pontosperdidos;
    }
    //Declarando a Vit�ria do Jogador
    if(chute == numerosecreto) {
        printf("Parab�ns! Voc� Ganhou o Jogo!\n");
        //Exibindo os Resultados Finais do Jogo
        printf("Fim de Jogo! Voc� acertou o n�mero secreto em %d tentativas!\n", tentativas);
        printf("Sua pontua��o foi de: %.2f\n", pontos);
        printf("Reiniciando o jogo em 3 segundos...\n\n");
        sleep(3);
        main();
    } else {
        printf("Voc� perdeu! Tente Novamente!\n\n");
        printf("O N�mero Secreto era %d", numerosecreto);
    }

    return 0;
}
