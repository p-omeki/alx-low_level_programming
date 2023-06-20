#include <stdio.h>

int main(void) {
    int previous = 1;
    int current = 2;
    int next = 0;
    int sum = 2;  // Initialize sum with the initial even value

    while (current <= 4000000) {
        next = previous + current;
        if (next % 2 == 0) {
            sum += next;
        }
        previous = current;
        current = next;
    }

    printf("%d\n", sum);

    return 0;
}

