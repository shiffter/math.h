#include "../s21_math.h"


/*int main() {
    printf("my =%Lf\nlib=%f", s21_acos(-0.149005), acos(-0.149005));
//    printf("myyy =%Lf\nlib=%f", s21_acos(), acos(-1, 3));

return 0;
}*/


long double s21_acos(double x) {
    long double result;
    if (s21_isinf(x) == 1)
        result = s21_inf;
    else if (s21_isinf(x) == -1)
        result = s21_minf;
    else if (s21_isnan(x) == 1 || fabs(x) > 1.0)
        result = s21_nan;
    else if (x == 1)
        result = 0.0;
    else if (x == -1)
        result = s21_pi;
    else if (x < 0)
        result = s21_pi - acos(fabs(x));
    else { 
        long double sqq = s21_sqrt(1.0 - (x*x)) / x;
        result = s21_atan(sqq); 
        }
return result;
}
