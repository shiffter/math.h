#include "../s21_math.h"


int main() {
    printf("my %0.8Lf, lib %0.8lf\n", s21_sqrt(s21_nan), sqrt(s21_nan));

return 0;
}


long double s21_sqrt(double x) {
    long double result;
    if (s21_isinf(x) == -1) {
        result = s21_nan;
     } else {   result = s21_pow(x, 0.5);   }
    
return result;
}
