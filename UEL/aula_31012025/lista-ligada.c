#include <stdio.h>
#include <stdlib.h>

// Defini��o da estrutura de um n�
struct Node {
    int data;
    struct Node *next;
};

// Fun��o para adicionar um n� no in�cio da lista
void insertAtBeginning(struct Node **head_ref, int new_data) {
    // Aloca mem�ria para o novo n�
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));

    // Coloca os dados no novo n�
    new_node->data = new_data;

    // Faz o novo n� apontar para o antigo primeiro n�
    new_node->next = (*head_ref);

    // Faz o ponteiro cabe�a apontar para o novo n�
    (*head_ref) = new_node;
}

// Fun��o para imprimir a lista ligada
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

    // Adiciona alguns n�s na lista
    insertAtBeginning(&head, 1);
    insertAtBeginning(&head, 2);
    insertAtBeginning(&head, 3);
    insertAtBeginning(&head, 4);

    // Imprime a lista ligada
    printf("Lista ligada: ");
    printList(head);

    return 0;
}
