#include <stdio.h>

//calculando as posição das peças de xadres
void moverTorre(int casas) {
    if (casas > 0)
    {
        printf("Direita\n");
        moverTorre(casas -1);
    }
    
}

void moverBispo(int casas) {
    if (casas > 0)
    {
        printf("Cima, Direita\n");
        moverBispo(casas -1);
    }
    
}

void moverRainha(int casas) {
    if (casas > 0)
    {
        printf("Esquerda\n");
        moverRainha(casas -1);
    }
    
}

void moverCavalo(int casas) {
    if (casas > 0)
    {
        printf("cima\n");
        moverCavalo(casas -1);
    } else {
        printf("Direita\n");
    }
    
}

//imprimindo as posição das peças do xadres
int main() {
    printf("##Torre: cinco casas para a direita.##\n");
    moverTorre(5);
    printf("##Bispo: cinco casas na diagonal para cima e à direita.##\n");
    moverBispo(5);
    printf("##Rainha: oito casas para a esquerda.##\n");
    moverRainha(8);
    printf("##Cavalo: uma vez em L para cima à direita.##\n");
    moverCavalo(2);
}