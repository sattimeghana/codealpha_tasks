#include <stdio.h>

void add(int r, int c, int a[10][10], int b[10][10]) {
    int i, j;
    printf("\nMatrix Addition Result:\n");
    for (i = 0; i < r; i++) {
        for (j = 0; j < c; j++) {
            printf("%d ", a[i][j] + b[i][j]);
        }
        printf("\n");
    }
}

void multiply(int r1, int c1, int r2, int c2, int a[10][10], int b[10][10]) {
    int i, j, k;
    int res[10][10] = {0};

    printf("\nMatrix Multiplication Result:\n");
    for (i = 0; i < r1; i++) {
        for (j = 0; j < c2; j++) {
            for (k = 0; k < c1; k++) {
                res[i][j] += a[i][k] * b[k][j];
            }
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
}

void transpose(int r, int c, int a[10][10]) {
    int i, j;
    printf("\nTranspose of First Matrix:\n");
    for (j = 0; j < c; j++) {
        for (i = 0; i < r; i++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int r1, c1, r2, c2, i, j;
    int a[10][10], b[10][10];

    printf("Enter rows and columns of first matrix:\n");
    scanf("%d %d", &r1, &c1);

    printf("Enter elements of first matrix:\n");
    for (i = 0; i < r1; i++)
        for (j = 0; j < c1; j++)
            scanf("%d", &a[i][j]);

    printf("Enter rows and columns of second matrix:\n");
    scanf("%d %d", &r2, &c2);

    printf("Enter elements of second matrix:\n");
    for (i = 0; i < r2; i++)
        for (j = 0; j < c2; j++)
            scanf("%d", &b[i][j]);

    if (r1 == r2 && c1 == c2)
        add(r1, c1, a, b);
    else
        printf("\nMatrix addition not possible\n");

    if (c1 == r2)
        multiply(r1, c1, r2, c2, a, b);
    else
        printf("\nMatrix multiplication not possible\n");

    transpose(r1, c1, a);

    return 0;
}
