#include <stdio.h>
  int main(){
    //declaração de variaveis linha 3-7
  char estado1[1],estado2[1],codigo1[4],codigo2[4],cidade1[50],cidade2[50];//Variaveis que receberam valores
  unsigned long int populacao1,populacao2;//Variaveis que receberam valores
  float area1,area2,pib1,pib2, densidadepopulacional1,densidadepopulacional2,pibpercapita1,pibpercapita2,superpoder1,superpoder2;//Variaveis que receberam valores
  int pontosturisticos1,pontosturisticos2;//Variaveis que receberam valores
  //captura de dados linha 8-53
//ESTADO 1
     printf("Nome do Estado (a-h):\n");//Expecifica oque deve conter abaixo
     scanf(" %s", &estado1);//Coleta o nome do Estado

     printf("Nome do Estado (a-h) + codigo de carta (01-04) ex:a01:\n");//Expecifica oque deve conter abaixo
     scanf("%s", codigo1);//Coleta nome do Estado+código da carta

     printf("Nome da cidade:\n");//Expecifica oque deve conter abaixo
     scanf(" %s",&cidade1);//Coleta nome da cidade

     printf("Populacao do local:\n");//Expecifica oque deve conter abaixo
     scanf(" %lu",&populacao1);//Coleta valor de população

     printf("Área em quilômetros:\n");//Expecifica oque deve conter abaixo
     scanf(" %f",&area1);//Coleta Área

     printf("PIB:\n");//Expecifica oque deve conter abaixo
     scanf(" %f", &pib1); //Coleta PIB

     printf("Número de pontos turísticos:\n");//Expecifica oque deve conter abaixo
     scanf(" %d",&pontosturisticos1);//Coleta valor de números turísticos
     
  
     
//ESTADO 2
     printf("Nome do Estado (a-h):\n");//Imprime o nome do Estado
     scanf(" %s", &estado2);//Coleta o nome do Estado

     printf("Nome do Estado (a-h) + código de carta (01-04) ex:a01:\n");//Imprime nome do Estado+ código da carta
     scanf(" %s", codigo2);//Coleta nome do Estado+ código da carta

     printf("Nome da cidade:\n");//Imprime o nome da cidade
     scanf(" %s",&cidade2);//Coleta o nome da cidade

     printf("População do local:\n");//Imprime o valor de população
     scanf(" %lu",&populacao2);//Coleta valor de população

     printf("Área em quilômetros\n");//Imprime Área
     scanf(" %f",&area2);//Coleta Área
     printf("PIB:\n");//Imprime PIB
     scanf(" %f" , &pib2);//Coleta PIB

     printf("Número de pontos turísticos:\n");//Imprime o numero de pontos turísticos
     scanf(" %d",&pontosturisticos2);//Coleta o numero de pontos turísticos

    //atribuição de valores a variaveis
//calculos Estado1
     densidadepopulacional1 =(float) (populacao1/area1) ;//soma população e area e armazena em população
     pibpercapita1 =(float)(pib1/populacao1);//soma pib e população e armazena em pib per capita

//calculos Estado2
     densidadepopulacional2 =(float)(populacao2/area2);//soma população e area e armazena em população
     pibpercapita2 =(float) (pib2/populacao2);//soma pib e população e armazena em pib per capita
    //imprimindo informações: até o fim do código
//INFORMACOES NA TELA-ESTADO 1
     printf("Carta 1: \n");//Representa o número da carta do jogo
     printf("Estado: %s\n", estado1);//Estado em análise
     printf("Código: %s\n", codigo1);//O código da carta ex:a01
     printf("Nome da cidade: %s\n", cidade1);//Nome da cidade
     printf("População: %lu\n", populacao1);//População da cidade
     printf("Área em quilômetros: %.2f\n", area1);//Área da cidade
     printf("PIB: %.2f\n",pib1);//PIb da cidade
     printf("número de pontos turísticos: %d\n", pontosturisticos1);//auto explicativo
     printf("densidade populacional: %.2f\n",densidadepopulacional1);//imprime o valor de densidade populacional
     printf("PIB per Capita: %.2f \n",pibpercapita1);//imprime o valor do pib per capita
     superpoder1 =(float) populacao1+area1+pib1+pontosturisticos1+(1/densidadepopulacional1)+pibpercapita1;//responsavel pelo calculo do super poder, ou seja a soma dos valores da cidade
     printf("super poder: %f\n",superpoder1);//imprime o valor de superpoder
//INFORMACOES NA TELA-ESTADO 2
     printf("Carta 2:\n");//Representa o número da carta do jogo
     printf("Estado: %s\n", estado2);//Estado em análise
     printf("Código: %s\n", codigo2);//O código da carta ex:a01
     printf("Nome da cidade: %s\n", cidade2);//Nome da cidade
     printf("População: %lu\n", populacao2);//População da cidade
     printf("Área em quilônetros: %.2f\n", area2);//Área da cidade
     printf("PIB: %.2f\n",pib2);//PIB da cidade
     printf("número de pontos turísticos: %d\n", pontosturisticos2);//Auto explicativo
     printf("densidade populacional: %.2f\n",densidadepopulacional2);//imprime o valor de densidade populacional 
     printf("PIB per Capita: %.2f \n",pibpercapita2);//imprime o valor do pib per capita
     superpoder2 =(float) populacao2+area2+pib2+pontosturisticos2+(1/densidadepopulacional2)+pibpercapita2;//responsavel pelo calculo do super poder, ou seja a soma dos valores da cidade
     printf("superpoder: %f\n",superpoder2);
     //comparação de cartas; até o fim do código
    //
    //
    //
     printf("comparação de cartas:\n");//impressão: inicio da comparação de cartas 
    //
    //
    //
      printf("pib per capta: \n");
     if(pibpercapita1>pibpercapita2){
         printf("a carta 1 com cidade de nome %s venceu\n",cidade1);
     }else{
         printf("a carta 2 com cidade de nome %s venceu\n",cidade2);
     }//compara e imprime a carta vencedora dessa caracteristica
 return 0;
}