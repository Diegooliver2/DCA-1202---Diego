#include <stdio.h> //inclui a bi lioteca stdio
#include <stdlib.h> //inclui a biblioteca stdlib
#include <time.h> //inclui a biblioteca time

int compare (const void * a, const void * b) //inicializacao da funcao de comparação onde é recebido dois ponteirosque são converitdos em (const void *)
{
  return ( *(float*)a - *(float*)b ); //define a ordem dos elementos para uma ordem crescente
}

int main(){
    int n, i, j; // declaração de variáveis inteiras
    float *l,aux; // declaração de um ponteiro para float e uma variável auxiluiar

    printf("Digite o valor de n: "); // imprime a string entre as aspas
    scanf("%i", &n); // o endereço da variável n recebe um determinado valor

    l = (float*)malloc(n*sizeof(float)); // é feita a alocação de memória do vetor

    srand(time(NULL)); // altera o valor da semente do gerador de números aleatórios
    
    for(i = 0; i < n; i++){ // for que vai varre os e-nésimos elementos do vetor
        l[i] = rand()%100; //  cada elemento do vetor recebe um valor aleatório no inteválo entre 0 e 99 diretamente do gerador de números aleatórios
    }
    
    for(i = 0; i < n; i++){ // for que vai imprimir os e-nésimos elementos do vetor
       printf("%.2f, ", l[i]); // impressão na tela de cada elemento do vetor
    }

    printf("\n"); // quebra de linha

    qsort (l, n, sizeof(float), compare); // função que vai fazer a ordenação do vetor, recebendo o vetor, a quantidade de elementos,  o tamanho em bytes do vetor e a função de comparação que faz a ordenação

    for(i = 0; i < n; i++){ // for que vai imprimir os e-nésimos elementos do vetor
       printf("%.2f, ", l[i]); // impressão na tela de cada elemento do vetor epois de ordenado
    }

    printf("\n"); // quebra de linha

    return 0; //retorna zero para a função main
}
