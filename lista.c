#include "lista.h"
#include <stdio.h>
#include <string.h>

void inicilizar_lista(Lista *lista)
{
    lista -> quantidade_de_elementos = 0 ;
    printf("Lista inicializada.\n");
}

int lista_cheia(Lista *lista)
{
    if (lista->quantidade_de_elementos == TAMANHO_DO_VETOR)
    {
        return 1; // 1 = verdadeiro
        printf("\nA lista esta cheia!");
    }
    else
    {
        return 0; // 0 = falso
        printf("\nA lista esta vazia");
    }
}

int lista_vazia(Lista *lista)
{
    if ( lista->quantidade_de_elementos == 0)
    {
        return 1; // 1 = verdadeiro
    }
    else
    {
        return 0; // 0 = falso
    }
}

void inserir_elemento(Lista *lista , int elemento_a_ser_inserido)
{
    if(lista_cheia(lista) == 0)
    {
        lista -> vetor[lista->quantidade_de_elementos] = elemento_a_ser_inserido ;
        lista->quantidade_de_elementos++;
    }
}


void imprimir_lista(Lista *lista)
{
    int i ;

    for (i = 0 ; i < lista->quantidade_de_elementos ; i++ )
    {
        printf("\n%d" , lista -> vetor[i]);
    }
}


void remover_elemento(Lista *lista , int elemento_a_ser_removido)
{
    if(lista_vazia(lista))
    {
        printf("Nao posso remover elementos de uma lista vazia\n");
        return;
    }
    int i;
    int qtd_elem_to_move;
    for (i = 0 ; i < lista -> quantidade_de_elementos ; i++)
    {
        if (lista -> vetor[i] == elemento_a_ser_removido)
        {
            qtd_elem_to_move = sizeof(int) * (lista -> quantidade_de_elementos - i - 1);
            memmove(lista -> vetor + i , lista -> vetor + i + 1 , qtd_elem_to_move);
            lista -> quantidade_de_elementos -= 1;
        }
    }
}
