#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    int tabuleiro[9][9] = 
    {
    {1,0,0,0,0,0,0,0,0,0,0},
    {2,0,0,3,0,0,0,0,0,0,0},
    {3,0,0,3,0,0,0,0,0,0,0},
    {4,0,0,3,0,0,0,0,0,0,0},
    {5,0,0,0,0,0,0,0,0,0,0},
    {6,0,0,0,0,0,0,0,0,0,0},
    {7,0,0,0,0,0,0,0,0,0,0},
    {8,0,0,3,3,3,0,0,0,0,0},
    {9,0,0,0,0,0,0,0,0,0,0},
    };
    
    char letras;
    
    printf("Tabuleiro de Batalha Naval!\n");
    printf("   ");
    for (int lin = 0; lin <= 0; lin++) // Este FOR serve para a qauntidades de linhas das letras
    {
        letras = 'A';
       for (int h = 0; h <= 7; h++)   // quantidades de letras
       {
        printf("%c ", letras);
        letras++;
       }
       
    }
    printf("\n");
    
    for (int j = 0; j <= 8; j++) // Quantidades de linhas 
    {
    for (int i = 0; i <= 8; i++) // Quantidades de colunas
    {
        printf(" %d", tabuleiro[j][i]);
    }
    printf("\n");
    }
    
    printf("Nomeclatura das coordenadas:\n");
    printf("Coordenadas que começam com um numero: Horizontal\n");
    printf("Coordenadas que começam com um caractere: Vertical\n");
    printf("Seu návio se encontra na coordenada: %dCDE \n", tabuleiro[7][0]);
    printf("O návio Inimigo se encontra na coordenada: C234 \n");
    

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
