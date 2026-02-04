// Find sum of all array elements using recursion.

#include <stdio.h>

int sum(int arr[] , int n) {
    if (n<=0)
        return 0;
    else
        return arr[n-1] + sum(arr , n-1);

}

int main() {
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = sum(arr, n);
    printf("Sum of array elements is %d\n", result );
    return 0;
}