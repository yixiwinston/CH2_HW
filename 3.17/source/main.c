#include<stdio.h>
#include<stdlib.h>



int main() {

	int account = -2;
	float BB, Tup, Tdown, CL;


	printf("輸入帳戶號碼，輸入-1結束程式 Enter Account Number(-1 to end the work): ");
	scanf_s("%d", &account);

	while (account != -1) {

	printf("輸入起始帳戶金額 Enter beginning balance: ");
	scanf_s("%f", &BB);

	printf("輸入本次儲值金額 Enter total charge:" );
	scanf_s("%f", &Tup);

	printf("輸入本次付款金額 Enter total credits: ");
	scanf_s("%f", &Tdown);

	printf("輸入卡片金額上限 Enter credit limit: ");
	scanf_s("%f", &CL);

	if (Tup - Tdown + BB > CL) {

		float NB = BB + Tup - Tdown;

		printf("帳戶 Account:\t%d\n",account);
		printf("信用額度上限 Credits limit:\t%.2f\n",CL);
		printf("金額額值 Balance:\t%.2f\n",NB);
		printf("卡片上限已超出 Credits limit exceeded!!!\n");

		

	}

		printf("\n\n輸入帳戶號碼，輸入-1結束程式 Enter Account Number(-1 to end the work): ");
		scanf_s("%d", &account);
	
	}
	
	system("pause");
	return 0;
}