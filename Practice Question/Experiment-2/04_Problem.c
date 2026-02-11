// WAP on circular doubly linked list to insert at begning and delete in beggningg
// // ALSO count no of Nodes

#include<stdio.h>
#include<stdlib.h>
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};
void insert(struct Node** head, int newData) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = newData;

    if (*head == NULL) {
        newNode->next = newNode;
        newNode->prev = newNode;
        *head = newNode;
    } else {
        struct Node* last = (*head)->prev;
        last->next = newNode;
        newNode->prev = last;
        newNode->next = *head;
        (*head)->prev = newNode;
        *head = newNode;
    }
}
void delete(struct Node** head) {
    if (*head == NULL) {
        printf("List is empty. Cannot delete.\n");
        return;
    }
    struct Node* temp = *head;

    if (temp->next == *head) {
        *head = NULL;
    } else {
        struct Node* last = (*head)->prev;
        last->next = temp->next;
        temp->next->prev = last;
        *head = temp->next;
    }
    free(temp);
}
void count(struct Node* head) {
    if (head == NULL) {
        printf("Number of nodes in the list: 0\n");
        return;
    }
    int count = 0;
    struct Node* temp = head;
    do {
        count++;
        temp = temp->next;
    } while (temp != head);
    printf("Number of nodes in the list: %d\n", count);
}
void printList(struct Node* node) {
    if (node == NULL) {
        printf("List is empty.\n");
        return;
    }
    struct Node* temp = node;
    do {
        printf("%d <-> ", temp->data);
        temp = temp->next;
    } while (temp != node);
    printf("NULL\n");
}
int main() {
    struct Node* head = NULL;

    insert(&head, 10);
    insert(&head, 20);
    insert(&head, 30);
    printf("Circular Doubly Linked List after inserting at the beginning: ");
    printList(head);
    delete(&head);
    printf("Circular Doubly Linked List after deleting at the beginning: ");
    printList(head);
    count(head);
    return 0;
}
