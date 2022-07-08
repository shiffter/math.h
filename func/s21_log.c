#include "../s21_math.h"


long double s21_log(double x) {

    double result = 0;
    int sign = 1;
    int degree = 0;
    if (x > 0 && x != s21_inf) {
        while (x > 1) {
            x = x/2;
            degree++;
            }
        for (double i = 1; i <= 50; i++) {
            result += sign * pow(x-1, i)/i;
            sign = -sign;
        }
    result += degree * log(2);
    } else if (x == 0) {
        result = s21_minf;
    } else if (x == s21_inf) {
        result = s21_inf; 
    } else { result = s21_nan; }
return result;
}
