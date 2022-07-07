#include "../s21_math.h"


long double s21_intpow(double arg, int exp) {
    long double res = 1;
    for (int i = 1; i <= exp; i++)
        res *= arg;
return res;
}
