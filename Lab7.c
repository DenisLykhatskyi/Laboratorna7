#include <stdio.h>
#include "formula.h"

typedef struct {
    double x;
    double y;
} Point;

int main() {
    int n;
    printf("Введіть кількість точок: ");
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("Некоректне введення. Кількість точок має бути не менше 2.\n");
        return 1;
    }

    Point points[n];
    printf("Введіть координати точок(Наприклад: Точка 1: 0 0,Точка 2: 3 4,Точка 3: 6 8,Точка 4: 9 12) (x y):\n");
    for (int i = 0; i < n; i++) {
        printf("Точка %d: ", i + 1);
        if (scanf("%lf %lf", &points[i].x, &points[i].y) != 2) {
            printf("Некоректне введення координат.\n");
            return 1;
        }
    }

    printf("\nВідстані між сусідніми точками:\n");
    for (int i = 0; i < n - 1; i++) {
        double d = FORMULA(points[i].x, points[i].y, points[i+1].x, points[i+1].y);
        printf("Між точкою %d і точкою %d: %.4lf\n", i + 1, i + 2, d);
    }

    return 0;
}
