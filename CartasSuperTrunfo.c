#include <stdio.h>

int main() {
    //VARIAVEIS DAS CARTAS
    char estado1, estado2;
    char codigo1[5], codigo2[5];
    char nome_cidade1[15], nome_cidade2[15];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontos_turisticos1, pontos_turisticos2;

    //PEGANDO OS DADOS DA CARTA 1

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

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos_turisticos1);
 
    //PEGANDO OS DADOS DA CARTA 2

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

    printf("Número de Pontos Turísticos: \n");
    scanf("%d", &pontos_turisticos2);
    printf("Cartas cadastradas com sucesso!\n");
 
    //MOSTRANDO AS INFORMAÇÕES DA CARTA 1

    printf("-----CARTA 1-----\n");
    printf("Estado: %c \nCódigo da carta: %s\n",estado1, codigo1);
    printf("Nome da Cidade: %s \nPopulação: %d\n",nome_cidade1, populacao1);
    printf("Área: %.2fkm² \nPIB: %.2f bilhões de reais\n",area1, PIB1);
    printf("Número de Pontos Turísticos: %d\n",pontos_turisticos1);
    printf("---------------\n");

    ////MOSTRANDO AS INFORMAÇÕES DA CARTA 2

    printf("-----CARTA 2-----\n");
    printf("Estado: %c \nCódigo da carta: %s\n",estado2, codigo2);
    printf("Nome da Cidade: %s \nPopulação: %d\n", nome_cidade2, populacao2);
    printf("Área: %.2fkm² \nPIB: %.2f bilhões de reais\n", area2, PIB2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("---------------\n");








    return 0;
}
