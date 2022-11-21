// #ifndef C_LISTA_NAO_ENCADEADA_LISTA_H
// #define C_LISTA_NAO_ENCADEADA_LISTA_H
// #endif //C_LISTA_NAO_ENCADEADA_LISTA_H

#define TAMANHO_DO_VETOR 10

typedef struct lista_configuracao
{
    int vetor[TAMANHO_DO_VETOR] ;
    int quantidade_de_elementos ;
}Lista;

void inicilizar_lista(Lista *lista);
int lista_cheia(Lista *lista);
int lista_vazia(Lista *lista);
void inserir_elemento(Lista *lista , int elemento_a_ser_inserido);
void imprimir_lista(Lista *lista);
void remover_elemento(Lista *lista , int elemento_a_ser_removido);
