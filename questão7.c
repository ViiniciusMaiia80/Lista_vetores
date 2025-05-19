/*Faça um programa que preencha um vetor com 10 números reais, calcule e mostre 
quantidade de números negativos e a soma dos números positivos desse vetor.*/
#include <stdio.h>
#define T 10
int main(){
    float vetor[T], qtdNegativos, somaPositivos;

    for(int i=0; i<T;i++ ){
        printf("Digite qualquer numero real: ");
        scanf("%f", &vetor[i]);
        if(vetor[i]<0){
            qtdNegativos++;
        }else if(vetor[i]>0){
            somaPositivos += vetor[i];
        }

    }

    printf("A quantidade de numeros negativos do vetor eh: %.f\n A soma dos numeros positivos eh igual a: %.f", qtdNegativos, somaPositivos);
return 0;
}