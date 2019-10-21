#include<stdio.h>
#include<stdlib.h>

float Interest[5] = { 5000,5000,5000,5000,5000 };
float Rate[5] = { 0.1 ,0.105 ,0.11 ,0.115 ,0.12 };
int main() {

	int c,y;
	for (c = 0; c < 5; c++) {
		for (y = 0; y < 15; y++) {

			switch (c) {

			case 0:
				Interest[c] += Interest[c] * Rate[c];
				break;
			case 1:
				Interest[c] += Interest[c] * Rate[c];
				break;
			case 2:
				Interest[c] += Interest[c] * Rate[c];
				break;
			case 3:
				Interest[c] += Interest[c] * Rate[c];
				break;
			case 4:
				Interest[c] += Interest[c] * Rate[c];
				break;
			default:
				break;

			}
			

		}
	}

	for (c = 0; c < 5; c++) {

		printf("The investment is $5000, rate is %.1f%%. For 15 years, the total is $%.1f\n\n", Rate[c] * 100, Interest[c]);

	}
	


	system("pause");
	return 0;

}