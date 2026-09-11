// Calculate the library fine based on the number of late days.
#include <stdio.h>

int main(void)
{
	int days;
	int fine = 0;

	scanf("%d", &days);

	if (days > 30) {
		printf("Membership Cancelled\n");
		return 0;
	}

	if (days > 20) {
		fine += (days - 20) * 6;
		days = 20;
	}
	if (days > 10) {
		fine += (days - 10) * 4;
		days = 10;
	}
	fine += days * 2;

	printf("Fine ₹%d\n", fine);
	return 0;
}
