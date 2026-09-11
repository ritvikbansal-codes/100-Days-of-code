 #include <stdio.h>

int main(void)
{
	int first, second, temp;

	scanf("%d %d", &first, &second);

	temp = first;
	first = second;
	second = temp;

	printf("After swap: %d %d\n", first, second);

	return 0;
}
