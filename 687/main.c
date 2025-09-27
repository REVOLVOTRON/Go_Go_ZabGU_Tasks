#include <stdio.h>
#include "matrix_lv_0.h"

int main(void) {
    double x;
    double A[N][N];

    printf("Введите значение x: ");
    scanf("%lf", &x);

    fill_matrix(A, x);
    print_matrix(A);

    return 0;
}
