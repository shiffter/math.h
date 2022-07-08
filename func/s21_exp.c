#include "../s21_math.h"

long double s21_exp(double arg){
    long double res = 1;
    for (double i = 1; i < 20; i++) {
        res += s21_intpow(arg, i)/s21_fact(i);
        }
return res; 
}


