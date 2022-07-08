#include "tests.h"

int main() {
    int no_failed1 = 0;

    Suite *s1;

    SRunner *runner1;
    
    s1 = s21_Suite_log();
    runner1 = srunner_create(s1);
    srunner_set_fork_status(runner1, CK_NOFORK);
    srunner_run_all(runner1, CK_NORMAL);
    no_failed1 = srunner_ntests_failed(runner1);
    srunner_free(runner1);

    int failures = (!no_failed1);
return (failures == 0) ? EXIT_SUCCESS : EXIT_FAILURE;
}


