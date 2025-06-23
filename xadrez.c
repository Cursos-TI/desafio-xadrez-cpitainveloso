#include <stdio.h> 
int main () {

int i = 8;

//  o bispo deve se mover 5 vezes a direita

    for (int i = 0; i <= 4; i++)
    {
       printf(" bisipo movido para cima\n ^ direita->\n");
    }
      printf("\n");

//movimentos da rainha a rainha deve mover 8 casas para esquerda

    do {
        printf("rainha movida para\n <-esquerda\n");
          i++; 
          printf("\n");
    }while ( i <= 15);

//fim do codigo 


return 0;
}