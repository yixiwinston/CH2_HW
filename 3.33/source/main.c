#include<stdio.h>
#include<stdlib.h>



int main() {

	int length, breadth,i,j;
	while(1) {
		printf("Enter the length:");
		scanf_s("%d", &length);

		if (length == -1)
			break;

		printf("Enter the breadth:");
		scanf_s("%d", &breadth);

		for (i = 1; i <= length; i++) {
			for (j = 1; j <= breadth; j++) {

				if (i == 1 || i == length || j == 1 || j == breadth) {
					putchar('*');
				}
				else
					putchar(' ');

				if (breadth == j)
					putchar('\n');
			}


		}
	
	} 


	puts("\n");

	system("pause");
	return 0;

}