#include <stdio.h>

int main() {
  
    char estado[50], cidade[50];
    int codigoCarta, populacao, pontosTuristicos;
    float area, pib;


    printf("Digite o nome do estado: ");
    fgets(estado, sizeof(estado), stdin); 
    estado[strcspn(estado, "\n")] = '\0'; 

    printf("Digite o código da carta do estado: ");
    scanf("%d", &codigoCarta);

    printf("Digite o nome da cidade: ");
    getchar(); 
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = '\0'; 

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade em milhões: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);


    printf("\nDados do Estado e Cidade:\n");
    printf("Estado: %s\n", estado);
    printf("Código da Carta: %d\n", codigoCarta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f milhões\n", pib);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos);
    

    char estado[50], cidade[50];
    int codigoCarta, populacao, pontosTuristicos;
    float area, pib, idh, densidadePopulacional;

    
    printf("Digite o nome do estado: ");
    fgets(estado, sizeof(estado), stdin); 
    estado[strcspn(estado, "\n")] = '\0'; 

    printf("Digite o código da carta do estado: ");
    scanf("%d", &codigoCarta);

    printf("Digite o nome da cidade: ");
    getchar(); 
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = '\0'; 

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    printf("Digite a área da cidade em km²: ");
    scanf("%f", &area);

    printf("Digite o PIB da cidade em milhões: ");
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos);

    densidadePopulacional = populacao / area;
   
    idh = pib / (populacao * 1000);

    printf("\nDados do Estado e Cidade:\n");
    printf("Estado: %s\n", estado);
    printf("Código da Carta: %d\n", codigoCarta);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f milhões\n", pib);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos);
    printf("Densidade Populacional: %.2f habitantes por km²\n", densidadePopulacional);
    printf("Índice de Desenvolvimento Humano (IDH) simplificado: %.4f\n", idh);
    printf("Novo commit\n");
    

    return 0;


}


