#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo
// Tema 2 - Comparação das Cartas

// Feito por Alex Lima

int main() {
    
    /* Definição das variáveis da cidade, como: código, nome, população, área, PIB
    e número de pontos turísticos */

    char codigoEstado1; /* A ser preenchida com as letras de A a H, sendo que cada uma representa 
                        um estado - Carta 1 */
    char codigoCarta1[5]; /* Representa o código individual dado à carta, sempre começando pela
                            letra que representa o estado. Ex.: A01, B03, C05, etc - Carta 1*/
    char nomeCidade1[30]; /* A ser preenchida com o nome da cidade - Carta 1*/
    int populacao1; /* Representa a quantidade de habitantes da cidade - Carta 1*/
    float area1; /* Representa a área da cidade em km2 - Carta 1*/
    float pib1; /* Representa o PIB da cidade -Carta 1*/
    int pontosTuristicos1; /* Representa o número de pontos turísticos na cidade - Carta 1*/


    char codigoEstado2; /* A ser preenchida com as letras de A a H, sendo que cada uma representa 
                        um estado - Carta 2*/
    char codigoCarta2[5]; /* Representa o código individual dado à carta, sempre começando pela
                            letra que representa o estado. Ex.: A01, B03, C05, etc - Carta 2*/
    char nomeCidade2[30]; /* A ser preenchida com o nome da cidade - Carta 2*/
    int populacao2; /* Representa a quantidade de habitantes da cidade - Carta 2*/
    float area2; /* Representa a área da cidade em km2 - Carta 2*/
    float pib2; /* Representa o PIB da cidade - Carta 2*/
    int pontosTuristicos2; /* Representa o número de pontos turísticos na cidade - Carta 2*/
    //Variáveis para comportar densidade populacional e PIB per capita 
    float densidadePopulacional1;
    float pibCapita1;
    float densidadePopulacional2;
    float pibCapita2;

    int opcao;
    int opcao2;
    float resultado11, resultado12, resultado21, resultado22, resultadoFinal1, resultadoFinal2;
    char campeao1 [80];
    char campeao2 [80];

    
    codigoEstado1 = 'A';
    codigoEstado2 = 'B';
    strcpy(codigoCarta1, "B01");
    strcpy(codigoCarta2, "B02");
    strcpy(nomeCidade1, "Rio de Janeiro");
    strcpy(nomeCidade2, "São Paulo");
    populacao1 = 7000000;
    populacao2 = 12000000;
    area1 = 4512.4235;
    area2 = 6325.546;
    pib1 = 12056.25;
    pib2 = 36245.24;
    pontosTuristicos1 = 50;
    pontosTuristicos2 = 30;

        //Cálculo de densidade populacional e PIB per capita
        densidadePopulacional1 = (float) populacao1/area1;
        pibCapita1 = (float) pib1/populacao1;

            // Calcula densidade populacional e pib per capita - carta 2
    densidadePopulacional2 = (float) populacao2/area2;
    pibCapita2 = (float) pib2/populacao2;



    // Comparação de Cartas - Área é o fator que decide:
    //if (area1>area2){
        //printf("\n\nÁrea - Carta 1 - %s : %.2f\n",nomeCidade1, area1);
        //printf("Área - Carta 2 - %s : %.2f\n\n",nomeCidade2, area2);
        //printf("Carta 1 venceu (%s)!\n\n",nomeCidade1);
    //} else{
        //printf("Área - Carta 1 - %s : %.2f\n",nomeCidade1, area1);
        //printf("Área - Carta 2 - %s : %.2f\n\n",nomeCidade2, area2);
        //printf("Carta 2 venceu (%s)!\n\n",nomeCidade2);
    //}


    //Menu interativo
    printf("\nVAMOS VER QUEM VENCE? ESCOLHA O PRIMEIRO ATRIBUTO A SER COMPARADO:\n");
    printf("1 - POPULAÇÃO\n");
    printf("2 - ÁREA\n");
    printf("3 - PIB\n");
    printf("4 - QUANTIDADE DE PONTOS TURÍSTICOS\n");
    printf("5 - DENSIDADE DEMOGRÁFICA\n");
    scanf("%i", &opcao);

    switch (opcao)
    {
        case 1:
            if (populacao1>populacao2) {
                printf("Com relação à população, %s venceu!", nomeCidade1);
            }else if (populacao1 == populacao2){
                printf("Com relação à população, %s e %s empataram!", nomeCidade1, nomeCidade2);
            }else{
                printf("Com relação à população, %s venceu!", nomeCidade2);
            }
            resultado11 = (float) populacao1;
            resultado12 = (float) populacao2;
        break;

        case 2:
            if (area1>area2) {
                printf("Com relação à área, %s venceu!", nomeCidade1);
            }else if (area1 == area2){
                printf("Com relação à área, %s e %s empataram!", nomeCidade1, nomeCidade2);
            }else{
                printf("Com relação à área, %s venceu!", nomeCidade2);
            }
            resultado11 = area1;
            resultado12 = area2;
        break;

        case 3:
            if (pib1>pib2) {
                printf("Com relação ao PIB, %s venceu!", nomeCidade1);
            }else if (pib1 == pib2){
                printf("Com relação ao PIB, %s e %s empataram!", nomeCidade1, nomeCidade2);
            }else{
                printf("Com relação ao PIB, %s venceu!", nomeCidade2);
            }
            resultado11 = pib1;
            resultado12 = pib2;        
        break;

        case 4:
            if (pontosTuristicos1>pontosTuristicos2) {
                printf("Com relação à quantidade de pontos turísticos, %s venceu!", nomeCidade1);
            }else if (pontosTuristicos1 == pontosTuristicos2){
                printf("Com relação à quantidade de pontos turísticos, %s e %s empataram!", nomeCidade1, nomeCidade2);
            }else{
                printf("Com relação à quantidade de pontos turísticos, %s venceu!", nomeCidade2);
            }
            resultado11 = (float) pontosTuristicos1;
            resultado12 = (float) pontosTuristicos2;    
        break;


        case 5:
            if (densidadePopulacional1<densidadePopulacional2) {
                printf("Com relação à densidade populacional, %s venceu!", nomeCidade1);
            }else if (densidadePopulacional1 == densidadePopulacional2){
                printf("Com relação à densidade populacional, %s e %s empataram!", nomeCidade1, nomeCidade2);
            }else{
                printf("Com relação à população, %s venceu!", nomeCidade2);
            }
            resultado11 = 1/densidadePopulacional1;
            resultado12 = 1/densidadePopulacional2;  
            break;
    
    default:
        printf("O valor escolhido não é válido! Você terá que voltar do início");
        break;
    }



     //Menu interativo
     printf("\n\nESCOLHA O SEGUNDO ATRIBUTO (A SUA PRIMEIRA ESCOLHA FOI: %i. NÃO ESCOLHA A MESMA!!!):\n",opcao);
     printf("1 - POPULAÇÃO\n");
     printf("2 - ÁREA\n");
     printf("3 - PIB\n");
     printf("4 - QUANTIDADE DE PONTOS TURÍSTICOS\n");
     printf("5 - DENSIDADE DEMOGRÁFICA\n");
     scanf("%i", &opcao2);


     switch (opcao2)
     {
         case 1:
             if (populacao1>populacao2) {
                 printf("Com relação à população, %s venceu!", nomeCidade1);
             }else if (populacao1 == populacao2){
                 printf("Com relação à população, %s e %s empataram!", nomeCidade1, nomeCidade2);
             }else{
                 printf("Com relação à população, %s venceu!", nomeCidade2);
             }
             resultado21 = (float) populacao1;
             resultado22 = (float) populacao2;
         break;
 
         case 2:
             if (area1>area2) {
                 printf("Com relação à área, %s venceu!", nomeCidade1);
             }else if (area1 == area2){
                 printf("Com relação à área, %s e %s empataram!", nomeCidade1, nomeCidade2);
             }else{
                 printf("Com relação à área, %s venceu!", nomeCidade2);
             }
             resultado21 = area1;
             resultado22 = area2;
         break;
 
         case 3:
             if (pib1>pib2) {
                 printf("Com relação ao PIB, %s venceu!", nomeCidade1);
             }else if (pib1 == pib2){
                 printf("Com relação ao PIB, %s e %s empataram!", nomeCidade1, nomeCidade2);
             }else{
                 printf("Com relação ao PIB, %s venceu!", nomeCidade2);
             }
             resultado21 = pib1;
             resultado22 = pib2;        
         break;
 
         case 4:
             if (pontosTuristicos1>pontosTuristicos2) {
                 printf("Com relação à quantidade de pontos turísticos, %s venceu!", nomeCidade1);
             }else if (pontosTuristicos1 == pontosTuristicos2){
                 printf("Com relação à quantidade de pontos turísticos, %s e %s empataram!", nomeCidade1, nomeCidade2);
             }else{
                 printf("Com relação à quantidade de pontos turísticos, %s venceu!", nomeCidade2);
             }
             resultado21 = (float) pontosTuristicos1;
             resultado22 = (float) pontosTuristicos2;    
         break;
 
 
         case 5:
             if (densidadePopulacional1<densidadePopulacional2) {
                 printf("Com relação à densidade populacional, %s venceu!", nomeCidade1);
             }else if (densidadePopulacional1 == densidadePopulacional2){
                 printf("Com relação à densidade populacional, %s e %s empataram!", nomeCidade1, nomeCidade2);
             }else{
                 printf("Com relação à população, %s venceu!", nomeCidade2);
             }
             resultado21 = 1/densidadePopulacional1;
             resultado22 = 1/densidadePopulacional2;  
             break;
     
     default:
         printf("O valor escolhido não é válido! Você terá que voltar do início");
         break;
     }


     resultadoFinal1 = resultado11+resultado21;
     resultadoFinal2 = resultado12+resultado22;

     if (resultadoFinal1>resultadoFinal2){
        printf("\n\n\nConsiderando os dois atributos, a cidade %s venceu!\n\n\n", nomeCidade1);
     }else if(resultadoFinal1=resultadoFinal2){
        printf("\n\n\nConsiderando os dois atributos, a cidade %s e a cidade %s empataram!\n\n\n", nomeCidade1,nomeCidade2);
     }else{
        printf("\n\n\nConsiderando os dois atributos, a cidade %s venceu!\n\n\n", nomeCidade2);
     }
 




    


    return 0;
}
