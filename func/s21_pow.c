#include "../s21_math.h"


int main() {

    printf("my = %Lf, lib = %lf\n", s21_pow(3.151654321, 4.312345), pow(3.151654321, 4.312345));
return 0;
}


long double s21_pow(double value, double exp) {
    long double result = 0;
    
    result = s21_exp(exp * s21_log(value));

return result;
}
