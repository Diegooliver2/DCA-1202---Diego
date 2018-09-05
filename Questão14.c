#include <stdio.h>
#include <stdlib.h>
#include <time.h>



int main(){
    int n, i, j;
    float *l,aux;

    printf("Digite o valor de n: ");
    scanf("%i", &n);

    l = (float*)malloc(n*sizeof(float));

    srand(time(NULL));

    for(i = 0; i < n; i++){
        l[i] = rand()%100;
    }

    for(i = 0; i < n; i++){
       printf("%.2f, ", l[i]);
    }

    printf("\n");

    for (i = 0; i < n -1; i++) {
        for (j = i + 1; j < n; j++) {
            if(l[i ] > l[j ]) {
            aux = l[i ];
            l[i ] = l[j ];
            l[j ] = aux ;
            }
        }
   }

    for(i = 0; i < n; i++){
       printf("%.2f, ", l[i]);
    }

    printf("\n");

    return 0;
}
