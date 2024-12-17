#include <stdio.h>
#include <assert.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);

int main() {
    // Test addition
    assert(add(2, 3) == 5);
    assert(add(0, 0) == 0);
    
    // Test subtraction
    assert(subtract(5, 3) == 2);
    assert(subtract(1, 1) == 0);
    
    // Test multiplication
    assert(multiply(4, 3) == 12);
    assert(multiply(0, 5) == 0);
    
    printf("All tests passed!\n");
    return 0;
}

