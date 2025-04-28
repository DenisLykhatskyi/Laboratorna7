#ifndef FORMULA_H
#define FORMULA_H

#include <math.h>

static inline double FORMULA(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1));
}

#endif // FORMULA_H
