#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char nome_cidade1[15], nome_cidade2[15];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade1, densidade2;
    float capita1, capita2;
    float novopib1, novopib2; 
    float SuperPoder1, SuperPoder2;
    float DensidadeInvertida1, DensidadeInvertida2;
    char resultpopu, resultarea, resultpib, resulturis, 
    resultdensidade, resultpibcapita, resultsuperpoder;

    printf("--Vamos começar pela carta 1!-- \n");
    printf("Estado: \n");
    scanf(" %c", &estado1);

    printf("Código da Carta: \n");
    scanf("%s", &codigo1);

    printf("Nome da Cidade: \n");
    scanf("%s", &nome_cidade1);

    printf("População: \n");
    scanf("%lu", &populacao1);

    printf("Área (km²): \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &PIB1);
    

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos_turisticos1);
    
    densidade1 = (float) populacao1 / area1;
    capita1 = (float) PIB1 / populacao1;
    DensidadeInvertida1 = 1 / densidade1;

    //somando o super poder da carta 1
    SuperPoder1 = populacao1 + (int) area1 + (long double) PIB1 +
    pontos_turisticos1 + (int) capita1 + DensidadeInvertida1;
    
    
    printf("--Agora vamos para a Carta 2!--\n");
    printf("Estado: \n");
    scanf(" %c", &estado2);

    printf("Código da Carta: \n");
    scanf("%s", &codigo2);

    printf("Nome da Cidade: \n");
    scanf("%s", &nome_cidade2);

    printf("População: \n");
    scanf("%lu", &populacao2);

    printf("Área (km²): \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &PIB2);
    

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos_turisticos2);
    printf("Cartas cadastradas com sucesso!\n");

    densidade2 = (float) populacao2 / area2;
    capita2 = (float) PIB2 / populacao2;
    DensidadeInvertida2 = 1 / densidade2;

    //somando o super poder da carta 2
    SuperPoder2 = populacao2 + (int) area2 + (long double) PIB2 +
    pontos_turisticos2 + (int) capita2 + DensidadeInvertida2;

    //informações da carta 1
    printf("-----CARTA 1-----\n");
    printf("Estado: %c \nCódigo da carta: %s\n",estado1, codigo1);
    printf("Nome da Cidade: %s \nPopulação: %lu\n",nome_cidade1, populacao1);
    printf("Área: %.2fkm² \nPIB: %.2f bilhões de reais\n",area1, PIB1);
    printf("Número de Pontos Turísticos: %d\n",pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n",densidade1);
    printf("PIB per Capita: %.2f reais.\n",capita1);
    printf("Densidade invertida: %f\n", DensidadeInvertida1);
    printf("Super poder da carta 1: %2.f\n", SuperPoder1);

    //informações da carta 2
    printf("---------------\n");
    printf("-----CARTA 2-----\n");
    printf("Estado: %c \nCódigo da carta: %s\n",estado2, codigo2);
    printf("Nome da Cidade: %s \nPopulação: %lu\n", nome_cidade2, populacao2);
    printf("Área: %.2fkm² \nPIB: %.2f bilhões de reais\n", area2, PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n",densidade2);
    printf("PIB per Capita: %.2f reais.\n",capita2);
    printf("Densidade invertida: %f\n", DensidadeInvertida2);
    printf("Super poder da carta 2: %2.f\n", SuperPoder2);
    printf("---------------\n");

    //comparando as cartas
    resultpopu = populacao1 > populacao2;
    resultarea = area1 > area2;
    resultpib = PIB1 > PIB2;
    resulturis = pontos_turisticos1 > pontos_turisticos2;
    resultdensidade = DensidadeInvertida1 < DensidadeInvertida2;
    resultpibcapita = capita1 > capita2;
    resultsuperpoder = SuperPoder1 > SuperPoder2;

    //mostrando o resultado da comparação!
    printf("População: Carta %d venceu (%d)\n",resultpopu, resultpopu);
    printf("Área: Carta %d venceu (%d)\n", resultarea, resultarea);
    printf("PIB: Carta %d venceu (%d)\n", resultpib, resultpib);
    printf("Pontos Turísticos: Carta %d venceu (%d)\n", resulturis, resulturis);
    printf("Densidade Populacional: Carta %d venceu (%d)\n", resultdensidade, resultdensidade);
    printf("PIB per Capita: Carta %d venceu (%d)\n", resultpibcapita, resultpibcapita);
    printf("Super Poder: Carta %d venceu (%d)\n",resultsuperpoder, resultsuperpoder);


    return 0;

    


}
