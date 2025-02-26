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
    unsigned long int Pop1, Pop2;
    int Pontos1, Pontos2;
    float Area1, Area2;
    float PIB1, PIB2;
    float Densidade1, Densidade2;
    float PIB_Per1, PIB_Per2;
    float SuperPoder1, SuperPoder2;
    bool resultado1, resultado2;

    // Recebendo os Dados das Cartas
    printf("\nDigite as Informações para a Primeira Carta!\n");
    printf("Estado: ");
    scanf("%s", &Estado1);
    printf("Código da Carta: ");
    scanf("%s", &Codigo1);
    printf("Cidade: ");
    scanf("%s", &Cidade1);
    printf("População: ");
    scanf("%d", &Pop1);
    printf("Área: ");
    scanf("%f", &Area1);
    printf("PIB: ");
    scanf("%f", &PIB1);
    printf("Pontos Turísticos: ");
    scanf("%d", &Pontos1);

    printf("\nDigite as Informações para a Segunda Carta!\n");
    printf("Estado: ");
    scanf("%s", &Estado2);
    printf("Código da Carta: ");
    scanf("%s", &Codigo2);
    printf("Cidade: ");
    scanf("%s", &Cidade2);
    printf("População: ");
    scanf("%d", &Pop2);
    printf("Área: ");
    scanf("%f", &Area2);
    printf("PIB: ");
    scanf("%f", &PIB2);
    printf("Pontos Turísticos: ");
    scanf("%d", &Pontos2);

    //Calculando Dados
    Densidade1 = Pop1 / Area1;
    Densidade2 = Pop2 / Area2;
    PIB_Per1 = PIB1 / Pop1;
    PIB_Per2 = PIB2 / Pop2;

    //Super Poder
    SuperPoder1 = ((float)Pop1 + Area1 + PIB1 + (float)Pontos1 + PIB_Per1 + (1/Densidade1));
    SuperPoder2 = ((float)Pop2 + Area2 + PIB2 + (float)Pontos2 + PIB_Per2 + (1/Densidade2));

    //  Apresentando os Dados das Cartas
    printf("\nCarta 1:\n");
    printf("Estado: %s\n", Estado1);
    printf("Código da Carta: %s\n", Codigo1);
    printf("Cidade: %s\n", &Cidade1);
    printf("População: %d\n", Pop1);
    printf("Área: %.2f\n", Area1);
    printf("PIB: %.2f\n", PIB1);
    printf("Pontos Turísticos: %d\n", Pontos1);
    printf("Densidade Populacional: %.4f\n", Densidade1);
    printf("PIB Per Capita: %.4f\n", PIB_Per1);

    printf("\nCarta 2:\n");
    printf("Estado: %s\n", Estado2);
    printf("Código da Carta: %s\n", Codigo2);
    printf("Cidade: %s\n", &Cidade2);
    printf("População: %d\n", Pop2);
    printf("Área: %.2f\n", Area2);
    printf("PIB: %.2f\n", PIB2);
    printf("Pontos Turísticos: %d\n", Pontos2);
    printf("Densidade Populacional: %.4f\n", Densidade2);
    printf("PIB Per Capita: %.4f\n", PIB_Per2);

    //Comparando Atributos
    printf("Comparação das Cartas\nCarta 1 (1)\nCarta 2 (0)");
    printf("População: %d Venceu!", Pop1 > Pop2);
    printf("Área: %d Venceu!", Area1 > Area2);
    printf("PIB: %d Venceu!", PIB1 > PIB2);
    printf("Pontos Turísticos: %d Venceu!", Pontos1 > Pontos2);
    printf("Densidade: %d Venceu!", Densidade11 < Densidade2);
    printf("PIB Per Capita: %d Venceu!", PIB_Per1 > PIB_Per2);
    printf("Super Poder: %d Venceu!", SuperPoder1 > SuperPoder2);

    printf("Super Poder: %.2f %.2f", SuperPoder1, SuperPoder2);

    return 0;
}

