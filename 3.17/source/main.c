#include<stdio.h>
#include<stdlib.h>



int main() {

	int account = -2;
	float BB, Tup, Tdown, CL;


	printf("��J�b�ḹ�X�A��J-1�����{�� Enter Account Number(-1 to end the work): ");
	scanf_s("%d", &account);

	while (account != -1) {

	printf("��J�_�l�b����B Enter beginning balance: ");
	scanf_s("%f", &BB);

	printf("��J�����x�Ȫ��B Enter total charge:" );
	scanf_s("%f", &Tup);

	printf("��J�����I�ڪ��B Enter total credits: ");
	scanf_s("%f", &Tdown);

	printf("��J�d�����B�W�� Enter credit limit: ");
	scanf_s("%f", &CL);

	if (Tup - Tdown + BB > CL) {

		float NB = BB + Tup - Tdown;

		printf("�b�� Account:\t%d\n",account);
		printf("�H���B�פW�� Credits limit:\t%.2f\n",CL);
		printf("���B�B�� Balance:\t%.2f\n",NB);
		printf("�d���W���w�W�X Credits limit exceeded!!!\n");

		

	}

		printf("\n\n��J�b�ḹ�X�A��J-1�����{�� Enter Account Number(-1 to end the work): ");
		scanf_s("%d", &account);
	
	}
	
	system("pause");
	return 0;
}