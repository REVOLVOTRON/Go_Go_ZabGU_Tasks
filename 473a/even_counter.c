#include "even_counter.h"
#include <stdio.h>

int count_even_numbers_in_file(const char *filename) {
    FILE *f = fopen(filename, "r");
    if (f == NULL) {
        return -1; // ошибка открытия файла
    }
    int num, count_even = 0;
    while (fscanf(f, "%d", &num) == 1) {
        if (num % 2 == 0) count_even++;
    //(num != 0 && num % 2 == 0)
    }
    fclose(f);
    return count_even;
}


