#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define s21_pi 3.14159265358979323846
#define s21_e 2.71828182845904523536
#define s21_inf 1.0/0.0
#define s21_minf -1.0/0.0
#define s21_nan 0.0/0.0
#define s21_isinf(x) __builtin_isinf_sign(x)
#define s21_isnan(x) __builtin_isnan(x)


int s21_abs(int);
long double s21_sin(double);
long double s21_fact(double);
double s21_pow(double, double);
long double s21_log(double);
long double mid_num(double, double);
