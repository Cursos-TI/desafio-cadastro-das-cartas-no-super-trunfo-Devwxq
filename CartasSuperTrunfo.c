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
    char letra = 'A';
    int numero = '1';
    char nome [30] = 'Brasil';
    char cidade [30] = 'Rio de Janeiro';
    float populacao = '12345678';
    double area = '85547893.85';
    double pib = '12345678.09';
    int pontos = '5';

    //Título
    printf("## Cadastro de cartas SuperTrunfo ##\n");
        
    printf("Insira uma letra para o código da nova carta\n");
    scanf("%c", &letra);

    printf("Insira um número para o código nova carta\n");
    scanf(" %d", &numero);
    printf("Codigo da carta: %c%d\n", letra, numero);
    
    printf("Insira o nome do país\n");
    scanf(" %s", &nome);
    printf("País cadastrado com sucesso!\n");   

    printf("Insira o nome da cidade\n");
    scanf(" %s", &cidade);
    printf("Cidade cadastrada com sucesso!\n");    

    printf("Insira o número de população desta cidade\n");
    scanf("%d", &populacao);
    printf("População cadastrada com sucesso!\n");

    printf("Insira a extenção territorial deste país (KM²)\n");
    scanf("%lf", &area);

    printf("Insira o PIB da cidade\n");
    scanf("%lf", &pib);
    printf("PIB cadastrado!\n");

    printf("Insira a quantidade de pontos turísticos desta cidade\n");
    scanf("%d", &pontos);

    printf("Código da carta: %c%d\n", letra, numero);
    printf("País: %s\n", nome);
    printf("Cidade: %s\n", cidade);
    printf("População: %f\n", populacao);
    printf("Extenção Territorial: %.2f KM²\n", area);
    printf("PIB R$: %e\n", pib);
    printf("Qnt. Pontos Turísticos: %d\n", pontos);

    return 0;
}
