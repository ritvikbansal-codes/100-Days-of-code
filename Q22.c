/* Q22: Find profit or loss percentage from cost and selling prices. */
#include <stdio.h>

int main(void)
{
	double cost_price, selling_price, percentage;

	scanf("%lf %lf", &cost_price, &selling_price);

	if (selling_price > cost_price) {
		percentage = (selling_price - cost_price) / cost_price * 100;
		printf("Profit %.0f%%\n", percentage);
	} else if (selling_price < cost_price) {
		percentage = (cost_price - selling_price) / cost_price * 100;
		printf("Loss %.0f%%\n", percentage);
	} else {
		printf("No Profit No Loss\n");
	}

	return 0;
}
