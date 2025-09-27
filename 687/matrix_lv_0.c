#include <stdio.h>
#include <math.h>
#include "matrix_lv_0.h"

// Функция заполняет матрицу A
void fill_matrix(double A[N][N], double x) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (i == 0) {
                A[i][j] = pow(x, j);
            } else if (i == N - 1) {
                A[i][j] = pow(x, N - 1 - j);
            } else if (j == 0) {
                A[i][j] = pow(x, i);
            } else if (j == N - 1) {
                A[i][j] = pow(x, N - 1 - i);
            } else {
                A[i][j] = 0.0;
            }
        }
    }
}

// Функция вывода матрицы
void print_matrix(double A[N][N]) {
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            printf("%8.2f ", A[i][j]);
        }
        printf("\n");
    }
}


void fill_matrix_else(double A[N][N], double x) {
    for (int i = 0; i < N; ++i) {
        A[0][N - i] = pow(x, i);
        A[N - i][0] = pow(x, i);
        A[0][] = pow(x, i);

    }
}