#include<stdio.h>
#include<stdlib.h>



int main() {

	float LP, R, D;
	
	printf("Enter loan principal(-1 to end): ");
	scanf_s("%f", &LP);

	while (LP != -1) {
		
		printf("Enter interest rate: ");
		scanf_s("%f", &R);

		printf("Enter term of the loan in days: ");
		scanf_s("%f", &D);

		printf("The interest charges is:$ %.2f \n\n",LP * R * D / 365);
		
		printf("Enter loan principal(-1 to end): ");
		scanf_s("%f", &LP);

	}

	system("pause");
	return 0;

}