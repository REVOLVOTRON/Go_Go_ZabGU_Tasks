//https://ivtipm.github.io/Programming/Glava13/index13.htm
//Бондаренко Николай Александрович ИВТ-24-2
//137b

#include <stdio.h>
#include "list_mdl.h"

int main() {
    int n;
    printf("Введите n (общее кол-в чисел): ");
    scanf("%d", &n);

    double a[n];
    printf("Введите %d чисел:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%lf", &a[i]);
    }

    Node* listB = NULL;

    // Формируем последовательность: a1^2, a1*a2, ..., a1*an
    for (int i = 0; i < n; i++) {
        append(&listB, a[0] * a[i]);
    }

    printf("б) Произведения:\n");
    print_list(listB);

    // Освобождение памяти
    free_list(listB);

    return 0;
}
