#include "./s21_math.h"


long double s21_sin(double value) {
    long double result = 0;
    if (s21_isnan(value) || s21_isinf(value)) {
        result = s21_nan; 
    } else {
        while (value > (2 * pi))
            value -= (2 * pi);
        for(int i = 31; i >= 1; i -= 2)
            result += (((i - 1) % 4 == 0) ? 1 : -1) * s21_pow(value, i) / s21_fact(i);
        }         
return result;
}

