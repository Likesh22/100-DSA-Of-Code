//Problem: Write a C program to delete the element at a given 1-based position pos from an array of n integers. Shift remaining elements to the left.

#include <stdio.h>

int main() {
    int n, pos, i;
    printf("Enter the number of elements in the array: ");
    if (scanf("%d", &n) != 1) return 1;

    int arr[n];
    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the position to delete (1-based index): ");
    scanf("%d", &pos);
    if (pos < 1 || pos > n) {
    } else {
        for (i = pos - 1; i < n - 1; i++) {
            arr[i] = arr[i + 1];
        }
        n--;
    }
    for (i = 0; i < n; i++) {
        printf("%d%s", arr[i], (i == n - 1) ? "" : " ");
    }
    printf("\n");
    return 0;
}