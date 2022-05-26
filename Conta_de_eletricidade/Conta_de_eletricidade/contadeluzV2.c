#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>

//Variáveis Globais
float valorconta = 0;
float valorconsumo = 0.85;
float soma = 0;
float gastotoal = 0;
float resultado = 0;
int quantidade = 0;

//Functions
void caracteres(){
    setlocale(LC_ALL, "Portuguese");
}

void inicializacao(){
    printf("-------------------------------------------------------------\n");
    printf("Cálculo da Conta de Luz Mensal - by João Pedro do Carmo R.\n");
    printf("-------------------------------------------------------------\n\n");
    sleep(2);
    //Perguntando ao usuário
    printf("Lâmpadas LED               |Ventiladores\n");
    printf("Ar-Condicionado            |Geladeira\n");
    printf("Lava e Seca                |Forno Elétrico\n");
    printf("Carregadores em Geral      |Carregador Carro Elétrico\n");
    printf("Chuveiro Elétrico          |Computador (8h dia)\n\n");
    sleep(1);

}

void calculofinal(){
    valorconta = valorconsumo * resultado;
    printf("\n");
    printf("-------------------------------------------------------------\n");
    printf("O Seu gasto total em média em Kwh é de %.2fKwh\n", gastotoal);
    printf("O Valor médio de sua conta de luz neste mês será de %.2f reais\n\n", valorconta);
}

int main()
{
    //Consumo médio no mês em Kwh com seus valores de cálculo
    float lampadasled = 4.5;
    float ventilador = 17.4;
    float arcondicionado = 240.03;
    float geladeira = 39.6;
    float lavaseca = 7.2;
    float forno = 14.15;
    float carregadores = 0.407;
    float carro = 55.3;
    float chuveiro = 80.5;
    float computador = 40.02;


    caracteres(); //Pegando informações de carecteres

    inicializacao();//Inicialização do Programa

    //Iniciando os cáclculos dos gastos
    //Lâmpadas LED
    printf("Adicionando agora: Lâmpadas LED\n");
    printf("Quantas lâmpadas led ficam acesas em média?\n");
    scanf("%d", &quantidade);
    soma = quantidade * lampadasled;
    resultado = resultado + soma;
    gastotoal = gastotoal + soma;

    //Ventiladores
    printf("Adicionando agora: Venitladores\n");
    printf("Quantos ventiladores ficam ligados em média?\n");
    scanf("%d", &quantidade);
    soma = quantidade * ventilador;
    resultado = resultado + soma;
    gastotoal = gastotoal + soma;

    //Ar-Condicionado
    printf("Adicionando agora: Ar-Condicionado\n");
    printf("Quantos ar-condicionado ficam ligados em média?\n");
    scanf("%d", &quantidade);
    soma = quantidade * arcondicionado;
    resultado = resultado + soma;
    gastotoal = gastotoal + soma;

    //Geladeira
    printf("Adicionando agora: Geladeira\n");
    printf("Quantas Geladeiras ficam ligadas em média?\n");
    scanf("%d", &quantidade);
    soma = quantidade * geladeira;
    resultado = resultado + soma;
    gastotoal = gastotoal + soma;

    //Máquina de Lavar
    printf("Adicionando agora: Máquinas de Lavar - Lava e Seca\n");
    printf("Quantos lava e seca ficam ligadas em média?\n");
    scanf("%d", &quantidade);
    soma = quantidade * lavaseca;
    resultado = resultado + soma;
    gastotoal = gastotoal + soma;

    //Forno Elétrico
    printf("Adicionando agora: Forno Elétrico\n");
    printf("Quantos fornos elétricos ficam ligados em média?\n");
    scanf("%d", &quantidade);
    soma = quantidade * forno;
    resultado = resultado + soma;
    gastotoal = gastotoal + soma;

    //Carregadores em Geral
    printf("Adicionando agora: Carregadores em Geral\n");
    printf("Quantos carregadores ficam ligados em média?\n");
    scanf("%d", &quantidade);
    soma = quantidade * carregadores;
    resultado = resultado + soma;
    gastotoal = gastotoal + soma;

    //Carro Elétrico
    printf("Adicionando agora: Carro Elétrico\n");
    printf("Quantos carros elétricos são carregados em média?\n");
    scanf("%d", &quantidade);
    soma = quantidade * carro;
    resultado = resultado + soma;
    gastotoal = gastotoal + soma;

    //Chuveiro Elétrico
    printf("Adicionando agora: Chuveiro Elétrico\n");
    printf("Quantos chuveiros elétricos ficam ligados em média?\n");
    scanf("%d", &quantidade);
    soma = quantidade * chuveiro;
    resultado = resultado + soma;
    gastotoal = gastotoal + soma;

    //Computadores
    printf("Adicionando agora: Computador (Desktop ou Notebook)\n");
    printf("Quantos computadores ficam ligados em média?\n");
    scanf("%d", &quantidade);
    soma = quantidade * computador;
    resultado = resultado + soma;
    gastotoal = gastotoal + soma;

    calculofinal();//Cálculo do Valor Final & Finalização do Programa

    return 0;
}
