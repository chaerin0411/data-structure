#include <stdio.h>
int main(void)
{
	int i, n, score, max = 0;
	float avg = 0;
	printf("ó���� �������� ���� �Է��ϼ���: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("%d���� ���� �����͸� �Է��ϼ���: ", n);
		scanf("%d", &score);
		avg += score;
		if (score > max)
			max = score;
	}
	printf("���: %.2f\n", avg / n);
	printf("�ִ뼺��: %d\n", max);
}