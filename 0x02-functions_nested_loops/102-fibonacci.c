#include <stdio.h>

void print_fibonacci_numbers(int count) {
    int first = 1, second = 2;

    printf("%d, %d", first, second);

    for (int i = 2; i < count; i++) {
        int next = first + second;
        printf(", %d", next);

        first = second;
        second = next;
    }

    printf("\n");
}

int main(void) {
    int count = 50;

    print_fibonacci_numbers(count);

    return 0;
}

