#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

double Q(double X) {
    if (X < 25) {
        return 3 * (X - 25) + 10;
    }
    else if (X <= 45) {
        return 2 * sqrt(X - 35 + 10) + 45;
    }
    else {
        return (X - 45) * (X - 45) / 4 + 55;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");

    double X;
    double result;
    double UCL = 64.32;

    printf("Введите температуру сырья X (10...70 °C): ");
    scanf("%lf", &X);

    result = Q(X);

    printf("Q(%.2f) = %.4f\n", X, result);

    if (result > UCL) {
        printf("ВНИМАНИЕ! Превышена верхняя контрольная граница UCL = %.2f\n", UCL);
    }
    else {
        printf("Значение находится в пределах верхней контрольной границы.\n");
    }

    return 0;
}