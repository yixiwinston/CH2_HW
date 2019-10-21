#include<stdio.h>
#include<stdlib.h>



int main() {

	int hrs;
	float r,S;

	printf("Enter # of hours worked(-1 to end):");
	scanf_s("%d",&hrs);

	while (hrs >= 0) {

		printf("Enter hourly of rate of the worker($00.00):");
		scanf_s("%f", &r);
		
		if (hrs > 40) {
			S = 40 * r;
			S += (hrs - 40) * (r * 1.5);
		}
		else
			S = hrs * r;

		printf("Salary is :$%.2f\n\n", S);

		printf("Enter # of hours worked(-1 to end):");
		scanf_s("%d", &hrs);
	}


	system("pause");
	return 0;

}