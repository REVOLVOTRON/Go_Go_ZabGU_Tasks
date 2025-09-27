//https://ivtipm.github.io/Programming
//Бондаренко Николай Александрович ИВТ-24-2
//77d
#include <stdio.h>
#include <math.h>
#include <locale.h>

/*Функция расчёта корня в корне с указанным количеством итераций*/
double nested_root(int n) {
    double result = 2.0;
    for (int i = 1; i < n; i++) {
        result = sqrt(2.0 + result);
    }
    return result;
}


int main() {
    setlocale(LC_ALL, "Russian");
    setlocale(LC_ALL, ".1251");
    int n; // Число итераций

    printf("Введите натуральное число n: ");
    scanf("%d", &n);

    if (n <= 0) { // Проверяем корректность введенного числа
        printf("Пожалуйста, введите натуральное положительное число.\n");
        return 1; // Возвращаем код возврата с ошибкой
    }

    double result = nested_root(n);
    printf("Результат арифметической прогрессии - %d равен %.10f\n", n, result - n);
    return 0;
}
