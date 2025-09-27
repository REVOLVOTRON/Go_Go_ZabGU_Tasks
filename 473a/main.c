//https://ivtipm.github.io/Programming/Glava13/index13.htm
//Бондаренко Николай Александрович ИВТ-24-2
//473a

#include <stdio.h>
#include "even_counter.h"

int main() {
    const char *filename = "/home/revolution/CLionProjects/Go_Go_ZabGU_Tasks/473a/input.txt";
    int result = count_even_numbers_in_file(filename);
    if (result == -1) {
        printf("Ошибка при открытии файла\n");
        return 1;
    }
    printf("Количество чётных чисел: %d\n", result);
    return 0;
}
