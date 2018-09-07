#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void sv(float *v1, float *v2, float *v3, int tam){
    for(int i = 0; i < tam; i++){
        v3[i] = v1[i] + v2[i];
    }

}

int main(){
    int i, n;
    float *vet1, *vet2, *vet3;

    printf("Digite a quantidade de elementos dos dois vetores a serem somados: ");
    scanf("%d", &n);

    vet1 = (float*)malloc(n*sizeof(float));
    vet2 = (float*)malloc(n*sizeof(float));
    vet3 = (float*)malloc(n*sizeof(float));

    srand(time(NULL));

    for(i = 0; i < n; i++){
        vet1[i] = 10 + rand()%90;
        vet2[i] = 10 + rand()%90;
    }

    sv(vet1, vet2, vet3, n);

    printf("Vetor1 =");

    for(i = 0; i< n; i++){
        printf(" %.2f ", vet1[i]);
    }

    printf("\nVetor2 =");

    for(i = 0; i< n; i++){
        printf(" %.2f ", vet2[i]);
    }

    printf("\nVetor 1 e 2 somados =");

    for(i = 0; i< n; i++){
        printf(" %.2f ", vet3[i]);
    }

    return 0;
}
