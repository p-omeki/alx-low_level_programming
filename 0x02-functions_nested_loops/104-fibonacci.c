#include <stdio.h>

void print_fibonacci(int count) {
    int first = 1;
    int second = 2;
    int i;

    printf("%d, %d", first, second);  // Print the first two numbers

    for (i = 3; i <= count; i++) {
        int next = first + second;
        printf(", %d", next);

        first = second;
        second = next;
    }

    printf("\n");
}

int main(void) {
    print_fibonacci(98);

    return 0;
}

