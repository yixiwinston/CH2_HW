#include<stdio.h>
#include<stdlib.h>



int main() {

	int EN = -2 ,hrs2,I4,A4;
	float HR2,S2,gross3;

	while (EN != -1) {

		printf("Enter the Employee Number(-1 to end): ");
		scanf_s("%d", &EN);

		switch (EN) {
		case 1:
			printf("The Manager will receive a fixed weekly salary!!!\n\n");
			break;
		case 2:
			printf("Enter # of hours worked:");
			scanf_s("%d", &hrs2);
			printf("Enter hourly of rate of worker($00.00):");
			scanf_s("%f",&HR2);

			if (hrs2>40) {
				S2 = (40 * HR2) + ((hrs2 - 40)* (1.5 * HR2));
			}
			else{

				S2 = hrs2 * HR2;
			}
				printf("The hourly worker will receive %.2f\n\n",S2);

			break;
		case 3:
			printf("Enter sales in dollar($00.00):");
			scanf_s("%f",&gross3);

			printf ("Commission worker's Salary is %.2f\n\n", 250 + 0.057 * gross3);

			break;
		case 4:
			printf("What item did you sell?\n\t (1) Apple \n\t (2) Ball \n\t (3) Cheese \n\t (4) Duck\n");	//A10,B15,C20,D25
			scanf_s("%d",&I4);
			switch (I4) {
				case 1:
					printf("Enter the amount:");
					scanf_s("%d", &A4);
					printf("The pieceworker's salary is %d\n\n", A4 * 10);
				break;
				case 2:
					printf("Enter the amount:");
					scanf_s("%d", &A4);
					printf("The pieceworker's salary is %d\n\n", A4 * 15);
				break;
				case 3:
					printf("Enter the amount:");
					scanf_s("%d", &A4);
					printf("The pieceworker's salary is %d\n\n", A4 * 20);
				break;
				case 4:
					printf("Enter the amount:");
					scanf_s("%d", &A4);
					printf("The pieceworker's salary is %d\n\n",A4 * 25);
				break;

			}


			break;

		}

	}

	system("pause");
	return 0;

}