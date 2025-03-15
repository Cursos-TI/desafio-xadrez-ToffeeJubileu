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
   
    return 0;
}