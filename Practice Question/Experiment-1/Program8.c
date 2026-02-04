// Structure Demonstrartion Structures are used to group different data type under a single name enabling organized data storage and access.

#include <stdio.h>
struct Student {
    char name[50];
    int roll;
    float marks;
    };

int main() {
    struct Student s1;

    printf("Enter Name: ");
    scanf("%s", s1.name);
    printf("Enter Roll Number: ");
    scanf("%d", &s1.roll);
    printf("Enter Marks: ");
    scanf("%f", &s1.marks);

    printf("Student Record\n");
    printf("Name: %s\n", s1.name);
    printf("Roll: %d\n", s1.roll);
    printf("Marks: %.2f\n", s1.marks);
    return 0;
}