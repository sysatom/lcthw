#include <stdio.h>

int main(int argc, char *argv[]) {
    int areas[] = {10, 1, 2, 3};
    char name[] = "Zed";
    char full_name[] = {
        'Z', 'e', 'd',
        ' ', 'A', '.', ' ',
        'S', 'h', 'a', 'w', '\0'
    };

    printf("%ld\n", sizeof(int));
    printf("%ld\n", sizeof(areas));
    printf("%d, %d\n", areas[0], areas[1]);

    printf("%ld\n", sizeof(char));
    printf("%ld\n", sizeof(name));
    printf("%ld\n", sizeof(name) / sizeof(char));

    printf("%ld\n", sizeof(full_name));
    printf("%ld\n", sizeof(full_name) / sizeof(char));

    name[0] = 'a';

    printf("%s, %s\n", name, full_name);

    printf("%ld\n", sizeof(long));
    printf("%ld\n", sizeof(long long));

    return 0;
}