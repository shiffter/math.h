#include "../s21_math.h"

int main() {
    printf("me = %Lf, lib %lf\n", s21_exp(35.3), exp(35.3));
return 0;
}

long double s21_exp(double arg){
    long double result = 1;

    long double upper = arg, lowwer = 1;
    long double t = arg;
 
    if (s21_isinf(arg) == -1) {
        result = 0.0;
    } else if (s21_isinf(arg) == 1) { 
        result = s21_inf;
    } else if (s21_isnan(arg)) {
        result = s21_nan;
    } else {
    for (double i = 2; i < 100000; i++) {
        result += t;        
        t *= arg / i;    
        }  
    }
return result; 
}
