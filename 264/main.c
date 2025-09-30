//https://ivtipm.github.io/Programming/Glava13/index13.htm
//Бондаренко Николай Александрович ИВТ-24-2
//264

#include <stdio.h>
#include <string.h>

void exclude_brackets(char *str, char *result) {
    int i = 0, j = 0;
    int inside_brackets = 0;

    while (str[i] != '\0') {
        if (str[i] == '(') {
            inside_brackets = 1;  // Начинается группа в скобках
        } else if (str[i] == ')' && inside_brackets) {
            inside_brackets = 0;  // Заканчивается группа в скобках
        } else if (!inside_brackets) {
            result[j++] = str[i];  // Копируем символ, если вне скобок
        }
        i++;
    }
    result[j] = '\0'; // завершаем строку
}

int main() {
    char input[] = "a(bc)de(fg)h";  // пример входной строки
    char output[100];

    exclude_brackets(input, output);
    printf("Результат: %s\n", output);  // Должен вывести "adeh"

    return 0;
}
