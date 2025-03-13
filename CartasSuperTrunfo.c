#include <stdio.h>
int main(){
char estado1,estado2,codigo1[3],codigo2[3],cidade1[50],cidade2[50];//Variaveis que receberam valores
int populacao1,populacao2;//Variaveis que receberam valores
float area1,area2,pib1,pib2;//Variaveis que receberam valores
int pontost1,pontost2;//Variaveis que receberam valores
//ESTADO 1
printf("Nome do Estado (a-h):\n");//Expecifica oque deve conter abaixo
scanf(" %c", &estado1);//Coleta o nome do Estado
printf("Nome do Estado (a-h) + codigo de carta (01-04) ex:a01:\n");//Expecifica oque deve conter abaixo
scanf(" %s", codigo1);//Coleta nome do Estado+código da carta
printf("Nome da cidade:\n");//Expecifica oque deve conter abaixo
scanf(" %s",&cidade1);//Coleta nome da cidade
printf("Populacao do local:\n");//Expecifica oque deve conter abaixo
scanf(" %d",&populacao1);//Coleta valor de população
printf("Área:\n");//Expecifica oque deve conter abaixo
scanf(" %f",&area1);//Coleta Área
printf("PIB:\n");//Expecifica oque deve conter abaixo
scanf(" %f", &pib1); //Coleta PIB
printf("Número de pontos turísticos:\n");//Expecifica oque deve conter abaixo
scanf(" %d",&pontost1);//Coleta valor de números turísticos
//ESTADO 2
printf("Nome do Estado (a-h):\n");//Imprime o nome do Estado
scanf(" %c", &estado2);//Coleta o nome do Estado
printf("Nome do Estado (a-h) + código de carta (01-04) ex:a01:\n");//Imprime nome do Estado+ código da carta
scanf(" %s", codigo2);//Coleta nome do Estado+ código da carta
printf("Nome da cidade:\n");//Imprime o nome da cidade
scanf(" %s",&cidade2);//Coleta o nome da cidade
printf("População do local:\n");//Imprime o valor de população
scanf(" %d",&populacao2);//Coleta valor de população
printf("Área:\n");//Imprime Área
scanf(" %f",&area2);//Coleta Área
printf("PIB:\n");//Imprime PIB
scanf(" %f" , &pib2);//Coleta PIB
printf("Número de pontos turísticos:\n");//Imprime o numero de pontos turísticos
scanf("%d",&pontost2);//Coleta o numero de pontos turísticos
//INFORMACOES NA TELA-ESTADO 1
printf("Carta 1: \n");//Representa o número da carta do jogo
printf("Estado: %c\n", estado1);//Estado em análise
printf("Código: %s\n", codigo1);//O código da carta ex:a01
printf("Nome da cidade: %s\n", cidade1);//Nome da cidade
printf("População: %d\n", populacao1);//População da cidade
printf("Área: %.2f\n", area1);//Área da cidade
printf("PIB: %.2f\n",pib1);//PIb da cidade
printf("número de pontos turísticos: %d\n", pontost1);//auto explicativo
//INFORMACOES NA TELA-ESTADO 2
printf("Carta 2:\n");//Representa o número da carta do jogo
printf("Estado: %c\n", estado2);//Estado em análise
printf("Código: %s\n", codigo2);//O código da carta ex:a01
printf("Nome da cidade: %s\n", cidade2);//Nome da cidade
printf("População: %d\n", populacao2);//População da cidade
printf("Área: %.2f\n", area2);//Área da cidade
printf("PIB: %.2f\n",pib2);//PIB da cidade
printf("número de pontos turísticos: %d\n", pontost2);//Auto explicativo
 
}