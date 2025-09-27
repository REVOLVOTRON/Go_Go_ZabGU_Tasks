#ifndef FILE_COMPARE_H
#define FILE_COMPARE_H

#include <stdio.h>

/* Открывает файл для чтения, возвращает указатель на файл или NULL при ошибке */
FILE *open_file(const char *filename);

/* Читает символ из файла, возвращает 1 если успешно, 0 если достигнут EOF */
int read_char(FILE *f, char *c);

/* Проверяет, достигли ли оба файла конца.
Возвращает 0 если файлы совпадают, 2 если разная длина, -1 если оба не EOF */
int check_eof(int eof1, int eof2, int line_num, int *diff_line, int *diff_pos);

/* Сравнивает два файла посимвольно.
Возвращает 0 если файлы совпадают,
1 если найдено различие символов,
2 если файлы разной длины,
-1 при ошибке открытия файла */
int compare_files(const char *file1, const char *file2, int *diff_line, int *diff_pos);

#endif // FILE_COMPARE_H
