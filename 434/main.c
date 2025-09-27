// https://ivtipm.github.io/Programming
// Бондаренко Николай Александрович ИВТ-24-2
// 434

#include <stdio.h>
#include "array_util.h"

// Прототип функции для печати массива
void printArray(double* arr, int size);

int main() {
    int n, m;

    printf("Введите длину последовательности a: ");
    scanf("%d", &n);
    double a[n];
    // Ввод элементов последовательности a
    printf("Введите элементы последовательности a:\n");
    for (int i = 0; i < n; i++) {
        scanf("%lf", &a[i]);
    }

    printf("Введите длину последовательности b: ");
    scanf("%d", &m);
    double b[m];
    // Ввод элементов последовательности b
    printf("Введите элементы последовательности b:\n");
    for (int i = 0; i < m; i++) {
        scanf("%lf", &b[i]);
    }

    // Замена элементов, следующих за первым максимумом, на 0.5 в каждой последовательности
    replaceAfterMax(a, n, 0.5);
    replaceAfterMax(b, m, 0.5);

    // Вывод изменённой последовательности a
    printf("Результат последовательности a: ");
    printArray(a, n);

    // Вывод изменённой последовательности b
    printf("Результат последовательности b: ");
    printArray(b, m);

    return 0;
}

// Функция вывода массива с форматированием до двух знаков после запятой
void printArray(double* arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%.2f ", arr[i]);
    }
    printf("\n");
}
