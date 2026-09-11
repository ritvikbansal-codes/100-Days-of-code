#include <stdio.h>

int main() {
    int num3, num2, sum;
    
    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &num3);
    printf("Enter second number: ");
    scanf("%d", &num2);
    
    // Calculate sum
    sum = num3 + num2;
    
    // Display result
    printf("Sum: %d\n", sum);
    
    return 0;
}