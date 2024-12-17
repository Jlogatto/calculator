#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int main() {
    printf("Addition result: %d\n", add(5, 3));
    printf("Subtraction result: %d\n", subtract(5, 3));
    return 0;
}
