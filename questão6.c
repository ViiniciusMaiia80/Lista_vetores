/*6)Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos 
na ordem inversa. */
#include <stdio.h>
#define T 6

int main(){
    int vetor[T];

    for(int i=0; i<T; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    printf("A ordem dos vetores conforme insercao eh: ");
    for(int i=0; i<T; i++){
        printf("%d", vetor[i]);
    }
    printf("\nA ordem inversa dos vetores conforme insercao eh: ");
    for(int i=5; i>=0; i--){
        printf("%d", vetor[i]);
    }
    return 0;
}