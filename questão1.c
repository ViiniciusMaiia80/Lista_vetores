/*1) Faça um programa que possua um vetor denominado A que armazene 6 números inteiros. 
O programa deve executar os seguintes passos: 
a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7. 
b) Armazene em uma variável inteira (simples) a soma entre os valores das posições 
A[0], A[1] e A[5] do vetor e mostre na tela esta soma. 
c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.  
d) Mostre na tela cada valor do vetor A um em cada linha. */

#include <stdio.h>
#define T 6
int main(){
    int A[T]={1,0,5,-2,-5,7};
    int soma = 0;

    soma = A[0] + A[1] + A[5];
    printf("a soma de %d + %d + %d eh igual a %d",A[0],A[1],A[5], soma);

    A[4] = 100;
    printf("Valor dos vetores: \n");
    for(int i = 0 ; i<6; i++){
        printf("%d\n", A[i]);
    }


    return 0;

}