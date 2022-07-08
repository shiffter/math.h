#include "../s21_math.h"


/*int main() {
    printf("my %Lf\nlib %lf", s21_pow(s21_minf, 2), pow(s21_minf, 2));
return 0;
}
*/

long double s21_pow(double value, double exp) {
    long double result = 0;
    if (s21_isinf(value) == 1) {
        result = s21_inf;
    } else if (s21_isinf(value) == -1) {
        if ((exp / (int)exp == 1.0) && (int)exp % 2 == 1) {
            result = s21_minf;
        } else {
            result = s21_inf; }
    } else if (s21_isnan(value)) {
        result = s21_nan;
    } else {
        result = s21_exp(exp * s21_log(value)); 
    }
return result;
}
