#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    
    // Declaração das Variávbeis
    char Estado1[20], Estado2[20];
    char Codigo1[10], Codigo2[10];
    char Cidade1[20], Cidade2[20];
    int Pop1, Pop2;
    int Pontos1, Pontos2;
    float Area1, Area2;
    float PIB1, PIB2;

    // Recebendo os Dados das Cartas
    printf("\nDigite as Informações para a Primeira Carta!\n");
    printf("Estado: \n");
    scanf("%s", &Estado1);
    printf("Código da Carta: \n");
    scanf("%s", &Codigo1);
    printf("Cidade: \n");
    scanf("%s", &Cidade1);
    printf("População: \n");
    scanf("%d", &Pop1);
    printf("Área: \n");
    scanf("%f", &Area1);
    printf("PIB: \n");
    scanf("%f", &PIB1);
    printf("Pontos Turísticos: \n");
    scanf("%d", &Pontos1);

    printf("\nDigite as Informações para a Segunda Carta!\n");
    printf("Estado: \n");
    scanf("%s", &Estado2);
    printf("Código da Carta: \n");
    scanf("%s", &Codigo2);
    printf("Cidade: \n");
    scanf("%s", &Cidade2);
    printf("População: \n");
    scanf("%d", &Pop2);
    printf("Área: \n");
    scanf("%f", &Area2);
    printf("PIB: \n");
    scanf("%f", &PIB2);
    printf("Pontos Turísticos: \n");
    scanf("%d", &Pontos2);


    //  Apresentando os Dados das Cartas
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", Estado1);
    printf("Código da Carta: %s\n", Codigo1);
    printf("Cidade: %s\n", &Cidade1);
    printf("População: %d\n", Pop1);
    printf("Área: %.2f\n", Area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos Turísticos: %d\n", Pontos1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", Estado2);
    printf("Código da Carta: %s\n", Codigo2);
    printf("Cidade: %s\n", &Cidade2);
    printf("População: %d\n", Pop2);
    printf("Área: %.2f\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turísticos: %d\n", Pontos2);

    return 0;
}
