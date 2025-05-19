/*8) Faça um programa que leia um vetor de 10 números. Leia um número x. Conte os 
múltiplos de um número inteiro x num vetor e mostre-os na tela.*/
#include <stdio.h>
#define T 10

int main(){
    
    int x, qtdmultiplo=0, vetor[T];

    for(int i=0; i<T; i++){
        printf("Digite um numero: ");
        scanf("%d", &vetor[i]);
    }
    printf("Digite uma numero para verificar se ele eh multiplo de algum elemento no vetor: ");
    scanf("%d", &x);

    for(int i=0; i<T;i++){
        if(vetor[i]%x==0){
            qtdmultiplo++;
            printf("O elemento %d na posicao vetor[%d] eh multiplo de %d\n", vetor[i], i, x);
        }
    }
    printf("A quantidade de multiplos de %d eh %d", x, qtdmultiplo);
    return 0;
}
