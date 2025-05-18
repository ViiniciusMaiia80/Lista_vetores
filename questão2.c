/*2) Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos.  */
#include <stdio.h>
#include <stdlib.h>

int main(){
    int vetor[6];

    for(int i=0;i<6; i++){
        printf("Digite o numero: ");
        scanf("%d", &vetor[i]);
    }

    printf("o valor do vetor eh: \n");
    for(int i=0; i<6; i++){
        printf("%d ", vetor[i]);
    }
    return 0;
}