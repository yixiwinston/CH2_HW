#include<stdio.h>
#include<stdlib.h>



int main() {

	int sl = 0;

	printf("Enter sales in dollars: ");
	scanf_s("%d", &sl);

	while (sl >= 0) {
		printf("Salary is: %d\n\n", 200 + sl * 9 / 100);

		printf("Enter sales in dollars: ");
		scanf_s("%d", &sl);
	}

	if (sl != -1)
		printf("you are FIRED!!!\n\n");

	system("pause");
	return 0;

}