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
    char letra;
    int numero;
    char nome [20];
    char Nome [20];
    float populacao;
    float area;
    float pib;
    int pontos;

    //Título
    printf("## Cadastro de cartas SuperTrunfo ##\n");
        
    printf("Insira um numero para a nova carta\n");
    scanf("%d", &numero);

    printf("Insira uma letra para a nova carta\n");
    scanf(" %c", &letra);
    printf("Codigo da cidade: %c%d\n", letra, numero);
    
    printf("Insira o nome do país\n");
    scanf(" %s", &nome);
    printf("Nome cadastrado com sucesso!\n");       

    printf("Insira o número de população desta cidade\n");
    scanf("%f", &populacao);
    printf("População cadastrada com sucesso!\n");

    printf("Insira a extenção territorial deste país\n");
    scanf("%f", &area);

    printf("Insira o PIB da cidade\n");
    scanf("%e", &pib);
    printf("PIB cadastrado!\n");

    printf("Insira a quantidade de pontos turísticos desta cidade\n");
    scanf("%d", &pontos);

    printf("País: %s", &nome);
    printf("Cidade: %s", &Nome);

    return 0;
}
