//https://ivtipm.github.io/Programming/Glava13/index13.htm
//Бондаренко Николай Александрович ИВТ-24-2
//705

#include <stdio.h>
#include "matrix.h"

int main() {
    int n;
    scanf("%d", &n);
// Обозначение матриц
    double **A = create_matrix(n);
    double **B = create_matrix(n);
    double **C = create_matrix(n);
    double **R = create_matrix(n);
// Заполнение матриц
    read_matrix(A, n);
    read_matrix(B, n);
// Заполнение матрицы С
    make_C(C, n);
// Вычитание единичной матрицы из матрицы В
    sub_identity(B, n);
// Перемножение матриц
    multiply(A, B, R, n);
// Сложение матриц
    add_matrix(R, C, n);
// Вывод результ.Матрицы
    print_matrix(R, n);
// Освобождение памяти которою мы заняли в начале
    free_matrix(A, n);
    free_matrix(B, n);
    free_matrix(C, n);
    free_matrix(R, n);

    return 0;
}
