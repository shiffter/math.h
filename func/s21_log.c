#include "../s21_math.h"

/*int main() {


    printf("my %Lf, lib %lf", s21_log(0), log(0));
return 0;
}

*/
long double s21_log(double x) {

    double result = 0;
    double comp = 0;
    int sign = 1;
    int degree = 0;
    if (s21_isinf(x) == -1 || s21_isinf(x) == 1) {
        result = s21_inf;
    } else if (x == 0) {
        result = s21_minf;    
    } else if (s21_isnan(x) || x < 0) {
        result = s21_nan;
    } else {
        for (; x >= s21_e; x /= s21_e, degree++) continue;
        for (int i = 0; i < 100; i++) {
            comp = result;
            result = comp + 2 * (x - s21_exp(comp)) / (x + s21_exp(comp));    
        }
        result += degree;
            
    }
return result;
}


/*            while (x >= 1) {
            x = x/2;
            degree++;
            }
        for (double i = 1; i <= 200; i++) {
            result += sign * pow(x-1, i)/i;
            sign = -sign;
        }
    result += degree * log_2;*/
