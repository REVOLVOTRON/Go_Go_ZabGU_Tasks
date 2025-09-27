#include "file_compare.h"
#include <stdio.h>

// Открытие файла
FILE* open_file(const char *filename) {
    FILE *f = fopen(filename, "r");
    if (!f) {
        perror(filename); // вывод ошибки открытия
        return NULL;
    }
    return f;
}

// Читаем файл и проверяем на его конец(EOF)
int read_char(FILE *f, char *c) {
    int temp = fgetc(f);
    if (temp == EOF) return 0; // конец файла
    *c = (char)temp;
    return 1; // успешно считан символ
}

// СРавнение концов файлов
int check_eof(int eof1, int eof2, int line_num, int *diff_line, int *diff_pos) {
    if (eof1 && eof2) return 0; // совпадают полностью
    if (eof1 || eof2) {
        *diff_line = line_num;
        *diff_pos = 1; // первое различие в текущей строке
        return 2; // разная длина файлов
    }
    return -1; // оба файла не закончились
}

// Сравниваем файлы посимвольно
int compare_files(const char *file1, const char *file2, int *diff_line, int *diff_pos) {
    FILE *f1 = open_file(file1);
    if (!f1) return -1;
    FILE *f2 = open_file(file2);
    if (!f2) {
        fclose(f1);
        return -1;
    }

    int line_num = 1;
    int pos = 1;
    char c1, c2;
    int eof1 = 0, eof2 = 0;

    while (1) {
        eof1 = !read_char(f1, &c1);
        eof2 = !read_char(f2, &c2);

        int eof_check = check_eof(eof1, eof2, line_num, diff_line, diff_pos);
        if (eof_check != -1) {
            fclose(f1);
            fclose(f2);
            return eof_check;
        }

        if (c1 != c2) {
            *diff_line = line_num;
            *diff_pos = pos;
            fclose(f1);
            fclose(f2);
            return 1; // нашли разницу
        }

        if (c1 == '\n') {
            line_num++; // Если нашли символ сброса строки, то добавляем 1 к счетчику
            pos = 0; // сброс позиции
        }
        pos++;
    }
}
