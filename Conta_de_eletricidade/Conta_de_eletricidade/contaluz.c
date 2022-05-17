#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <unistd.h>

int main()
{
    //Pegando informa��es de carecteres
    setlocale(LC_ALL, "Portuguese");


    //Armazenando as vari�veis
    float valorconta = 0;
    float valorconsumo = 0.85;
    float soma = 0;
    float gastotoal = 0;
    float resultado = 0;
    int quantidade = 0;


    //Consumo m�dio no m�s em Kwh
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


    //Inicializa��o do Programa
    printf("-------------------------------------------------------------\n");
    printf("C�lculo da Conta de Luz Mensal - by Jo�o Pedro do Carmo R.\n");
    printf("-------------------------------------------------------------\n\n");
    sleep(2);


    //Perguntando ao usu�rio
    printf("L�mpadas LED             |Ventiladores\n");
    printf("Ar-Condicionado3           |Geladeira\n");
    printf("Lava e Seca             |Forno El�trico - Digite 6\n");
    printf("Carregadores em Geral   |Carregador Carro El�trico\n");
    printf("Chuveiro El�trico         |Computador (8h dia)\n\n");
    sleep(1);


    //Iniciando os c�clculos dos gastos
    //L�mpadas LED
    printf("Adicionando agora: L�mpadas LED\n");
    printf("Quantas l�mpadas ficam acesas em m�dia?\n");
    scanf("%d", &quantidade);
    soma = quantidade * lampadasled;
    resultado = resultado + soma;
    gastotoal = gastotoal + soma;

    //Ventiladores
    printf("Adicionando agora: Venitladores\n");
    printf("Quantos ventiladores ficam ligados em m�dia?\n");
    scanf("%d", &quantidade);
    soma = quantidade * ventilador;
    resultado = resultado + soma;
    gastotoal = gastotoal + soma;

    //Ar-Condicionado
    printf("Adicionando agora: Ar-Condicionado\n");
    printf("Quantos ar-condicionado ficam ligados em m�dia?\n");
    scanf("%d", &quantidade);
    soma = quantidade * arcondicionado;
    resultado = resultado + soma;
    gastotoal = gastotoal + soma;

    //Geladeira
    printf("Adicionando agora: Geladeira\n");
    printf("Quantas Geladeiras ficam ligadas em m�dia?\n");
    scanf("%d", &quantidade);
    soma = quantidade * geladeira;
    resultado = resultado + soma;
    gastotoal = gastotoal + soma;

    //M�quina de Lavar
    printf("Adicionando agora: M�quinas de Lavar - Lava e Seca\n");
    printf("Quantos lava e seca ficam ligadas em m�dia?\n");
    scanf("%d", &quantidade);
    soma = quantidade * lavaseca;
    resultado = resultado + soma;
    gastotoal = gastotoal + soma;

    //Forno El�trico
    printf("Adicionando agora: Forno El�trico\n");
    printf("Quantos fornos el�tricos ficam ligados em m�dia?\n");
    scanf("%d", &quantidade);
    soma = quantidade * forno;
    resultado = resultado + soma;
    gastotoal = gastotoal + soma;

    //Carregadores em Geral
    printf("Op��o Selecionada: Carregadores em Geral\n");
    printf("Quantos carregadores ficam ligados em m�dia?\n");
    scanf("%d", &quantidade);
    soma = quantidade * carregadores;
    resultado = resultado + soma;
    gastotoal = gastotoal + soma;

    //Carro El�trico
    printf("Op��o Selecionada: Carro El�trico\n");
    printf("Quantos carros el�tricos s�o carregados em m�dia?\n");
    scanf("%d", &quantidade);
    soma = quantidade * carro;
    resultado = resultado + soma;
    gastotoal = gastotoal + soma;

    //Chuveiro El�trico
    printf("Op��o Selecionada: Chuveiro El�trico\n");
    printf("Quantos chuveiros el�tricos ficam ligados em m�dia?\n");
    scanf("%d", &quantidade);
    soma = quantidade * chuveiro;
    resultado = resultado + soma;
    gastotoal = gastotoal + soma;

    //Computadores
    printf("Op��o Selecionada: Computador (Desktop ou Notebook)\n");
    printf("Quantos computadores ficam ligados em m�dia?\n");
    scanf("%d", &quantidade);
    soma = quantidade * computador;
    resultado = resultado + soma;
    gastotoal = gastotoal + soma;


    //C�lculo do Valor Final & Final do Programa
    valorconta = valorconsumo * resultado;
    printf("O Seu gasto total em m�dia em Kwh � de %.2fKwh\n", gastotoal);
    printf("O Valor m�dio de sua conta de luz neste m�s ser� de %.2f reais\n\n", valorconta);

    return 0;
}
