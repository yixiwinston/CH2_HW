#include<stdio.h>
#include<stdlib.h>



int main() {

//==================Function1===================
	int i,j;

	printf("(1)\n");

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {
			
			
			if (j > i) {
				if (j != 9) {
					continue;
				}
				else {
					printf("\n");
				}
			}
			else {
				printf("*");
			}

		}
	}
//===================Function2===================

	printf("\n(2)\n");

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {


			if (j > ( 9 - i)) {
				if (j != 9) {
					continue;
				}
				
			}
			else {
				printf("*");
			}

			if (j == 9) {
				printf("\n");
			}

		}
	}

//=================Function3======================

	printf("\n(3)\n");

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {


			if (i > j) {
				printf(" ");			//�p�G�o�̤��L"%s"�令 continue;�A���G�|�ܦ�(2)
			}
			else {
				printf("*");
			}

			if(j == 9) {
			printf("\n");

			}

		}
	}

//=================Function4=======================

	printf("\n(4)\n");

	for (i = 0; i < 10; i++) {
		for (j = 0; j < 10; j++) {


			if (j > (9 - i)) {
				printf(" ");
			}
			else {
				printf("*");
			}

			if (j == 9) {
				printf("\n");
			}

		}
	}



	system("pause");
	return 0;

}