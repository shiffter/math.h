#include "tests.h"
#include "../s21_math.h"


START_TEST(s21_exp_test) { 
    ck_assert_ldouble_eq_tol(s21_exp(-1), exp(-1), 1e-6);
    ck_assert_ldouble_nan(s21_exp(s21_nan));
    ck_assert_float_eq_tol(s21_exp(s21_pi), exp(s21_pi), 1e-6);
    ck_assert_ldouble_eq(s21_exp(35.3), exp(35.3));
    ck_assert_float_infinite(s21_exp(s21_inf));
    ck_assert_ldouble_nan(s21_exp(s21_minf));
} END_TEST


Suite *s21_Suite_exp() {
    Suite *s;
    
    s = suite_create("Exp Unit Test");

    TCase *tc1_s21_exp = tcase_create("test1_s21_exp");

    tcase_add_test(tc1_s21_exp, s21_exp_test);

    suite_add_tcase(s, tc1_s21_exp);

    return s;
}
