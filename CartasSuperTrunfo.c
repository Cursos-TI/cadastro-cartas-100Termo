#include <stdio.h>

//Cidades escolhidas foram Macapá e Curitiba
// Carta 1, Estado A (Amapá), Código A01, Cidade Macapá, População 442.933, Área 6.563 km², PIB R$ 18.47 bilhões, pontos turísticos 18.
// Carta 2, Estado B (Paraná), Código B02, Cidade Curitiba, População 1.829.225 milhões, Área 435.3 km², PIB  120 bilhões, pontos turísticos 40.

int main(){
    char estado[50], carta[4], cidade[50];
    int população, turismo;
    float área, PIB; 

    printf("Digite o Estado: ");
    scanf("%s", &estado);

    printf("Digite o Código da Carta: ");
    scanf("%s", &carta);

    printf("Digite a cidade: ");
    scanf("%s", &cidade);

    printf("Digite a população: ");
    scanf("%d", &população);
    //Por encontrar dificuldades com números decimais extensos como aqueles acima de milhão,  
    //optei por preencher os numerais sem ponto ou vírgula para conseguir imprimir o número completo.

    printf("Digite a Área(km²): ");
    scanf("%f", &área);

    printf("Digite o PIB: ");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turismo);
    
    printf("\n");
    
    printf("Carta 1: \n");
    printf("Estado: %s \n", estado);
    printf("Carta: %s \n", carta);
    printf("Cidade: %s \n", cidade);
    printf("População: %d \n", população);
    printf("Área(Km²): %.2f \n", área);
    printf("PIB: %.2f \n", PIB);
    printf("Pontos Turísticos: %d \n", turismo);

    printf("\n");
    printf("\n");

    printf("Digite o Estado: ");
    scanf("%s", &estado);

    printf("Digite o Código da Carta: ");
    scanf("%s", &carta);

    printf("Digite a cidade: ");
    scanf("%s", &cidade);

    printf("Digite a população: ");
    scanf("%d", &população);

    printf("Digite a Área(km²): ");
    scanf("%f", &área);

    printf("Digite o PIB: ");
    scanf("%f", &PIB);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &turismo);
    
    printf("\n");
    
    printf("Carta 2: \n");
    printf("Estado: %s \n", estado);
    printf("Carta: %s \n", carta);
    printf("Cidade: %s \n", cidade);
    printf("População: %d \n", população);
    printf("Área(Km²): %.2f \n", área);
    printf("PIB: %.2f \n", PIB);
    printf("Pontos Turísticos: %d \n", turismo);
    printf("\n");


    return 0;
    
}