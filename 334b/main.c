//https://ivtipm.github.io/Programming/Glava13/index13.htm
//Бондаренко Николай Александрович ИВТ-24-2
//334b


#include <stdio.h>
#include <math.h>

int main() {
    int i, j;
    double sum = 0.0; // Переменная для накопления суммы

    // Внешний цикл по i от 1 до 100
    for (i = 1; i <= 100; i++) {
        // Внутренний цикл по j от 1 до 60
        for (j = 1; j <= 60; j++) {
            // Вычисляем sin(i^3 + j^4) и добавляем к сумме
            sum += sin(pow(i, 3) + pow(j, 4));
        }
    }

    // Вывод результата с точностью до 6 знаков после запятой
    printf("Сумма: %.6f\n", sum);

    return 0;
}
