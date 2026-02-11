// WAP for student record management system using linked list for insertion and deletion at a position
// Add a student record (name, roll number, and marks).

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student {
    char name[50];
    int rollNumber;
    float marks;
    struct Student* next;
};
void insert(struct Student** head, char* name, int rollNumber, float marks) {
    struct Student* newStudent = (struct Student*)malloc(sizeof(struct Student));
    strcpy(newStudent->name, name);
    newStudent->rollNumber = rollNumber;
    newStudent->marks = marks;
    newStudent->next = *head;
    *head = newStudent;
}
void delete(struct Student** head, int rollNumber) {
    struct Student* temp = *head;
    struct Student* prev = NULL;

    if (temp != NULL && temp->rollNumber == rollNumber) {
        *head = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->rollNumber != rollNumber) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) {
        printf("Student with roll number %d not found.\n", rollNumber);
        return;
    }
    prev->next = temp->next;
    free(temp);
}
void printList(struct Student* node) {
    while (node != NULL) {
        printf("Name: %s, Roll Number: %d, Marks: %.2f\n", node->name, node->rollNumber, node->marks);
        node = node->next;
    }
}
int main() {
    struct Student* head = NULL;

    insert(&head, "Alice", 1, 85.5);
    insert(&head, "Bob", 2, 90.0);
    insert(&head, "Charlie", 3, 78.0);

    printf("Student Records:\n");
    printList(head);

    delete(&head, 1);
    printf("\nStudent Records after deletion:\n");
    printList(head);

    return 0;
}
