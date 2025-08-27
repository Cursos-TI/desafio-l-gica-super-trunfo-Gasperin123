#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de comparação de cartas de cidades. 
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Definição das variáveis para armazenar as propriedades das cidades
    // Você pode utilizar o código do primeiro desafio

    
    // Cadastro das Cartas:
    // Implemente a lógica para solicitar ao usuário que insira os dados das cidades
    // utilizando a função scanf para capturar as entradas.
    // utilize o código do primeiro desafio

    // Exemplo:
    // printf("Digite o código da cidade: ");
    // scanf("%s", codigo);
    // 
    // (Repita para cada propriedade)

    // Comparação de Cartas:
    // Desenvolva a lógica de comparação entre duas cartas.
    // Utilize estruturas de decisão como if, if-else para comparar atributos como população, área, PIB, etc.

    // Exemplo:
    // if (populacaoA > populacaoB) {
    //     printf("Cidade 1 tem maior população.\n");
    // } else {
    //     printf("Cidade 2 tem maior população.\n");
    // }

    // Exibição dos Resultados:
    // Após realizar as comparações, exiba os resultados para o usuário.
    // Certifique-se de que o sistema mostre claramente qual carta venceu e com base em qual atributo.

    // Exemplo:
    // printf("A cidade vencedora é: %s\n", cidadeVencedora);

    char estado1, estado2;
    char cod_carta1[4], cod_carta2[4];
    char cidade1[25], cidade2[25];
    int pop1, pop2;
    float area1, area2;
    float PIB1, PIB2;
    int num_pt_tur1, num_pt_tur2;
    float densidade1, densidade2;
    float PIB_PC1, PIB_PC2;
    float SuperPoder1, SuperPoder2;

    printf("Insira os dados da primeira carta: \n");
    printf("\nEstado: ");
    scanf(" %c", &estado1);
    printf("\nCodigo da carta: ");
    scanf("%s", cod_carta1);
    printf ("\nCidade: ");
    scanf("%s", cidade1);
    printf("\npopulacao: ");
    scanf("%d", &pop1);
    printf("\nArea do municipio: ");
    scanf("%f", &area1);
    printf ("\nPIB do municipio: ");
    scanf("%f", &PIB1);
    printf("\nNumero de pontos turisticos do municipio: ");
    scanf("%d", &num_pt_tur1);
    densidade1 = pop1/area1;
    PIB_PC1= PIB1/pop1;
    SuperPoder1= pop1+area1+PIB1+num_pt_tur1+(1/densidade1)+PIB_PC1;

    printf("\n\nInsira os dados da segundaa carta: \n");
    printf("\nEstado: ");
    scanf(" %c", &estado2);
    printf("\nCodigo da carta: ");
    scanf("%s", cod_carta2);
    printf ("\nCidade: ");
    scanf("%s", cidade2);
    printf("\npopulacao: ");
    scanf("%d", &pop2);
    printf("\nArea do municipio: ");
    scanf("%f", &area2);
    printf("\nPIB do municipio: ");
    scanf("%f", &PIB2);
    printf("\nNumero de pontos turísticos do município: ");
    scanf("%d", &num_pt_tur2);
    densidade2 = pop2/area2;
    PIB_PC2= PIB2/pop2;
    SuperPoder2= pop2+area2+PIB2+num_pt_tur2+(1/densidade2)+PIB_PC2;

    printf("\n\nCarta 1:\nEstado: %c\nCodigo: %s\nNome da cidade: %s\nPopulacao: %d\nArea: %f KM2\nPIB: %f bilhoes de reais\nNumero de pontos turisticos: %d\nDensidade populacional: %f hab/KM2\nPIB per capita:%f reais\n\n", estado1, cod_carta1, cidade1, pop1, area1, PIB1, num_pt_tur1, densidade1, PIB_PC1);
    
    printf("\n\nCarta 2:\nEstado: %c\nCodigo: %s\nNome da cidade: %s\nPopulacao: %d\nArea: %f KM2\nPIB: %f bilhoes de reais\nNumero de pontos turisticos: %d\nDensidade populacional: %f hab/KM2\nPIB per capita:%f reais\n\n", estado2, cod_carta2, cidade2, pop2, area2, PIB2, num_pt_tur2, densidade2, PIB_PC2);
    
    printf("\n\nCOMPARACAO DE CARTAS ");

    if(pop1>pop2)
    {
        printf("\nComparacao de cartas (Atributo: Populacao):");
        printf("\nCarta 1 - %s: %d", cidade1, pop1);
        printf("\nCarta 2 - %s: %d", cidade2, pop2);
        printf("\nCarta1 %s venceu\n", cidade1);
    }else
    {
        printf("\nComparacao de cartas (Atributo: Populacao):");
        printf("\nCarta 1 - %s: %d", cidade1, pop1);
        printf("\nCarta 2 - %s: %d", cidade2, pop2);
        printf("\nCarta 1 %s venceu\n", cidade2);        
    }
    
    if(area1>area2)
    {
        printf("\nComparacao de cartas (Atributo: Area):");
        printf("\nCarta 1 - %s: %f", cidade1, area1);
        printf("\nCarta 2 - %s: %f", cidade2, area2);
        printf("\nCarta1 %s venceu\n", cidade1);
    }else
    {
        printf("\nComparacao de cartas (Atributo: Area):");
        printf("\nCarta 1 - %s: %f", cidade1, area1);
        printf("\nCarta 2 - %s: %f", cidade2, area2);
        printf("\nCarta 1 %s venceu\n", cidade2);        
    }

    if(PIB1>PIB2)
    {
        printf("\nComparacao de cartas (Atributo: PIB):");
        printf("\nCarta 1 - %s: %f", cidade1, PIB1);
        printf("\nCarta 2 - %s: %f", cidade2, PIB2);
        printf("\nCarta1 %s venceu\n", cidade1);
    }else
    {
        printf("\nComparacao de cartas (Atributo: PIB):");
        printf("\nCarta 1 - %s: %f", cidade1, PIB1);
        printf("\nCarta 2 - %s: %f", cidade2, PIB2);
        printf("\nCarta 1 %s venceu\n", cidade2);        
    }

    if(num_pt_tur1>num_pt_tur2)
    {
        printf("\nComparacao de cartas (Atributo: Numero de pontos turisticos):");
        printf("\nCarta 1 - %s: %d", cidade1, num_pt_tur1);
        printf("\nCarta 2 - %s: %d", cidade2, num_pt_tur2);
        printf("\nCarta1 %s venceu\n", cidade1);
    }else
    {
        printf("\nComparacao de cartas (Atributo: Numero de pontos turisticos):");
        printf("\nCarta 1 - %s: %d", cidade1, num_pt_tur1);
        printf("\nCarta 2 - %s: %d", cidade2, num_pt_tur2);
        printf("\nCarta 1 %s venceu\n", cidade2);        
    }

    if(densidade1<densidade2)
    {
        printf("\nComparacao de cartas (Atributo: Densidade):");
        printf("\nCarta 1 - %s: %f", cidade1, densidade1);
        printf("\nCarta 2 - %s: %f", cidade2, densidade2);
        printf("\nCarta1 %s venceu\n", cidade1);
    }else
    {
        printf("\nComparacao de cartas (Atributo: Densidade):");
        printf("\nCarta 1 - %s: %f", cidade1, densidade1);
        printf("\nCarta 2 - %s: %f", cidade2, densidade2);
        printf("\nCarta 1 %s venceu\n", cidade2);        
    }

    if(PIB_PC1>PIB_PC2)
    {
        printf("\nComparacao de cartas (Atributo: PIB per capita):");
        printf("\nCarta 1 - %s: %f", cidade1, PIB_PC1);
        printf("\nCarta 2 - %s: %f", cidade2, PIB_PC2);
        printf("\nCarta1 %s venceu\n", cidade1);
    }else
    {
        printf("\nComparacao de cartas (Atributo: PIB per capita):");
        printf("\nCarta 1 - %s: %f", cidade1, PIB_PC1);
        printf("\nCarta 2 - %s: %f", cidade2, PIB_PC2);
        printf("\nCarta 1 %s venceu\n", cidade2);        
    }

    if(SuperPoder1>SuperPoder2)
    {
        printf("\nComparacao de cartas (Atributo: Super poder):");
        printf("\nCarta 1 - %s: %f", cidade1, SuperPoder1);
        printf("\nCarta 2 - %s: %f", cidade2, SuperPoder2);
        printf("\nCarta1 %s venceu\n", cidade1);
    }else
    {
        printf("\nComparacao de cartas (Atributo: Super poder):");
        printf("\nCarta 1 - %s: %f", cidade1, SuperPoder1);
        printf("\nCarta 2 - %s: %f", cidade2, SuperPoder2);
        printf("\nCarta 1 %s venceu\n", cidade2);        
    }
    
    return 0;
}
