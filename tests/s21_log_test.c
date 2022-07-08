#include "tests.h"
#include "../s21_math.h"


START_TEST(s21_log_test) { 
    ck_assert_float_eq_tol(s21_log(0.000001), log(0.000001), 1e-6);
    ck_assert_float_eq_tol(s21_log(5.34), log(5.34), 1e-6);
    ck_assert_float_eq_tol(s21_log(299.475632), log(299.475632), 1e-6);


    ck_assert_float_nan(s21_log(-1));
    ck_assert_ldouble_nan(s21_log(s21_nan));
    ck_assert_ldouble_infinite(s21_log(s21_inf));
    ck_assert_ldouble_infinite(s21_log(s21_minf));


} END_TEST


Suite *s21_Suite_log() {
    Suite *s;
    
    s = suite_create("Log Unit Test");

    TCase *tc1_s21_log = tcase_create("test1_s21_log");

    tcase_add_test(tc1_s21_log, s21_log_test);

    suite_add_tcase(s, tc1_s21_log);

    return s;
}
