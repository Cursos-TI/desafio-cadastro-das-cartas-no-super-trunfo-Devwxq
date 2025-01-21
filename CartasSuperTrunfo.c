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
    int numero = 1;
    char nome[20] = "Brasil";
    char cidade[20] = "Rio de Janeiro";
    int populacao = 200000000;
    double area = 875.63;
    double pib = 53078.23;
    int pontos = 2;

    printf("## Cadastro de cartas SuperTrunfo ##\n");
    
    //Coleta de dados para cadastro de uma nova carta.
    printf("Insira uma letra para o código da nova carta\n");
    scanf("%c", &letra);

    printf("Insira um número para o código da nova carta\n");
    scanf(" %d", &numero);
    printf("Código cadastrado com sucesso!\n");
    
    printf("Insira o nome do país\n");
    scanf(" %s", nome);
    printf("País cadastrado com sucesso!\n"); 

    printf("Insira o nome da Cidade\n");
    scanf(" %s", cidade);
    printf("Cidade cadastrada com sucesso!\n");       

    printf("Insira o número de população desta cidade\n");
    scanf("%d", &populacao);
    printf("População cadastrada com sucesso!\n");

    printf("Insira a extensão territorial deste país\n");
    scanf("%lf", &area);
    printf("Extensão territorial cadastrada com sucesso!\n");

    printf("Insira o PIB da cidade\n");
    scanf("%lf", &pib);
    printf("PIB cadastrado com sucesso!\n");

    printf("Insira a quantidade de pontos turísticos desta cidade\n");
    scanf("%d", &pontos);
    printf("Todos os seus dados foram cadastrados\n");
    
    printf("#########################################\n");
    printf("#########################################\n");

    //Apresentação dos dados da nova carta cadastrada.
    printf("\n## Nova carta cadastrada! ##\n");
    printf("Código da carta: %c%d\n", letra, numero);
    printf("País: %s\n", nome);
    printf("Cidade: %s\n", cidade);
    printf("População: %d\n", populacao);
    printf("Extensão territorial: %.2lf km²\n", area);
    printf("PIB: R$%.2lf\n", pib);
    printf("Pontos turísticos: %d\n", pontos);

    return 0;
}
