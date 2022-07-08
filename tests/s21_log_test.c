#include "tests.h"
#include "../s21_math.h"


START_TEST(s21_log_test) { 
//    for (double i = -1; i < 32; i += 0.01)
        ck_assert_float_eq_tol(s21_log(-1), log(-1), 1e-6);
} END_TEST


Suite *s21_Suite_log() {
    Suite *s;
    
    s = suite_create("Log Unit Test");

    TCase *tc1_s21_log = tcase_create("test1_s21_log");

    tcase_add_test(tc1_s21_log, s21_log_test);

    suite_add_tcase(s, tc1_s21_log);

    return s;
}
