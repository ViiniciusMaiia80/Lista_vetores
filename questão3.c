/*3) Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das 
componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos têm 10 
elementos cada. Imprimir todos os conjuntos. */

#include <stdio.h>
#include <math.h>

#define T 10
int main(){
    float numeros[T];
    float quadrado[T];
    
    for(int i=0;i<T;i++){
        printf("Digite um numero: ");
        scanf("%f", &numeros[i]);
        quadrado[i] = pow(numeros[i],2);
    }
    for(int i=0; i<T; i++){
        printf("O quadrado de: %.f eh igual a %.f\n", numeros[i],quadrado[i]);
        
    }
    return 0;
}