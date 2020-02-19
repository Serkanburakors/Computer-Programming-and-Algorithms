#include <stdio.h>
#define DAYSPERMONTH 2
#define SALEPER 5
#define PROD 6
void Table(int[][PROD]);


int main()
{
	int day, salesperson, product;
	int sales;

	int totalSales[SALEPER][PROD] = { {0} };

	for (day = 1; day <= DAYSPERMONTH; day++)
	{
		for (salesperson = 1; salesperson < SALEPER; salesperson++) {
			printf("\nEnter product details of day %d for salesperson %d\n", day, salesperson);
			for (product = 1; product < PROD; product++) {
				printf("Sales of product %d: ", product);
				scanf_s("%d", &sales);
				totalSales[salesperson][product] += sales;
			}
		}
	}
	Table(totalSales);
	return 0;
}
void Table(int sales[][PROD]){
	printf("\n=== Sales Information table for the last %d days ===\n\n", DAYSPERMONTH);
	printf("SP No\tProd 1\tProd 2\tProd 3\tProd 4\tProd 5\t TOTAL\n");

	int salesperson, product;
	int prodTotals[PROD] = { 0 };
	int salesPersonTotal = 0;
	int allSales = 0;

	for (salesperson = 1; salesperson < SALEPER; salesperson++)
	{
		salesPersonTotal = 0;

		for (product = 1; product < PROD; product++)
		{
			prodTotals[product] += sales[salesperson][product];
			salesPersonTotal += sales[salesperson][product];
		}

		allSales += salesPersonTotal;

		printf("%5d", salesperson);

		for (product = 1; product < PROD; product++)
		{
			printf("\t%6d", sales[salesperson][product]);
		}
		printf("\t%6d\n", salesPersonTotal);

	}

	printf("\nTOTAL");
	for (product = 1; product < PROD; product++)
	{
		printf("\t%6d", prodTotals[product]);
	}

	printf("\t%6d\n", allSales);
}