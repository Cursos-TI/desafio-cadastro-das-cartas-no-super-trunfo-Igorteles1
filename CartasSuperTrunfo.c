#include <stdio.h>
#include <locale.h>


int main() {

    setlocale (LC_ALL, "PORTUGUESE"); //Permite usar acentos nas palavras


    // Dados da Carta 1 - Sergipe (Estado 'A' como exemplo)
    char estado1 = 'S';
    char codigocarta1[4] = "A01";
    char cidade1[50] = "Aracaju";
    int populacao1 = 652000;
    float areaemkm1 = 181.0;
    float pib1 = 10.5; // PIB em bilhoes de reais (exemplo)
    int pontos_turisticos1 = 15;

    // Dados da Carta 2 - Bahia (Estado 'B' como exemplo)
    char estado2 = 'B'; 
    char codigocarta2[4] = "B02";
    char cidade2[50] = "Salvador";
    int populacao2 = 2886698;
    float areaemkm2 = 693.0;
    float pib2 = 50.7; // PIB em bilhoes de reais (exemplo)
    int pontos_turisticos2 = 35;
    
    // --- Novos cálculos e variáveis ---
    // Variáveis para guardar os novos resultados da Carta 1
    float densidade_populacional1;
    float pib_per_capita1;

    // Variáveis para guardar os novos resultados da Carta 2
    float densidade_populacional2;
    float pib_per_capita2;

    // Fazendo os cálculos para a Carta 1
    densidade_populacional1 = (float)populacao1 / areaemkm1;
    // Multiplicamos o PIB por 1 bilhão (1.000.000.000) e depois dividimos pela população
    pib_per_capita1 = (pib1 * 1000000000) / populacao1;

    // Fazendo os cálculos para a Carta 2
    densidade_populacional2 = (float)populacao2 / areaemkm2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2;
    // --- Fim dos cálculos ---

    // Exibicao das cartas
    printf("--------------------------------\n");
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigocarta1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f km2\n", areaemkm1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos1);
    // --- Exibindo os novos resultados da Carta 1 ---
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional1);
    printf("PIB per Capita: %.2f reais\n", pib_per_capita1);
    // --- Fim da exibição adicional ---

    printf("\n--------------------------------\n");
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigocarta2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f km2\n", areaemkm2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de pontos turisticos: %d\n", pontos_turisticos2);
    // --- Exibindo os novos resultados da Carta 2 ---
    printf("Densidade Populacional: %.2f hab/km2\n", densidade_populacional2);
    printf("PIB per Capita: %.2f reais\n\n", pib_per_capita2);
    // --- Fim da exibição adicional ---

    // --- LÓGICA DE COMPARAÇÃO DO JOGO ---
    // Esta é a parte que vamos ajustar para ficar perfeita!

    printf("================================\n");
    printf("Comparacao de cartas (Atributo: Populacao):\n");
    printf("================================\n\n");

    // Passo 1: Mostra os valores que estão a ser comparados, como no exemplo.
    // Usamos as variáveis para que a informação seja sempre correta.
    printf("Carta 1 - %s: %d habitantes\n", cidade1, populacao1);
    printf("Carta 2 - %s: %d habitantes\n", cidade2, populacao2);
    printf("\n"); // Adiciona uma linha em branco para organizar

    // Passo 2: Usa o if/else para declarar o vencedor com base nesses valores.
    if (populacao1 > populacao2)
    {
        // Ao invés de escrever "Sergipe", usamos a variável 'cidade1'.
        // Fica mais profissional e funciona se mudares os dados da carta.
        printf("Resultado: A carta de %s foi a vencedora!\n", cidade1);
    }
    else
    {
        // O mesmo aqui, usamos a variável 'cidade2'.
        printf("Resultado: A carta de %s foi a vencedora!\n", cidade2);
    }
    
    return 0;
}
