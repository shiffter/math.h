#include "../s21_math.h"

int main(){
  
/*double a = pow(2, 53), b = 2, s, z, t;
s = a + b; 
z = s - a;
t = b - z;

printf("t = %.70LF", t);
*/


//printf("num = %lf, degree = %d\n",num, degree );

    for (double i = 1.3; i <= 5; i += 0.35) 
        printf("lib_log=%lf, my_log=%Lf, i= %lf\n", log(i), s21_log(i), i);
//        printf("%lf\n", i);
//    printf("mid =%0.15Lf\n", mid_num(6, 24));
return 0;
}


long double s21_log(double x) {

    double result = 0;
    int sign = 1;
    int degree = 0;
    while (x > 1) {
        x = x/2;
        degree++;
        }
    for (int i = 1; i <= 20; i++) {
        result += sign * pow(x-1, i)/(double)i;
        sign = -sign;
//        printf("iter_res = %LF\n", result);
        }
    result += degree * log(2);
//    } else {*/
//        long double mid = 2 * mid_num(1, 4/x * 256);
//        result = s21_pi/(2.0 * mid_num(1.0, 4.0/(x * 256))) - 8.0 * 0.693147180559945;
//        result = s21_pi/mid - 8 * log(2); 
return result;
}


long double mid_num(double a, double g){
    long double a_0 = 0, g_0 = 0;
    int i = 0;
    while (i++ != 30) {
            a_0 = (a + g)/2;
            g_0 = sqrt(a * g);
            a = a_0;
            g = g_0;
//            printf("%lf\n", a);
            }
return (long double)a;
}   
