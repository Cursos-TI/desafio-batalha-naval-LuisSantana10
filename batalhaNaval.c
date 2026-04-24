#include <stdio.h>

// Desafio Batalha Naval - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de Batalha Naval.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.

    int tabuleiro[10][10] = {0};

    //Y: reta vertical, X: reta horizontal

    //Primeiro navio
    int navio1_y = 5, navio1_x = 2;
    int navio1_y2 = 6, navio1_x2 = 0;

    //Segundo navio
    int navio2_y = 1, navio2_x = 6;
    int navio2_y2 = 0, navio2_x2 = 7;

    //Terceiro navio
    int navio3_y = 2, navio3_x = 2;

    //Quarto navio
    int navio4_y = 6, navio4_x = 7;
    int navio4_y2 = 7, navio4_x2 = 6;
    int navio4_y3 = 8, navio4_x3 = 5;

    //Posicionamento dos navios
    //Primeiro navio
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[navio1_y + i][navio1_x] = 1;
    }

    for (int i = 0; i < 5; i++)
    {
        tabuleiro[navio1_y2][navio1_x2 + i] = 1;
    }
    

    //Segundo navio
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[navio2_y][navio2_x + i] = 2;
        tabuleiro[navio2_y2 + i][navio2_x2] = 2;
    }

    //Terceiro navio
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[navio3_y + i][navio3_x + i] = 3;
    }

    //Quarto navio
    for (int i = 0; i < 3; i++)
    {
        tabuleiro[navio4_y + i][navio4_x] = 4;
        tabuleiro[navio4_y2][navio4_x2 + i] = 4;
    }

    for (int i = 0; i < 5; i++)
    {
        tabuleiro[navio4_y3][navio4_x3 + i] = 4;
    }
    
    
    

    //Tabuleiro
    printf("*** Batalha Naval ***\n");
    printf("  ");

    //Números horizontais
    for (int j = 0; j < 10; j++)
    {
        printf("%d ", j);
    }
    printf("\n");
    
    //Letras
    for (int i = 0; i < 10; i++){
        printf("%c ", 'A' + i);

        for (int j = 0; j < 10; j++){
            if (tabuleiro[i][j] == 0)
            {
                printf("~ ");
            } else if (tabuleiro[i][j] == 1)
            {
                printf("1 ");
            } else if (tabuleiro[i][j] == 2)
            {
                printf("2 ");
            } else if (tabuleiro[i][j] == 3)
            {
                printf("3 ");
            } else if (tabuleiro[i][j] == 4)
            {
                printf("4 ");
            }
            
            
        }
        printf("\n");
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

    return 0;
}
