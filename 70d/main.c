//https://ivtipm.github.io/Programming
//Бондаренко Николай Александрович ИВТ-24-2
//70d
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Функция для проверки достижимости точки */
int canReachInOneQueen(int k, int l, int m, int n) {
    // Возвращаем true, если к = m или l = n или абсолютная величина k - m равна абсолютной величине l - n
    return (k == m || l == n || abs(k - m) == abs(l - n));
}

/* Функция для определения хода ферзя с точки (k, l) в точку (m, n) */
void queenMove(int k, int l, int m, int n) {
    if (canReachInOneQueen(k, l, m, n)) {
        printf("Ферзь может достигнуть точки (%d, %d) из точки(%d, %d) в одном ходу.\n", m, n, k, l);
    } else {
        printf("Ферзь не может достичь точки (%d, %d) в одном ходу. Сначала нужно попасть на точку (%d, %d), затем на точку (%d, %d).\n", m, n, m, l, m, n);
    }
}

int main() {
    int k, l, m, n;
    printf("Введите координаты k, l, m, n (1-8): ");
    scanf("%d %d %d %d", &k, &l, &m, &n);

    if (k < 1 || k > 8 || l < 1 || l > 8 || m < 1 || m > 8 || n < 1 || n > 8) {
        printf("Неверные значения. Числа должны быть между 1 и 8.\n");
        return 1;
    }

    queenMove(k, l, m, n);

    return 0;
}