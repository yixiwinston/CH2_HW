#include<stdio.h>
#include<stdlib.h>

int a=0, b=0, c=0;

int main() {

	for (c = 1; c <= 500; c++) {
		for (a = 1; a <= 500; a++) {
			for (b = 1; b <= 500; b++) {

				if ((a * a + b * b) == (c * c)) {
					printf("sideA = %d\t sideB = %d\t sideC = %d\n",a,b,c);
				}

			}
		}
	}


	system("pause");
	return 0;

}