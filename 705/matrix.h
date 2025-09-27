#ifndef MATRIX_H
#define MATRIX_H

/* Создаёт квадратную матрицу n x n (динамически в памяти) */
double **create_matrix(int n);

/* Освобождает память, занятую матрицей */
void free_matrix(double **m, int n);

/* Считывает матрицу n x n из ввода */
void read_matrix(double **m, int n);

/* Выводит матрицу n x n в консоль */
void print_matrix(double **m, int n);

/* Вычитает единичную матрицу: B := B - E */
void sub_identity(double **B, int n);

/* Умножает матрицы: R = A * B */
void multiply(double **A, double **B, double **R, int n);

/* Складывает матрицы: R = R + C */
void add_matrix(double **R, double **C, int n);

/* Заполняет матрицу C по формуле C[i][j] = 1 / (i + j + 2) */
void make_C(double **C, int n);

/* Обнуляет матрицу */
void clear_matrix(double **M, int n);

#endif
