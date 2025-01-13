#include <stdio.h>

struct Address {
    char street[50];
    char city[20];
    char state[3];
    int zip;
};

struct Person {
    char name[50];
    int age;
    struct Address address;
};

int main() {
    struct Person p;

    printf("Size of Person: %lu bytes\n", sizeof(p));
    printf("Size of Address: %lu bytes\n", sizeof(p.address));
    printf("Size of street: %lu bytes\n", sizeof(p.address.street));

    return 0;
}