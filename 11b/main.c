//https://ivtipm.github.io/Programming
//Бондаренко Николай Александрович ИВТ-24-2
//11b
#include <stdio.h>
#include <math.h>
#include <locale.h>
#include <stdlib.h>


int main() {
    // Действительное число x, y, z (x, y, z - числа вводятся с клавиатуры)
    float x, y, z;
    // Константа e
    const float e = 2.71828;

    printf("Введите значения: x, y, z: ");
    // Считываем значения x, y, z с клавиатуры в переменные x, y, z
    scanf("%f", &x, &y, &z);
    float a = pow((3 + e), (y - 1)) / (1 + pow(x, 2) * abs(y - tan(z)));
    float b = 1 + abs(y - x) + (pow((y - x), 2) / 2) + (pow(abs(y - x), 3) / 3);

    printf("\nЗначение a: %.6f\n", a);
    // Выводим результат с заданной точностью (%.6f - шесть цифр после десятичной точки) на экран
    printf("\nЗначение b: %.6f\n", b);
    return 0;
}
