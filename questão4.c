/*4) Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois 
valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa 
deverá escrever a soma dos valores encontrados nas respectivas posições X e Y. */

#include <stdio.h>
#define T 8
int main(){
    float vetor[T];
    int x,y;
    float soma =0;
    for(int i=0;i<T;i++){
        printf("digite um numero: ");
        scanf("%f", &vetor[i]);
    }
    printf("Quais posicoes deseja somar seus valores?");
    scanf("%d %d", &x,&y);
    soma = vetor[x] + vetor[y];
    if(x<T || y<T){
    printf("A soma de %.2f + %.2f eh igual a: %.2f ", vetor[x],vetor[y],soma);
    }
    return 0;

}