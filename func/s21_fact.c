#include "../s21_math.h"

long double s21_fact(double val) {
    long double result = 1;
    for (int i = 1; i <= val; i++)
        result *= i;
    return result;
}
