// Linear Search using dynamic Memory Allocation.

#include <stdio.h>
#include <stdlib.h>

int main() {
    int n,i,*arr;
    int search,found = 0;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    arr=(int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory not allocated.\n");
        return 1;
    }
    printf("Enter %d numbers:\n", n);
    for (i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter the number to find: ");
    scanf("%d", &search);
    for (i = 0; i < n; i++) {
        if (arr[i] == search) {
            printf("%d is at index %d.\n",search,i);
            found = 1;
            break;
        }
    }
    if (found==0) {
        printf("%d is not in the list.\n", search);
    }
    free(arr);
    return 0;
}