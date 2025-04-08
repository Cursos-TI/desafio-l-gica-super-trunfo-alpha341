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
    unsigned long int populacao1; /* Representa a quantidade de habitantes da cidade - Carta 1*/
    float area1; /* Representa a área da cidade em km2 - Carta 1*/
    float pib1; /* Representa o PIB da cidade -Carta 1*/
    int pontosTuristicos1; /* Representa o número de pontos turísticos na cidade - Carta 1*/


    char codigoEstado2; /* A ser preenchida com as letras de A a H, sendo que cada uma represents 
                        um estado - Carta 2*/
    char codigoCarta2[5]; /* Representa o código individual dado à carta, sempre começando pela
                            letra que representa o estado. Ex.: A01, B03, C05, etc - Carta 2*/
    char nomeCidade2[30]; /* A ser preenchida com o nome da cidade - Carta 2*/
    unsigned long int populacao2; /* Representa a quantidade de habitantes da cidade - Carta 2*/
    float area2; /* Representa a área da cidade em km2 - Carta 2*/
    float pib2; /* Representa o PIB da cidade - Carta 2*/
    int pontosTuristicos2; /* Representa o número de pontos turísticos na cidade - Carta 2*/
    //Variáveis para comportar densidade populacional e PIB per capita 
    float densidadePopulacional1;
    float pibCapita1;
    float densidadePopulacional2;
    float pibCapita2;

    int opcao;

    
    /* Solicitações de entrada para os usuários - carta 1. 
    Após cada solicitação, o programa guarda o valor fornecido, pelo usuário, na variável
    correspondente */

    printf("Insira o código do estado para carta 1 (uma letra entre A e H que não se repita):");
    scanf("%c", &codigoEstado1);
    getchar();
    printf("Insira o código da carta para carta 1 (iniciado com a letra que representa o estado e depois um número):");
    fgets(codigoCarta1, 5, stdin);
    codigoCarta1[strcspn(codigoCarta1, "\n")] = 0;
    printf("Insira o nome da cidade para carta 1: ");    
    fgets(nomeCidade1, 30, stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;
    printf("Insira a quantidade de habitantes da cidade para carta 1:");
    scanf("%lu", &populacao1);
    printf("Insira a área da cidade para carta 1(em km2):");
    scanf("%f", &area1);
    printf("Insira o PIB da ciade para carta 1 (em reais):");
    scanf("%f", &pib1);
    printf("Insira a quantidade de pontos turísticos da cidade para carta 1:");
    scanf("%i", &pontosTuristicos1);

    //Cálculo de densidade populacional e PIB per capita
    densidadePopulacional1 = (float) populacao1/area1;
    pibCapita1 = (float) pib1/populacao1;


    /* Solicitações de entrada para os usuários - carta 2. 
    Após cada solicitação, o programa guarda o valor fornecido, pelo usuário, na variável
    correspondente */

    getchar();
    printf("\n\nInsira o código do estado para carta 2 (uma letra entre A e H que não se repita):");
    scanf("%c", &codigoEstado2);
    getchar();
    printf("Insira o código da carta para carta 2 (iniciado com a letra que representa o estado e depois um número):");
    fgets(codigoCarta2, 5, stdin);
    codigoCarta2[strcspn(codigoCarta2, "\n")] = 0;
    printf("Insira o nome da cidade para carta 2: ");    
    fgets(nomeCidade2, 30, stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;
    printf("Insira a quantidade de habitantes da cidade para carta 2:");
    scanf("%lu", &populacao2);
    printf("Insira a área da cidade para carta 2(em km2):");
    scanf("%f", &area2);
    printf("Insira o PIB da ciade para carta 2 (em reais):");
    scanf("%f", &pib2);
    printf("Insira a quantidade de pontos turísticos da cidade para carta 2:");
    scanf("%i", &pontosTuristicos2);
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
    printf("\n\nVAMOS VER QUEM VENCE? O QUE VAMOS COMPARAR?\n");
    printf("1 - POPULAÇÃO\n");
    printf("2 - ÁREA\n");
    printf("3 - PIB\n");
    printf("4 - QUANTIDADE DE PONTOS TURÍSTICOS\n");
    printf("5 - DENSIDADE DEMOGRÁFICA\n");
    scanf("%i", &opcao);

    switch (opcao)
    {
    case 1:
        printf("\n\nVamos comparar a população.\n");
        printf("%s - %lu habitantes\n",nomeCidade1,populacao1);
        printf("%s - %lu habitantes\n",nomeCidade2,populacao2);
            if(populacao1>populacao2){
                printf("A cidade %s venceu!\n\n\n", nomeCidade1);
            }
            else if (populacao1<populacao2){
                printf("A cidade %s venceu!\n\n\n", nomeCidade2);
            }
            else{
                printf("Empatou!\n\n\n");
            }      
        break;

        case 2:
        printf("\n\nVamos comparar a área.\n");
        printf("%s - %.2f km2\n",nomeCidade1,area1);
        printf("%s - %.2f km2\n",nomeCidade2,area2);
            if(area1>area2){
                printf("A cidade %s venceu!\n\n\n", nomeCidade1);
            }
            else if (area1<area2){
                printf("A cidade %s venceu!\n\n\n", nomeCidade2);
            }
            else{
                printf("Empatou!\n\n\n");
            }      
        break;

        case 3:
        printf("\n\nVamos comparar o PIB.\n");
        printf("%s - %.2f reais\n",nomeCidade1,pib1);
        printf("%s - %.2f reais\n",nomeCidade2,pib2);
            if(pib1>pib2){
                printf("A cidade %s venceu!\n\n\n", nomeCidade1);
            }
            else if (pib1<pib2){
                printf("A cidade %s venceu!\n\n\n", nomeCidade2);
            }
            else{
                printf("Empatou!\n\n\n");
            }      
        break;

        case 4:
        printf("\n\nVamos comparar a quantidade de pontos turísticos.\n");
        printf("%s - %i pontos\n",nomeCidade1,pontosTuristicos1);
        printf("%s - %i pontos\n",nomeCidade2,pontosTuristicos2);
            if(pontosTuristicos1>pontosTuristicos2){
                printf("A cidade %s venceu!\n\n\n", nomeCidade1);
            }
            else if (pontosTuristicos1<pontosTuristicos2){
                printf("A cidade %s venceu!\n\n\n", nomeCidade2);
            }
            else{
                printf("Empatou!\n\n\n");
            }      
        break;


        case 5:
        printf("\n\nVamos comparar a densidade demográfica.\n");
        printf("%s - %.2f hab/km2\n",nomeCidade1,densidadePopulacional1);
        printf("%s - %.2f hab/km2\n",nomeCidade2,densidadePopulacional2);
            if(densidadePopulacional1>densidadePopulacional2){
                printf("A cidade %s venceu!\n\n\n", nomeCidade1);
            }
            else if (densidadePopulacional1<densidadePopulacional2){
                printf("A cidade %s venceu!\n\n\n", nomeCidade2);
            }
            else{
                printf("Empatou!\n\n\n");
            }      
        break;
    
    default:
        printf("O valor escolhido não é válido!");
        break;
    }

    


    return 0;
}
