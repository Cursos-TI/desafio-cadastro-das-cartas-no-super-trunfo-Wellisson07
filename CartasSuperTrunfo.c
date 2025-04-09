#include <stdio.h>

int main() {
    
    float populacao = 2686612;  
    float area = 313;           
    float pib = 61700000000;    

    float densidade_populacional, pib_per_capita;

    densidade_populacional = populacao / area;

    pib_per_capita = pib / populacao;

    printf("Densidade Populacional de Fortaleza: %.2f habitantes por km²\n", densidade_populacional);
    printf("PIB per Capita de Fortaleza: %.2f reais por pessoa\n", pib_per_capita);

    
    float populacao = 2923182;  
    float area = 713.43;        
    float pib = 89000000000;   

    float densidade_populacional, pib_per_capita;

    densidade_populacional = populacao / area;

    pib_per_capita = pib / populacao;

    printf("Densidade Populacional de Salvador: %.2f habitantes por km²\n", densidade_populacional);
    printf("PIB per Capita de Salvador: %.2f reais por pessoa\n", pib_per_capita);

    return 0;
}

