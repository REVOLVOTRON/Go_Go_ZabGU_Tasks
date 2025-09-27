#include <stdio.h>
#include <stdlib.h>
#include "matrix.h"

double **create_matrix(int n) {
    double **m = malloc(n * sizeof(double *));
    for (int i = 0; i < n; i++) {
        m[i] = (double *) malloc(n * sizeof(double));
    }
    return m;
}

void free_matrix(double **m, int n) {
    for (int i = 0; i < n; i++) {
        free(m[i]);
    }
    free(m);
}

void read_matrix(double **m, int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            scanf("%lf", &m[i][j]);
}

void print_matrix(double **m, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            printf("%8.4f ", m[i][j]);
        printf("\n");
    }
}

void sub_identity(double **B, int n) {
    for (int i = 0; i < n; i++)
        B[i][i] -= 1.0;
}

void multiply(double **A, double **B, double **R, int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) {
            R[i][j] = 0;
            for (int k = 0; k < n; k++)
                R[i][j] += A[i][k] * B[k][j];
        }
}

void add_matrix(double **R, double **C, int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            R[i][j] += C[i][j];
}

void make_C(double **C, int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            C[i][j] = 1.0 / (i + j + 2);
}

void clear_matrix(double **M, int n) {
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            M[i][j] = 0;
}
