//https://ivtipm.github.io/Programming/Glava13/index13.htm
//Бондаренко Николай Александрович ИВТ-24-2
//527



#include <stdio.h>
#include "file_compare.h"

int main() {
    int line, pos;
    int res = compare_files("f.txt", "g.txt", &line, &pos);
    if (res == 0) {
        printf("Файлы совпадают\n");
    } else if (res == 1) {
        printf("Файлы отличаются с строки %d, символ %d\n", line, pos);
    } else if (res == 2) {
        printf("Один файл повторяет начало другого, размер файла меньше. Различается с строки %d\n", line);
    } else {
        printf("Ошибка при открытии файла\n");
    }
    return 0;
}
