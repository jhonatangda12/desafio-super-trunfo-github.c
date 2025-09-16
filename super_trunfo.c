#include <stdio.h>//inclui a biblioteca padrão de entrada e saída
int main() //int main() indica que a função principal retorna um valor inteiro. () indica que a função não recebe argumentos.
{
    char estado1, estado2, codigo1[3], codigo2[3],cidade1[30], cidade2[30];//As palavras porior ao char separada por vígula são as variáveis. Char para armazenar caracteres e strings.[] indica a quantidade de caracteres que a string pode ter
    int populacao1, populacao2, pontosturisticos1, pontosturisticos2;// int para armazenar números inteiros
    float are1, are2, pib1, pib2;// float para armazenar números de ponto flutuante (números com casas decimais)

    // Informações da carta 1
    printf("Insira abaixo as informações da carta 1!\n");//printf para imprimir na tela

    printf("\n");// \n para pular uma linha
    
    printf("O estado (uma letra de A a H): ");
    scanf(" %c", &estado1);//scanf para ler a entrada do usuário. %c diz que i valor lido é um caractere. &estado1 é o endereço da variável onde o valor será armazenado.

    printf("O código da carta (a letra do estado seguida de um número de 01 a 04 (ex: A01, B03)): ");
    scanf(" %s", &codigo1);//Podemos notar que ha um espaço antes do %s para garantir que qualquer caractere de nova linha ou espaço em branco seja ignorado.

    printf("O nome da cidade: ");
    scanf("%s", &cidade1);

    printf("O número de habitantes da cidade: ");
    scanf("%d", &populacao1);

    printf("A área da cidade em quilômetros quadrados: ");
    scanf("%f", &are1);

    printf("O Produto Interno Bruto da cidade: ");
    scanf("%f", &pib1);

    printf("A quantidade de pontos turísticos na cidade: ");
    scanf("%d", &pontosturisticos1);
    printf("\n");
    
    // Informações da carta 2
        printf("Insira abaixo as informações da carta 2!\n");

    printf("\n");
    
    printf("O estado (uma letra de A a H): ");
    scanf(" %c", &estado2);

    printf("O código da carta (a letra do estado seguida de um número de 01 a 04 (ex: A01, B03)): ");
    scanf("%s", &codigo2);

    printf("O nome da cidade: ");
    scanf("%s", &cidade2);

    printf("O número de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("A área da cidade em quilômetros quadrados: ");
    scanf("%f", &are2);

    printf("O Produto Interno Bruto da cidade: ");
    scanf("%f", &pib2);

    printf("A quantidade de pontos turísticos na cidade: ");
    scanf("%d", &pontosturisticos2);
    printf("\n");

    
    // Imprimir informações da carta 1. A qui é onde as informações são exibidas na tela.
    printf("Carta 1:\n");
    printf("Estado: %c\n,", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f km²\n", are1);
    printf("PIB: %f\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("\n");
    
    // imprimir informações da carta 2. Aqui é onde as informações são exibidas na tela.
    printf("Carta 2:\n");
    printf("Estado: %c\n,", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n", are2);
    printf("PIB: %f\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("\n");
    
    return 0;//retorna 0 para indicar que o programa terminou com sucesso.
}   