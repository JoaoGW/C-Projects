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


    //Pegando as informações dos caracteres
    setlocale(LC_ALL, "Portuguese");

    //Configuração do Número Secreto de Forma Aleatória
    int segundos = time(0);
    srand(segundos);
    int numerogrande = rand();

    //Armazenando as variáveis
    int numerosecreto = numerogrande % 100;
    int chute;
    int tentativas = 1;
    double pontos = 1000;
    int numerotentativas;


    //Boas-Vindas
    printf("-----------------------------------\n");
    printf("Bem-vindo ao jogo de advinhação\n");
    printf("-----------------------------------\n");
    sleep(1);


    //Dificuldade
    int nivel;
    printf("Qual o Nível de Dificuldade? Isto Afeta a Quantidade de Tentativas!\n");
    printf("Fácil - 1; Médio - 2; Difícil - 3; Impossível - 4\n");
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
        //Número da tentativa
        printf("Tentativa %d\n", tentativas);
        //Chute do Usuário
        printf("Qual número você imagina?");
        scanf("%d", &chute);
        printf("Seu chute foi: %d\n", chute);

        if(chute < 0) {
            printf("Você não pode chutar números negativos!\n");
        continue;
        }

        //Exibindo resultados
        if(chute == numerosecreto) {
            break;
        }else{
            if(chute > numerosecreto) {
                printf("Seu chute foi maior que o número secreto\n");
            }
            else {
                printf("Seu chute foi menor que o número secreto\n");
            }
            printf("Tente novamente\n\n");
        }
        //Cálculo das Tentativas
        tentativas = tentativas + 1;

        //Cálculo da Pontuação
        double pontosperdidos = abs(chute - numerosecreto) / (double)2;
        pontos = pontos - pontosperdidos;
    }
    //Declarando a Vitória do Jogador
    if(chute == numerosecreto) {
        printf("Parabéns! Você Ganhou o Jogo!\n");
        //Exibindo os Resultados Finais do Jogo
        printf("Fim de Jogo! Você acertou o número secreto em %d tentativas!\n", tentativas);
        printf("Sua pontuação foi de: %.2f\n", pontos);
        printf("Reiniciando o jogo em 3 segundos...\n\n");
        sleep(3);
        main();
    } else {
        printf("Você perdeu! Tente Novamente!\n\n");
        printf("O Número Secreto era %d", numerosecreto);
    }

    return 0;
}
