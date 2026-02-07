//Problem: Write a recursive function fib(n) to compute the n-th Fibonacci number where fib(0)=0 and fib(1)=1.

#include <stdio.h>

int main() {
    int n;
    int t1 = 0, t2 = 1, nextTerm;

    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("%d\n", t1);
    } else if (n == 1) {
        printf("%d\n", t2);
    } else {
        for (int i = 2; i <= n; i++) {
            nextTerm = t1 + t2;
            t1 = t2;
            t2 = nextTerm;
        }
        printf("%d\n", t2);
    }

    return 0;
}