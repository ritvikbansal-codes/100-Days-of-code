 #include <stdio.h>

int main(void)
{
	int number;
	unsigned long long factorial = 1;

	scanf("%d", &number);

	for (int i = 2; i <= number; i++) {
		factorial *= i;
	}

	printf("%llu", factorial);
	return 0;
}

