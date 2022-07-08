#include "../s21_math.h"

int main() {
    printf("me = %Lf, lib %lf\n", s21_exp(1), exp(1));
return 0;
}


long double s21_exp(double arg){
    long double result = 1, t;

    long double upper = arg*arg, lowwer = 2;
 
    if (s21_isinf(arg) == -1) {
        result = 0.0;
    } else if (s21_isinf(arg) == 1) { 
        result = s21_inf;
    } else if (s21_isnan(arg)) {
        result = s21_nan;
    } else {
    for (double i = 3; i < 1000; i++) {
        t = upper / lowwer;
        result += t;
        upper *= arg;
        lowwer *= i;
        
//        result  += upper / lowwer; 
//        printf("low %Lf, upp = %Lf result %Lf\n", lowwer ,upper, result );
        }     
    }
return result; 
}
