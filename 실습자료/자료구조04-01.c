#include <stdio.h>
int main(void)
{
	float cel, fah;
	int n = 0;

	printf("�����µ� : ");
	scanf("%f", &cel);

	while (cel > -50) {
		fah = cel * (9 / 5.0) + 32;
		printf("ȭ���µ� : %.2f\n", fah);
		n++;
		printf("�����µ� : ");
		scanf("%f", &cel);
	}
	printf("%d data processed ...\n", n);
}