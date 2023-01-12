#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

struct DoublyLinkedList {
    struct Node* head;
    struct Node* tail;
}

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;

    return(newNode);
}

void append(struct DoublyLinkedList* list, int data) {
    struct Node* newNode = createNode(data);
    if(list->tail == NULL) {
        list->head = newNode;
        list->tail = newNode;
    } else {
        newNode->prev = list->tail;
        list->tail->next = newNode;
        list->tail = newNode;
    }

}

void prepend(struct DoublyLinkedList* list, int data) {
    struct *Node newNode = createNode(data);
    if(list->head == NULL) {
        list->head = newNode;
        list->tail = newNode;
    } else {
        newNode->next = list->head;
        list->head->prev = newNode;
        list->head = newNode
    }
}
int main(void) {
    
    printf("Node value is %i", newNode->data);
    return(0);
}