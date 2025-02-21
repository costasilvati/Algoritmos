#include <stdio.h>
#include <stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

Node* createList(){
    return NULL;
}

Node** insertAtBeginning(Node** head, int data){
    Node* newNode = (Node*)malloc(sizeof(Node)));
    newNode->data = data;
    newNode->next = *head;
    *head = newNode;
}


int main()
{
    Node* head = createList();
    return 0;
}
