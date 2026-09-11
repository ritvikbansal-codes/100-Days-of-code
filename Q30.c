 #include <stdio.h>

int main(void)
{
	long long number, reversed = 0;

	scanf("%lld", &number);

	while (number != 0) {
		reversed = reversed * 10 + number % 10;
		number /= 10;
	}

	printf("%lld", reversed);
	return 0;
}
