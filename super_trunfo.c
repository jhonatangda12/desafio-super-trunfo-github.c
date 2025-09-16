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

    // Cálculo da densidade populacional e PIB per capita para a carta 1
    float densidadePopulacional1 = populacao1 / are1; // Densidade populacional = população / área
    float PIB1 = pib1 / populacao1; // PIB per capita = PIB / população

    // Cálculo da densidade populacional e PIB per capita para a carta 2
    float densidadePopulacional2 = populacao2 / are2; // Densidade populacional = população / área
    float PIB2 = pib2 / populacao2; // PIB per capita = PIB / populaçãoidade populacional = população / área
 
    // Imprimir informações da carta 1. A qui é onde as informações são exibidas na tela.
    printf("Carta 1:\n");
    printf("Estado: %c\n,", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f km²\n", are1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f rais\n", PIB1);
    printf("\n");
  
    // imprimir informações da carta 2. Aqui é onde as informações são exibidas na tela.
    printf("Carta 2:\n");
    printf("Estado: %c\n,", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n", are2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f rais\n", PIB2);
    printf("\n");

    printf("Comparação entre as cartas com base na densidade populacional:\n");
    printf("\n");
    printf("Carta 1 - %c: %2.f hab/km²\n",estado1 , densidadePopulacional1);
    printf("Carta 2 - %c: %2.f hab/km²\n",estado2 , densidadePopulacional2);

    //Estrutura de decisão para determinar qual carta é a vencedora com base na densidade populacional
    //A carta vencedora é a que tiver a menor densidade populacional.
    if(densidadePopulacional1 > densidadePopulacional2){//se a densidade populacional da carta 1 for maior que a da carta 2, a carta 1 é a vencedora.
        printf("Resultado: Carta 2 (%c) com %.2f hab/km² venceu!\n",estado2 ,densidadePopulacional2);
    }
        else if (densidadePopulacional1 < densidadePopulacional2){//se a densidade populacional da carta 2 for maior que a da carta 1, a carta 2 é a vencedora.
        printf("Resultado: Carta 1 (%c) com %.2f hab/km² venceu!\n",estado1 ,densidadePopulacional1);
    }
        else {//se as densidades populacionais forem iguais, é declarado um empate.
        printf("As duas cartas empataram com densidade populacional de %.2f hab/km²\n", densidadePopulacional1);

        }

    return 0;//retorna 0 para indicar que o programa terminou com sucesso.
}   
