#include <stdio.h>

int main() {
    // Definindo o tamanho do tabuleiro (5x5 para este exemplo)
    const int linhas = 5;
    const int colunas = 5;
    int tabuleiro[5][5] = {0}; // Inicializa tudo com 0

    // Coordenadas manuais para o navio horizontal (linha fixa, colunas consecutivas)
    int linha_horizontal = 1;
    int coluna_inicio_horizontal = 0;

    // Tamanho do navio
    const int tamanho_navio = 3;

    // Posicionando o navio horizontalmente
    for (int i = 0; i < tamanho_navio; i++) {
        tabuleiro[linha_horizontal][coluna_inicio_horizontal + i] = 1;
    }

    // Coordenadas manuais para o navio vertical (coluna fixa, linhas consecutivas)
    int coluna_vertical = 3;
    int linha_inicio_vertical = 2;

    // Posicionando o navio verticalmente
    for (int i = 0; i < tamanho_navio; i++) {
        tabuleiro[linha_inicio_vertical + i][coluna_vertical] = 2;
    }

    // Exibindo as coordenadas ocupadas por cada navio
    printf("🚢 Coordenadas do Navio Horizontal (representado por 1):\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (tabuleiro[i][j] == 1) {
                printf("(%d, %d)\n", i, j);
            }
        }
    }

    printf("\n🚢 Coordenadas do Navio Vertical (representado por 2):\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            if (tabuleiro[i][j] == 2) {
                printf("(%d, %d)\n", i, j);
            }
        }
    }

    return 0;
}
