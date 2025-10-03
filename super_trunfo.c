#include <stdio.h>//inclui a biblioteca padrão de entrada e saída


int main() //int main() indica que a função principal retorna um valor inteiro. () indica que a função não recebe argumentos.
{
    char estado1, estado2, codigo1[3], codigo2[3],cidade1[30], cidade2[30];//As palavras porior ao char separada por vígula são as variáveis. Char para armazenar caracteres e strings.[] indica a quantidade de caracteres que a string pode ter
    int ataque, populacao1, populacao2, pontosturisticos1, pontosturisticos2;// int para armazenar números inteiros
    float area1, area2, pib1, pib2;// float para armazenar números de ponto flutuante (números com casas decimais)

    // Informações da Kiribati
    printf("Insira abaixo as informações do Kiribati!\n");//printf para imprimir na tela

    printf("\n");// \n para pular uma linha
    
    printf("O estado (uma letra de A a H): ");
    scanf(" %c", &estado1);//scanf para ler a entrada do usuário. %c diz que i valor lido é um caractere. &estado1 é o endereço da variável onde o valor será armazenado.

    printf("O código da carta (a letra do estado seguida de um número de 01 a 04 (ex: A01, B03)): ");
    scanf(" %s", codigo1);//Podemos notar que ha um espaço antes do %s para garantir que qualquer caractere de nova linha ou espaço em branco seja ignorado.

    printf("O nome da cidade: ");
    scanf("%s", cidade1);

    printf("O número de habitantes da cidade: ");
    scanf("%d", &populacao1);

    printf("A área da cidade em quilômetros quadrados: ");
    scanf("%f", &area1);

    printf("O Produto Interno Bruto da cidade: ");
    scanf("%f", &pib1);

    printf("A quantidade de pontos turísticos na cidade: ");
    scanf("%d", &pontosturisticos1);
    printf("\n");
    
    // Informações da Tuvalu
        printf("Insira abaixo as informações do Tuvalu!\n");

    printf("\n");
    
    printf("O estado (uma letra de A a H): ");
    scanf(" %c", &estado2);

    printf("O código da carta (a letra do estado seguida de um número de 01 a 04 (ex: A01, B03)): ");
    scanf("%s", codigo2);

    printf("O nome da cidade: ");
    scanf("%s", cidade2);

    printf("O número de habitantes da cidade: ");
    scanf("%d", &populacao2);

    printf("A área da cidade em quilômetros quadrados: ");
    scanf("%f", &area2);

    printf("O Produto Interno Bruto da cidade: ");
    scanf("%f", &pib2);

    printf("A quantidade de pontos turísticos na cidade: ");
    scanf("%d", &pontosturisticos2);
    printf("\n");

    //Imprime os parâmetros para comparação
    printf("Parâmetros de comparação do jogo Super Trunfo: O vencedor é aquele que possuir o maior valor no atributo escolhido. Exceção: no atributo Densidade Populacional, vence a carta que apresentar o menor valor.\n\n");
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Populacional\n");
    printf("6. PIB per Capito\n\n");
    printf("Escolha um parâmetro de comparação: ");
    scanf("%d", &ataque);

    // Cálculo da densidade populacional e PIB per capita para a Kiribati
    float densidadePopulacional1 = populacao1 / area1; // Densidade populacional = população / área
    float PIB1 = pib1 / populacao1; // PIB per capita = pib1 / população1

    // Cálculo da densidade populacional e PIB per capita para a Tuvalu
    float densidadePopulacional2 = populacao2 / area2; // Densidade populacional = população / área
    float PIB2 = pib2 / populacao2; // PIB per capita = pib2 / população2
 
    // Imprimir informações do Kiribati. A qui é onde as informações são exibidas na tela.
    printf("País: Kiribati\n");
    printf("Estado: %c\n,", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %f km²\n", area1);
    printf("PIB: %f bilhões de reais\n", pib1);
    printf("Pontos turísticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
    printf("PIB per Capita: %.2f reais\n", PIB1);
    printf("\n");
  
    // imprimir informações da Tuvalu. Aqui é onde as informações são exibidas na tela.
    printf("País: Tuvalu\n");
    printf("Estado: %c\n,", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %f km²\n", area2);
    printf("PIB: %f bilhões de reais\n", pib2);
    printf("Pontos turísticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
    printf("PIB per Capita: %.2f reais\n", PIB2);
    printf("Escolha o ataque: \n\n");

    //Opção do atributo de comparação
    switch (ataque)
    {
    case 1:// Se escolher 1 vai comparar a popupação e vencer quem tiver a maior população
        if (populacao1 > populacao2)
        {
            printf("População do Kiribati: %d - ", populacao1);
            printf("População do Tuvalu: %d\n", populacao2);
            printf("Kiribati venceu!\n");
        }
        else if (populacao1 == populacao2)
        {
            printf("População do Kiribati: %d - ", populacao1);
            printf("População do Tuvalu: %d\n", populacao2);
            printf("Empate!\n");
        }
        else{
            printf("População do Kiribati: %d - ", populacao1);
            printf("População do Tuvalu: %d\n", populacao2);
            printf("Tuvalu venceu!\n");}   
        
        
        break;
        case 2:// Se ecolher 2 vai comparar a área. vence quem tiver a maior área
        if (area1 > area2)
        {
            printf("Área do Kiribati: %.2f km² - ", area1);
            printf("Área do Tuvalu: %.2f km²\n", area2);
            printf("Kiribati venceu!\n");
        }
        else if (area1 == area2)
        {
            printf("Área do Kiribati: %. km² - ", area1);
            printf("Área do Tuvalu: %.2f km²\n", area2);
            printf("Empate!\n");
        }
        else{
            printf("Área do Kiribati: %.2f km² - ", area1);
            printf("Área do Tuvalu: %.2f km²\n", area2);
            printf("Tuvalu venceu!\n");}   
        
         
        break;
        case 3:// Se ecolher 3 vai comparar a PIB. vence quem tiver a maior PIB
        if (pib1 > pib2)
        {
            printf("PIB do Kiribati: %.2f bilhões de reais - ", pib1);
            printf("PIB do Tuvalu: %.2f bilhões de reais\n", pib2);
            printf("Kiribati venceu!\n");
        }
        else if (pib1 == pib2)
        {
            printf("PIB do Kiribati: %.2f bilhões de reais - ", pib1);
            printf("PIB do Tuvalu: %.2f bilhões de reais\n", pib2);
            printf("Empate!\n");
        }
        else{
            printf("PIB do Kiribati: %.2f bilhões de reais - ", pib1);
            printf("PIB do Tuvalu: %.2f bilhões de reais\n", pib2);
            printf("Tuvalu venceu!\n");
        }   
        
        
        break;
        case 4:// Se ecolher 4 vai comparar a Pontos Turísticos. vence quem tiver a maior Pontos Turísticos
        if (pontosturisticos1 > pontosturisticos2)
        {
            printf("Pontos Turísticos do Kiribati: %d - ", pontosturisticos1);
            printf("Pontos Turísticos do Tuvalu: %d\n", pontosturisticos2);
            printf("Kiribati venceu!\n");
        }
        else if (pontosturisticos1 == pontosturisticos2)
        {
            printf("Pontos Turísticos do Kiribati: %d - ", pontosturisticos1);
            printf("Pontos Turísticos do Tuvalu: %d\n", pontosturisticos2);
            printf("Empate!\n");
        }
        else{
            printf("Pontos Turísticos do Kiribati: %d - ", pontosturisticos1);
            printf("Pontos Turísticos do Tuvalu: %d\n", pontosturisticos2);
            printf("Tuvalu venceu!\n");
        }   
        
        
        break;
        case 5:// Se ecolher 5 vai comparar a Densidade Populacional. vence quem tiver a menor Densidade Populacional
        if (densidadePopulacional1 > densidadePopulacional2)
        {
            printf("Densidade Populacional do Kiribati: %.2f hab/km² - ", densidadePopulacional1);
            printf("Densidade Populacional do Tuvalu: %.2f hab/km²\n", densidadePopulacional2);
            printf("Tuvalu venceu!\n");
        }
        else if (densidadePopulacional1 == densidadePopulacional2)
        {
            printf("Densidade Populacional do Kiribati: %.2f hab/km² - ", densidadePopulacional1);
            printf("Densidade Populacional da Tuvalu: %.2f hab/km²\n", densidadePopulacional2);
            printf("Empate!\n");
        }
        else{
            printf("Densidade Populacional do Kiribati: %.2f hab/km² - ", densidadePopulacional1);
            printf("Densidade Populacional do Tuvalu: %.2f hab/km²\n", densidadePopulacional2);
            printf("Kiribati venceu!\n");
        }   
        
        
        break;
    case 6:// Se ecolher 6 vai comparar a .PIB per Capito. vence quem tiver a maior PIB per Cápito
        if (PIB1 > PIB2)
        {
            printf("PIB per capito do Kiribati: %.2f reais - ", PIB1);
            printf("PIB per capito do Tuvalu: %.2f reais\n", PIB2);
            printf("Kiribati venceu!\n");
        }
        else if (PIB1 == PIB2)
        {
            printf("PIB per capito do Kiribati: %2.f reais - ", PIB1);
            printf("PIB per capito do Tuvalu: %2.f reais\n", PIB2);
            printf("Empate!\n");
        }
        else{
            printf("PIB per capito do Kiribati: %2.f reais - ", PIB1);
            printf("PIB per capito do Tuvalu: %2.f reais\n", PIB2);
            printf("Tuvalu venceu!\n");
        }   
        
        
        break;        
                       
    
    default:
        printf("Escolha um número de 1 a 6!");
        break;
    }

    return 0;//retorna 0 para indicar que o programa terminou com sucesso.
}   
