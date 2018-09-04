Um ponteiro para função, é utilizado para fazer a chamada de uma função
de forma indireta, sem a necessidade de escrever o nome da função de forma
explícita naquele ponto do código.

O código a seguir servirá de exemplo:

#include <stdio.h>
#include <stdlib.h>

typedef void (*Func)();

void legal(){
    printf("Eu sou legal!!!");
}

int main()
{
    Func f;
    f = legal;
    f();
    return 0;
}
