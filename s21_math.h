#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define pi 3.14159265359
#define s21_inf 1.0/0.0
#define s21_nan 0.0/0.0
#define s21_isinf(x) __builtin_isinf_sign(x)
#define s21_isnan(x) __builtin_isnan(x)
#define inff log(0)

int s21_abs(int);
long double s21_sin(double);
long double s21_fact(double);
double s21_pow(double, double);
