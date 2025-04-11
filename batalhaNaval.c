
#define LINHA 10
#define COLUNA 11
#define TAM_P 3 // Definido a quantidade de elementos para o vetor
#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios = [100%]

    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal = [100%]
    
    int Matriz[LINHA][COLUNA];
    int i, j;
    int Navio[TAM_P];
    char letras;
    int numeros[LINHA];
    //Processo Passo a Passo:
    
    // Passo 1: Declarei o Vetor
    for (i = 0; i < TAM_P; i++)
    {
        Navio[i] = 3; 
    }
    
    //Passo opcional: Numeração declarada
    for (i = 0; i < LINHA; i++)
    {
        numeros[i] = 1 + i; // Ira imprimir as casas de 1 a 10
    }
    
    // Passo 2: Declarei a Matriz como zeros
    for (i = 0; i < LINHA; i++)
    {
        for (j = 0; j < COLUNA; j++)
        {
            Matriz[i][j] = 0;
        }
        
    }
    
    // Passo 3: Inseri o Vetor na Matriz 10x10
    for (i = 0; i < TAM_P; i++)
    {
        Matriz[1][2 + i] = Navio[i]; //Aqui declara a coordenada do vetor e o modo como ele será exibido
        Matriz[i][8] = Navio[i]; // Exemplo: Aqui ele será exibido na Vertical na Linha 1 (indice 0) e coluna 9 (indice 8)
    }
    
    // Passo 3.5: Inseri o Vetor Diagonal Primária e Secundária na Matriz 10x10
    for (i = 0; i < TAM_P; i++)
    {
        Matriz[6 - i][2 + i] = Navio[i]; // Sinais diferentes resultam numa Diagonal Secundaria
        Matriz[6 + i][5 + i] = Navio[i]; // Sinais iguais resultam numa Digonal Primaria
    }
    
    // Passo opcional: Exibir o titulo, letras e numeros
    printf("Tabuleiro de Batalha Naval!\n"); 
    printf("   ");
    for (int lin = 0; lin <= 0; lin++) // Este for serve para a qauntidades de linhas para letras (Aqui será apenas uma linha)
    {
        letras = 'A';
       for (int h = 0; h <= 9; h++)   // quantidades de letras combina com o tabuleiro sendo 10 (indice 9)
       {
        printf("%c ", letras);
        letras++;
       }
       
    }
    printf("\n");
    
    for (i = 0; i < LINHA; i++)
    {
        Matriz[i][0] = numeros[i];
    }
    
    // Passo 4: Imprime a Matriz com o vetor já inserido na mesma
    for (i = 0; i < LINHA; i++)
    {
        for (j = 0; j < COLUNA; j++)
        { 
            printf(" %d", Matriz[i][j]);
            
        }
        printf("\n");
    }
    
    return 0;
    }
    
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

 