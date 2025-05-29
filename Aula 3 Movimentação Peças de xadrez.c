#include <stdio.h>

int main(){
    
    // Torre
    int linhaT = 0, colunaT = 0;
    
    for (int i = 0; i < 5; i++){
        colunaT++; // Movimento para direita
        printf("Torre se movimentou para: (%d, %d)\n", linhaT, colunaT);
    }
    printf("(Linha e Coluna respectivamente)\n");
    
    // Rainha
    int linhaR = 0;
    int colunaR = 8;
    printf("Rainha está na casa:%d, %d\n", linhaR, colunaR);
    do {
        colunaR--; // Movimento para esquerda
        printf("Rainha se movimentou para: (%d, %d)\n", linhaR, colunaR);
    } while (colunaR > 0);
    printf("(Linha e Coluna respectivamente)\n");
    
    // Bispo
        int casas = 5;
        int linhaB = 1 ;
        int colunaB = 1;
        int casasmovidas = 0;
        
        printf("Bispo está na casa: %d, %d\n", linhaB, colunaB);
        
        
    // Loop que simula o movimento do bispo
    
    while (casasmovidas < casas ) {
        
        linhaB++;
        colunaB++;
        casasmovidas++;
        
        printf("Cima, direita\n");
    }
        
    // Imprime a direção do movimento na diagonal
    
        printf("Bispo se movimentou para casa:%d, %d\n", linhaB, colunaB);
}
