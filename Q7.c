#include <stdio.h>

int main() {
    int a, b;
    
    scanf("%d %d", &a, &b);
    
    // Swap without third variable using addition/subtraction
    a = a + b;
    b = a - b;
    a = a - b;
    
    printf("After swap: %d %d\n", a, b);
    
    return 0;
}
