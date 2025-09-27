#include "array_util.h"

// Функция замены элементов после первого максимума на replacement
void replaceAfterMax(double* arr, int size, double replacement) {
    if (size <= 0) return;

    // Нахождение индекса первого максимума
    double maxVal = arr[0];
    int maxIndex = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
            maxIndex = i;
        }
    }

    // Заменяем элементы после maxIndex на replacement
    for (int i = maxIndex + 1; i < size; i++) {
        arr[i] = replacement;
    }
}
