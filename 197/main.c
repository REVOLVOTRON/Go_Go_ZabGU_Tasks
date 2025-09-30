//https://ivtipm.github.io/Programming/Glava13/index13.htm
//Бондаренко Николай Александрович ИВТ-24-2
//197

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Функция для вычисления a_i
int a(int i) {
    if (i % 2 != 0) // i нечетное
        return i;
    else // i четное
        return i / 2;
}

// Функция для вычисления b_i с модулем
int b(int i) {
    if (i % 2 != 0) // i нечетное
        return abs(i * i); // i^2 по модулю, по условию, хотя i^2 всегда неотрицательно
    else
        return abs(i * i * i); // i^3 по модулю
}

int main() {
    int i;
    long long sum = 0; // Для хранения суммы, используем long на всякий случай

    for (i = 1; i <= 30; i++) {
        int diff = a(i) - b(i);
        sum += (long long)(diff * diff);
    }

    printf("Сумма: %lld\n", sum);

    return 0;
}
