// Store 'n' numbers (integers or real) in an array.
// Conduct a linear search for a given number and report success or failure in the form of a suitable message.

#include <stdio.h>
void singla(int arr[],int n , int search){
    int i,found = 0;
    for (i=0; i<n; i++) {
        if (arr[i] == search) {
            printf("%d is at index %d.\n",search,i);
            found = 1;
            break; 
        }
    }
    if (found == 0) {
        printf("%d is not in the list.\n",search);
    }
}
int main() {

    int n,i;
    int search;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d numbers:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Enter a number to find: ");
    scanf("%d", &search);
    singla(arr,n,search);
    return 0;
}