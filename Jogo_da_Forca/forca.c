#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <locale.h>
#include <time.h>
#include "forca.h"

//Variáveis Globais
char palavrasecreta[TAMANHO_PALAVRA]; //Variável da Palavra Secreta
char chutes[26]; //Variável da quantidade de chutes
int chutesdados = 0; //Variável da quantidade de tentativas


//Funções do código
void abertura() {
    printf("Seja Bem-Vindo ao Jogo da Forca!\n");
    printf("-----------------------------------\n");
    sleep(1);
    printf("Lembre-se de ativar as letras maiúsculas para jogar!\n");
    sleep(1);
    printf("Não utilize acentos e carecteres especiais!\n\n");
    sleep(2);
    printf("Tente descobrir qual a palavra secreta:\n");
}

void chuta() {
    char chute;
    scanf(" %c", &chute);
    chutes[chutesdados] = chute;
    chutesdados++;
}

void caracteresinfo() {
    setlocale(LC_ALL, "Portuguese");
}

void desenhaforca() {
    //Armazenando a quantidade de erros
    int erros = chuteserrados();

    //Desenho da Forca e do boneco
    printf("  _______        \n");
    printf(" |/      |       \n");
    printf(" |      %c%c%c   \n", (erros >= 1 ? '(' : ' '), (erros >= 1 ? '_' : ' '), (erros >= 1 ? ')' : ' '));
    printf(" |      %c%c%c   \n", (erros >= 2 ? '\\' : ' '), (erros >= 2 ? '|' : ' '), (erros >= 2 ? '/' : ' '));
    printf(" |       %c      \n", (erros >= 3 ? '|' : ' '));
    printf(" |      %c %c    \n", (erros >= 4 ? '/' : ' '), (erros >= 4 ? '\\' : ' '));
    printf(" |               \n");
    printf("_|___            \n");
    printf("\n\n");

    //Verificações
    for(int i = 0; i < strlen(palavrasecreta); i++) {

        //A letra já foi chutada?
        int achou = jachutou(palavrasecreta[i]);

        if(achou) {
            printf("%c ", palavrasecreta[i]);

        }else {
        printf("_ ");
        }
    }
    printf("\n"); //Pular uma linha
}

void escolhepalavra() {
    //Pegando o arquivo file das palavras
    FILE* f;
    f = fopen("palavras.txt", "r");

    //Em caso de erro com o banco de dados das palavras
    if(f == 0) {
        printf("Banco de Dados não disponível\n\n");
        exit(1);
    }

    //Quantidade de Palavras Disponível no file de palavras
    int qtdpalavras;
    fscanf(f, "%d", &qtdpalavras);

    //Pegando uma palavra aleatória
    srand(time(0));
    int randomico = rand() % qtdpalavras;

    for(int i = 0; i <= randomico; i++) {
        fscanf(f, "%s", palavrasecreta);
    }

    fclose(f); //Fechando o arquivo
}

void adicionapalavra() {
    char quer;
    //Perguntando ao Usuário se ele quer adicionar uma nova palavra ao Banco de Dados de palavras do jogo
    printf("Você deseja adicionar uma nova palavra ao jogo? Responda com S ou N  ");
    scanf(" %c", &quer);

    if(quer == 'S') { // Em caso positivo...
        char novapalavra[TAMANHO_PALAVRA];
        //Perguntando ao usuário a palavra
        printf("Qual a nova palavra? ");
        scanf("%s", &novapalavra);

        //Pegando o file
        FILE* f;
        f = fopen("palavras.txt", "r+");
        //Em caso de erro com o banco de dados das palavras
        if(f == 0) {
            printf("Banco de Dados não disponível\n\n");
            exit(1);
        }

        //Calculando a quantidade de palavras
        int qtd;
        fscanf(f, "%d", &qtd);
        qtd++;

        //Salavando a nova palavra
        fseek(f, 0, SEEK_SET);
        fprintf(f, "%d", qtd);

        fseek(f, 0, SEEK_END);
        fprintf(f, "\n%s", novapalavra);

        //Mensagem de Operação Concluída com Sucesso
        printf("Palavra Adicionada com Sucesso ao Banco de Dados!\n\n");

        //Fechando o file
        fclose(f);
    }
    else { //Em caso negativo...

    }
}

int acertou() {
    for(int i = 0; i < strlen(palavrasecreta); i++) {
        if(!jachutou(palavrasecreta[i])) {
            return 0;
        }
    }
    return 1;
}

int chuteserrados() {
    int erros = 0;

    for(int i = 0; i < chutesdados; i++) {
        int existe = 0;
        for(int j = 0; j < strlen(palavrasecreta); j++) {
            if(chutes [i] == palavrasecreta[j]) {
                existe = 1;
                break;
            }
        }
        if(!existe) {
            erros++;
        }
    }
    return erros;
}

int enforcou() {

    return chuteserrados() >= 5;
}

int jachutou(char letra) {
    int achou = 0;

    //A letra já foi chutada?
    for(int j = 0; j < chutesdados; j++) {
        if(chutes[j] == letra) {
            achou = 1;
            break;
        }
    }
    return achou;
}

void fimdejogo() {
    printf("Fim de Jogo! A palavra secreta era: %s\n\n", palavrasecreta);
    sleep(1);
}


//Inicialização do Main
int main()
{
    caracteresinfo(); //Pegando as informações dos caracteres em português
    abertura(); //Boas-Vindas
    escolhepalavra(); //Palavra Secreta

    //Laço Do-While de Desenho da forca e captura do chute
    do{
        desenhaforca(); //Desenhando o símbolo da forca no jogo
        chuta(); //Captura o chute do jogador

    }while(!acertou() && !enforcou());

    //Encerrando o jogo
    if(acertou()){
        printf("Parabéns! Você acertou a palavra e ganhou o jogo!\n\n");
        printf("         ___________        \n");
        printf("        '._==_==_=_.'      \n");
        printf("        .-\:      /-.      \n");
        printf("       | (|:.     |) |     \n");
        printf("        '-|:.     |-'      \n");
        printf("          \::.    /        \n");
        printf("           '::. .'         \n");
        printf("             ) (           \n");
        printf("           _.' '._         \n");
        printf("           `""""""`        \n");
        printf("\n\n");
    }else{
        printf("Ah não! Você foi enforcado!");
        printf("   , ; ,   .-'""'-.     , ; ,    \n");
        printf("   \\|/  .'         '.  \|//     \n");
        printf("   \-;-/   ()   ()   \-;-/       \n");
        printf("   // ;               ; \\       \n");
        printf("   //__; :.         .; ;__\\     \n");
        printf("   `-----\'.'-.....-'.'/-----'   \n");
        printf("          '.'.-.-,_.'.'          \n");
        printf("           '(  (..-'             \n");
        printf("             '-'                 \n");
        printf("\n\n");
    }

    adicionapalavra();//Perguntando se o Jogador quer adicionar uma palavra

    //Finalizando e Reiniciando o jogo
    fimdejogo();

    return 0;
}
