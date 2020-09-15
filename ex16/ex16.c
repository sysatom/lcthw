#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person
{
    char *name;
    int age;
    int height;
    int weight;
};

struct Person *Person_create(char *name, int age, int height, int weight) {
    struct Person *who = malloc(sizeof(struct Person));
    assert(who != NULL);

    who->name = name;
    who->age = age;
    who->height = height;
    who->weight = weight;

    return who;
}

void Person_destroy(struct Person *who) {
    assert(who != NULL);

    //free(who->name);
    free(who);
}

void Person_print(struct Person *who) {
    printf("%s\n", who->name);
    printf("%d\n", who->age);
    printf("%d\n", who->height);
    printf("%d\n", who->weight);
}

int main(int argc, char *argv[]) {
    struct Person *joe = Person_create("Joe Alex", 12, 60, 100);
    struct Person *frank = Person_create("Frank Blank", 23, 160, 120);

    printf("%p\n", joe);
    Person_print(joe);

    printf("%p\n", frank);
    Person_print(frank);

    joe->age += 20;
    joe->height += 2;
    joe->weight += 2;
    Person_print(joe);

    frank->weight += 10;
    Person_print(frank);

    Person_destroy(joe);
    Person_destroy(frank);

    return 0;
}
