//Find the product of two matrix using pointers.

#include <stdio.h>

int main() {
    int r1, c1, r2, c2, i, j, k;
    int a[10][10], b[10][10], res[10][10];

    printf("Enter rows and cols for 1st matrix: ");
    scanf("%d %d", &r1, &c1);
    printf("Enter rows and cols for 2nd matrix: ");
    scanf("%d %d", &r2, &c2);
    
    if (c1 != r2) {
        printf("Error! Multiplication not possible.\n");
        return 0;
    }
    
    int (*ptrA)[10] = a;
    int (*ptrB)[10] = b;
    int (*ptrRes)[10] = res;

    printf("Enter elements of 1st matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c1; j++) {
            scanf("%d", &ptrA[i][j]);
        }
    }
    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < r2; i++) {
        for (j = 0; j < c2; j++) {
            scanf("%d", &ptrB[i][j]);
        }
    }
    // For multiply
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            ptrRes[i][j] = 0;
            for (k = 0; k < c1; k++) {
                ptrRes[i][j] += ptrA[i][k] * ptrB[k][j];
            }
        }
    }
    printf("Resultant Matrix:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            printf("%d ", ptrRes[i][j]);
        }
        printf("\n");
    }
    return 0;
}