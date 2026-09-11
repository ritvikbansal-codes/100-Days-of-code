#include <stdio.h>
#include <math.h>

int main() {
    float principal, rate, time;
    float simpleInterest, compoundInterest;
    
    scanf("%f %f %f", &principal, &rate, &time);
    
    // Calculate Simple Interest: SI = (P * R * T) / 100
    simpleInterest = (principal * rate * time) / 100;
    
    // Calculate Compound Interest: CI = P * (1 + R/100)^T - P
    compoundInterest = principal * (pow(1 + rate / 100, time)) - principal;
    
    printf("Simple Interest=%.0f, Compound Interest=%.2f\n", simpleInterest, compoundInterest);
    
    return 0;
}
