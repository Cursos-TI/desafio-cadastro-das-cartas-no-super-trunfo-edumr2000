#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

#include <stdio.h>

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    int codigo;
    char nome[20];  // Usando o nome como string com até 19 caracteres + '\0' para o terminador de string
    int populacao;
    float area;
    float pib;
    int pontos_t;
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf("Insira o código da cidade: ");
    scanf("%d", &codigo);
    
    // Leitura do nome da cidade (com espaços)
    printf("Insira o nome da cidade: ");
    scanf(" %[^\n]", nome);  // O ' %[^\n]' permite ler o nome com espaços até pressionar Enter
    
    printf("Insira a população da cidade: ");
    scanf("%d", &populacao);
    
    printf("Insira a área da cidade: ");
    scanf("%f", &area);
    
    printf("Insira o PIB da cidade: ");
    scanf("%f", &pib);
    
    printf("Insira a quantidade de pontos turísticos: ");
    scanf("%d", &pontos_t);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
    printf("\nDados da Cidade:\n");
    printf("Código: %d\n", codigo);
    printf("Nome: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f milhões\n", pib);
    printf("Pontos turísticos: %d\n", pontos_t);

    return 0;
}
