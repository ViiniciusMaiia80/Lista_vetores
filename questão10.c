/*10) Escreva um programa que leia números inteiros no intervalo [0,50] e os armazene em um 
vetor com 10 posições. Preencha um segundo vetor apenas com os números ımpares do 
primeiro vetor. Imprima os dois vetores, 2 elementos por linha. */
#include <stdio.h>
#define T 10

int main(){
    int numeros[T], impar[T];

    for(int i=0; i<T; i++){
        printf("Digite um numero entre 0 e 50: ");
        scanf("%i", &numeros[i]);
    }
printf("elemetos digitados no vetor:\n");
    for(int i =0; i<T;i+=2){
        printf("%i %i\n", numeros[i], numeros[i+1]);       
    }
printf("elemetos impares digitados no vetor:\n");
    for(int i =0; i<T;i+=2){
        if(numeros[i]%2!=0){
            impar[i] = numeros[i];
            printf("%i %i\n", impar[i]]);  
            }
        }
    return 0;
}



