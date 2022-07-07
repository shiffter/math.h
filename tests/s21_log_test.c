#include "tests.h"
#include "../s21_math.h"


START_TEST(s21_log_test) {
    ck_assert_double_eq(log(s21_inf), s21_log(s21_inf));
}


Suite *s21_Suite_log() {
    Suite *s;
    
    s = suite_create("Insert Unit Test");

    TCase *tc1_s21_log = tcase_create("test1_s21_log");

    tcase_add_test(tc1_s21_log, s21_log_test);

    suite_add_tcase(s, tc1_s21_log);

    return s;
}
