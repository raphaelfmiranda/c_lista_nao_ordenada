#include <stdio.h>
#include "lista.h"

int main ()
{
    int i , nDigitado ;

    Lista lista;
    inicilizar_lista(&lista);


    for (i = 0 ; i < 4 ; i++)
    {
        printf("\nDigite um numero: ")      ;   scanf("%d" , &nDigitado);
        inserir_elemento(&lista , nDigitado);
        imprimir_lista(&lista);
    }

    for (i = 0 ; i < 2 ; i++)
    {
        printf("\nDigite um elemento para ser removido: ")      ;   scanf("%d" , &nDigitado);
        remover_elemento(&lista , nDigitado);
        imprimir_lista(&lista);
    }
}
