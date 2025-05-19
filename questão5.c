/*5) Faça um programa que receba do usuário um vetor com 10 posições. Em seguida deverá 
ser impresso o maior e o menor elemento do vetor e a posição em que ele se encontra. */

#include <stdio.h>
#define T 10

int main(){
    float vetor[T];
    float maior, menor, posicaoMaior, posicaoMenor; 

    for(int i = 0; i<T; i++){
        printf("Digite o elemento da posicao %i: ", i);
        scanf("%f", &vetor[i]);
    }

    maior = menor = vetor[0]; //inicialmente o maior e o menor numero estão na primeira posição vetor[0]
    posicaoMaior = posicaoMenor = 0;

    for(int i=0;i<T;i++){
        if(vetor[i] > maior){
            maior = vetor[i];
            posicaoMaior = i;
        }else if(vetor[i]<menor){
            menor = vetor[i];
            posicaoMenor = i;
        }
    }
    printf("O maior numero do vetor eh: %.f na posicao: %.f\nO menor numero do vetor eh: %.f na posicao: %.f", maior, posicaoMaior, menor, posicaoMenor);
}