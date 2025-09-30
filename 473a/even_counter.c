#include "even_counter.h"
#include <stdio.h>
/* Функция считает количество четных чисел в файле (filename) */
int count_even_numbers_in_file(const char *filename) {
    FILE *f = fopen(filename, "r");
    if (f == NULL) {
        return -1; // ошибка открытия файла
    }
    int num, count_even = 0;
    while (fscanf(f, "%d", &num) == 1) { // Возвращает кол-во прочитанных значений
        if (num % 2 == 0) count_even++;
    //(num != 0 && num % 2 == 0)
    }
    fclose(f);
    return count_even;
}


