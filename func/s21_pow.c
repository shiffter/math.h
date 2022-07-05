#include "../s21_math.h"
#include <math.h>


int main() {
    printf("val = %f\n", pow(2, -2.14));
return 0;
    }


double s21_pow(double value, double exp) {
    double result = 1;
    for (int i = 1; i <= exp; i++)
        result *= value;
return result;
}
