#include <stdio.h>
 
int main() {
    int t = 1, b = 1;
   
    printf("##Torre cinco casas para a direita, COMANDO: While.##\n");
    while (t <= 5) {
        printf("#Direita#\n", t);
        t++; 
    }

    printf("##Bispo cinco casas na diagonal para cima e à direita, COMANDO: Do-While.##\n");
    do { 

        printf("#Cima, Direita#\n", b);
        b++; 
        
    } while (b <= 5);

    printf("##Rainha oito casas para a esquerda, COMANDO: For.##\n");
    for (int r = 1; r <= 8; r++) {
        printf("#Esquerda#\n", r);
    }

    printf("##Cavalo deverá se mover duas casas para baixo e uma casa para a esquerda##\n");
    for (int c = 0; c < 1; c++)
    {
        for (int i = 0; i < 2; i++)
        {
            printf("Baixo\n"); 
        }
        printf("Esquerda\n");
    }
   
    return 0;
}