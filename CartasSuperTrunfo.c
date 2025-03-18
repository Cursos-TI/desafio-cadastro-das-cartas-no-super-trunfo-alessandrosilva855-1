#include <stdio.h>

int main() {
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char nome_cidade1[15], nome_cidade2[15];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontos_turisticos1, pontos_turisticos2;
    float densidade1, densidade2;
    float capita1, capita2;
    float novopib1, novopib2; 
    
    printf("--Vamos começar pela carta 1!-- \n");
    printf("Estado: \n");
    scanf(" %c", &estado1);

    printf("Código da Carta: \n");
    scanf("%s", &codigo1);

    printf("Nome da Cidade: \n");
    scanf("%s", &nome_cidade1);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área (km²): \n");
    scanf("%f", &area1);

    printf("PIB: \n");
    scanf("%f", &PIB1);
    novopib1 = PIB1 * 1000000000;

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos_turisticos1);
    
    densidade1 = (float) populacao1 / area1;
    capita1 = (float) novopib1 / populacao1;
    
    
    printf("--Agora vamos para a Carta 2!--\n");
    printf("Estado: \n");
    scanf(" %c", &estado2);

    printf("Código da Carta: \n");
    scanf("%s", &codigo2);

    printf("Nome da Cidade: \n");
    scanf("%s", &nome_cidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área (km²): \n");
    scanf("%f", &area2);

    printf("PIB: \n");
    scanf("%f", &PIB2);
    novopib2 = PIB2 * 1000000000;

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos_turisticos2);
    printf("Cartas cadastradas com sucesso!\n");

    densidade2 = (float) populacao2 / area2;
    capita2 = (float) novopib2 / populacao2; 
    
    printf("-----CARTA 1-----\n");
    printf("Estado: %c \nCódigo da carta: %s\n",estado1, codigo1);
    printf("Nome da Cidade: %s \nPopulação: %d\n",nome_cidade1, populacao1);
    printf("Área: %.2fkm² \nPIB: %.2f bilhões de reais\n",area1, PIB1);
    printf("Número de Pontos Turísticos: %d\n",pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n",densidade1);
    printf("PIB per Capita: %.2f reais.\n",capita1);

    
    printf("---------------\n");
    printf("-----CARTA 2-----\n");
    printf("Estado: %c \nCódigo da carta: %s\n",estado2, codigo2);
    printf("Nome da Cidade: %s \nPopulação: %d\n", nome_cidade2, populacao2);
    printf("Área: %.2fkm² \nPIB: %.2f bilhões de reais\n", area2, PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n",densidade2);
    printf("PIB per Capita: %.2f reais.\n",capita2);
    printf("---------------\n");
    return 0;
    


}
