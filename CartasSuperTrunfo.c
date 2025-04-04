#include <stdio.h>

int main() {
    // Declaração de variáveis
    char estado1[2], estado2[2], codigo1[4], codigo2[4], cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2, pib1, pib2, densidadepopulacional1, densidadepopulacional2, pibpercapita1, pibpercapita2;
    int pontosturisticos1, pontosturisticos2;
    int comparacao1, comparacao2;
    float resultado1, resultado2;
    
    // Entrada de dados para o Estado 1
    printf("Nome do Estado (a-h):\n");
    scanf(" %s", estado1);
    printf("Nome do Estado (a-h) + codigo de carta (01-04) ex:a01:\n");
    scanf("%s", codigo1);
    printf("Nome da cidade:\n");
    scanf(" %s", cidade1);
    printf("População do local:\n");
    scanf("%lu", &populacao1);
    printf("Área em quilômetros:\n");
    scanf("%f", &area1);
    printf("PIB:\n");
    scanf("%f", &pib1);
    printf("Número de pontos turísticos:\n");
    scanf("%d", &pontosturisticos1);

    // Entrada de dados para o Estado 2
    printf("Nome do Estado (a-h):\n");
    scanf(" %s", estado2);
    printf("Nome do Estado (a-h) + código de carta (01-04) ex:a01:\n");
    scanf("%s", codigo2);
    printf("Nome da cidade:\n");
    scanf(" %s", cidade2);
    printf("População do local:\n");
    scanf("%lu", &populacao2);
    printf("Área em quilômetros\n");
    scanf("%f", &area2);
    printf("PIB:\n");
    scanf("%f", &pib2);
    printf("Número de pontos turísticos:\n");
    scanf("%d", &pontosturisticos2);

    // Cálculo de densidade populacional e PIB per capita para os dois estados
    densidadepopulacional1 = populacao1 / area1;
    pibpercapita1 = pib1 / populacao1;
    densidadepopulacional2 = populacao2 / area2;
    pibpercapita2 = pib2 / populacao2;

    // Menus dinâmicos para escolha de dois atributos para comparação
    printf("Escolha o primeiro atributo para comparação:\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("Digite o número do primeiro atributo: ");
    scanf("%d", &comparacao1);

    // Verificando se o atributo escolhido é válido
    if (comparacao1 < 1 || comparacao1 > 5) {
        printf("Opção inválida!\n");
        return 1;
    }

    // Excluindo o primeiro atributo da escolha do segundo
    printf("Escolha o segundo atributo para comparação (não pode ser o mesmo que o primeiro):\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Número de pontos turísticos\n");
    printf("5. Densidade populacional\n");
    printf("Digite o número do segundo atributo: ");
    scanf("%d", &comparacao2);

    if (comparacao2 < 1 || comparacao2 > 5 || comparacao2 == comparacao1) {
        printf("Opção inválida ou atributo repetido!\n");
        return 1;
    }

    // Comparação de atributos escolhidos
    

    // Comparação do primeiro atributo
    if (comparacao1 == 1) {
        resultado1 = populacao1;
        resultado2 = populacao2;
    } else if (comparacao1 == 2) {
        resultado1 = area1;
        resultado2 = area2;
    } else if (comparacao1 == 3) {
        resultado1 = pib1;
        resultado2 = pib2;
    } else if (comparacao1 == 4) {
        resultado1 = pontosturisticos1;
        resultado2 = pontosturisticos2;
    } else if (comparacao1 == 5) {
        resultado1 = densidadepopulacional1;
        resultado2 = densidadepopulacional2;
    }

    // Comparação do segundo atributo
    if (comparacao2 == 1) {
        resultado1 = resultado1 + populacao1; // Substituindo o operador +=
        resultado2 = resultado2 + populacao2; // Substituindo o operador +=
    } else if (comparacao2 == 2) {
        resultado1 = resultado1 + area1; // Substituindo o operador +=
        resultado2 = resultado2 + area2; // Substituindo o operador +=
    } else if (comparacao2 == 3) {
        resultado1 = resultado1 + pib1; // Substituindo o operador +=
        resultado2 = resultado2 + pib2; // Substituindo o operador +=
    } else if (comparacao2 == 4) {
        resultado1 = resultado1 + pontosturisticos1; // Substituindo o operador +=
        resultado2 = resultado2 + pontosturisticos2; // Substituindo o operador +=
    } else if (comparacao2 == 5) {
        resultado1 = resultado1 + densidadepopulacional1; // Substituindo o operador +=
        resultado2 = resultado2 + densidadepopulacional2; // Substituindo o operador +=
    }

    // Exibindo os resultados
    printf("Resultado da comparação:\n");
    printf("Estado 1: %s, Cidade: %s\n", estado1, cidade1);
    printf("Estado 2: %s, Cidade: %s\n", estado2, cidade2);
    printf("Atributo 1: %d\n", comparacao1);
    printf("Atributo 2: %d\n", comparacao2);
    printf("Soma do primeiro atributo para a cidade 1: %.2f\n", resultado1);
    printf("Soma do primeiro atributo para a cidade 2: %.2f\n", resultado2);

    // Verificando o vencedor
    if (resultado1 > resultado2) {
        printf("A cidade %s venceu!\n", cidade1);
    } else if (resultado2 > resultado1) {
        printf("A cidade %s venceu!\n", cidade2);
    } else {
        printf("Empate!\n");
    }

    return 0;
}