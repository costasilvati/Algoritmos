#include <stdio.h>
#include <stdlib.h>

// Definição da estrutura de um nó
struct Node {
    int data;
    struct Node *next;
};

// Função para adicionar um nó no início da lista
void insertAtBeginning(struct Node **head_ref, int new_data) {
    // Aloca memória para o novo nó
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    // Coloca os dados no novo nó
    new_node->data = new_data;

    // Faz o novo nó apontar para o antigo primeiro nó
    new_node->next = (*head_ref);

    // Faz o ponteiro cabeça apontar para o novo nó
    (*head_ref) = new_node;
}

// Função para imprimir a lista ligada
void printList(struct Node *node) {
    while (node != NULL) {
        printf("%d -> ", node->data);
        node = node->next;
    }
    printf("NULL\n");
}

int main() {
    // Inicializa uma lista vazia
    struct Node *head = NULL;

    // Adiciona alguns nós na lista
    insertAtBeginning(&head, 1);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 4);

    // Imprime a lista ligada
    printf("Lista ligada: ");
    printList(head);

    return 0;
}
