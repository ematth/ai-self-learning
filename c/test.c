#include <stdio.h>

/* Fibonacci: Obtain the Nth fibonacci number*/

/* Array to memoize fibonacci calls*/
int fib_memo[100] = {0};

int lower(int c) {
    if ('A' <= c <= 'Z') {
        return c + ('a' - 'A');
    }
    return c;
}

int main() {
    char c = 'B';
    printf("Lowercase of %c is %c\n", c, lower(c));
}   