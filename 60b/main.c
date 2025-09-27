//https://ivtipm.github.io/Programming
//Бондаренко Николай Александрович ИВТ-24-2
//60b
#include <stdio.h>
#include <math.h>

int isInD(float x, float y) {
    // Проверяем точку на принадлежность к окружности: x^2 + y^2 = 1
    if (x * x + y * y > 1) return 0;
    // Проверяем точку на лежащую ниже прямой y = x/2
    if (y > x / 2.0f) return 0;
    return 1; // Точка в D, если находится в окружности и ниже прямой
}

int main() {
    float x, y;
    printf("Введите x и y координаты: ");
    scanf("%f %f", &x, &y);
    if (isInD(x, y)) {
        printf("U = -3\n"); // Если точка лежит в D, то U = -3
    } else {
        printf("U = %f\n", y * y); // В противном случае U = (y)^2
    }

    return 0;
}