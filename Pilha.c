#include<stdio.h>
#include<stdlib.h>

typedef struct item_p
{
    int elemento;
    struct item_p *proximo;
} pilhaItem;

typedef struct
{
    pilhaItem *raiz;
    int tamanho;
} pilha;
pilha* pilha_nova()
{
    /* cria pilha */
    pilha *p = (pilha*) malloc(sizeof(pilha));
    if(p == NULL)
        return NULL;

    /* pilha esta' vazia */
    p->raiz = NULL;
    p->tamanho = 0;

  return p;
}
int pilha_tamanho(pilha *p)
{
    if (p == NULL)
        return -1;

    return p->tamanho;
}
int pilha_top(pilha *p)
{
    pilhaItem *aux;

    if (p == NULL || p->tamanho == 0)
        return NULL;

    aux = p->raiz;
    return aux->elemento;
}
pilhaItem* pilha_novo_elemento(int valor)
{
    /* aloca memoria para a estrutura pilhaItem */
    pilhaItem *item = (pilhaItem *) malloc(sizeof(pilhaItem));
    if(item == NULL)
        return NULL;

    item->elemento=valor;

    /* item ainda nao tem proximo */
    item->proximo = NULL;

    return item;
}
void pilha_push(pilha *p, int valor)
{
    pilhaItem *novo = NULL;

    if (p == NULL || valor == NULL)
        return;

    /* cria novo item */
    novo = pilha_novo_elemento(valor);
    if (novo == NULL)
    return;

    p->tamanho++;

    /* inserir no topo da pilha */
    /* se a pilha esta vazia */
    if (p->raiz == NULL)
    {
        p->raiz = novo;
        return;
    }

    /* primeiro elemento */
    novo->proximo = p->raiz;
    p->raiz = novo;
}
void pilha_pop(pilha *p)
{
    pilhaItem *curr;

    if (p == NULL || p->tamanho == 0)
        return;

    curr = p->raiz;
    p->raiz = curr->proximo;
    p->tamanho--;

    /* liberta memoria associada ao item removido */
    free(curr);
}

main () {
    int Dados, i, op;
    pilha *Pilha1=pilha_nova();
    do{
    system("cls");
    printf("1 - Adicionar elemento\n");
    printf("2 - Remover elemento\n");
    printf("0 - Encerrar\n\n");

    printf("Opcao: ");
    scanf("%d", &op);

    switch(op){
        case 1:
            printf("Digite um inteiro: ");
            scanf("%d", &Dados);

            pilha_push(Pilha1, Dados);
            printf("Elemento adicionado\n\n");
            system("pause");
            break;

        case 2:
            if(Pilha1 != NULL){
                pilha_pop(Pilha1);
                printf("Elemento removido\n\n");
                system("pause");
            } else{
                printf("A pilha esta vazia\n\n");
                system("pause");
            }
            break;

        case 3:

            break;

    }
    } while(op!=0);

    pilha *Pilha2=pilha_nova();
    while(pilha_tamanho(Pilha1)>0){
        pilha_push(Pilha2, pilha_top(Pilha1));
        pilha_pop(Pilha1);
    }
}