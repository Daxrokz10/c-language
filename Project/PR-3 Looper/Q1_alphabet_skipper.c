#include <stdio.h>

int main() {
    char c = 'a';
    for (c; c <= 'z'; c+=3) {//c+3 to skip to the third alphabet
        printf(" %c ", c);
    }
}