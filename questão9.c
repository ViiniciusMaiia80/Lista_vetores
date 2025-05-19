/*9) Faça um vetor de tamanho 50 preenchido com o seguinte valor: (𝑖 + 5 ∗ 𝑖) %(𝑖 + 1), 
sendo i a posição do elemento no vetor. Em seguida imprima o vetor na tela.*/
#include <stdio.h>
#define T 50

int main(){
    int vetor[T];
    for(int i=0; i<T;i++){
        vetor[i] = (i+5*i)%(i+1);
        printf("%d\n", vetor[i]);
    }
    return 0;
}