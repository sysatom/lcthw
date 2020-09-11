#include <stdio.h>

int main(int argc, char *argv[]) {
    int bugs = 100;
    double bug_rate = 1.2;

    printf("%d, %f\n", bugs, bug_rate);

    long universe_of_defects = 1000000L * 1024L * 1024L * 1024L;
    printf("%ld\n", universe_of_defects);

    double expected_bugs = bugs * bug_rate;
    printf("%f\n", expected_bugs);

    double part_of_universe = expected_bugs / universe_of_defects;
    printf("%e\n", part_of_universe);

    char nul_byte = '\0';
    int care_percentage = bugs * nul_byte;
    printf("%d%%\n", care_percentage);

    return 0;
}