#define _CRT_SECURE_NO_WARNINGS
#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>
#include <windows.h>

int main() {
    SetConsoleOutputCP(65001);
    double x, y;
    printf("Введите x и y: ");
    if (scanf("%lf %lf", &x, &y) != 2) {
        printf("Ошибка ввода!\n");
        return 1;
    }
    double result = (exp(pow(x, 3)) + pow(cos(x - 4), 2)) / (atan(x) + 5.2 * y);
    printf("F(%g, %g) = %lf\n", x, y, result);
    return 0;
}

