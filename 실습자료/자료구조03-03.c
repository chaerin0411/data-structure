#include <stdio.h>
int main(void)
{
	int i, n, num, oddsum = 0, evensum = 0;
	printf("ó���� �������� ���� �Է��ϼ���: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("������ �Է��ϼ���: ");
		scanf("%d", &num);
		if (num % 2 == 0)
			oddsum += num;
		else
			evensum += num;
	}
	printf("oddsum = %d, evensum = %d", oddsum, evensum);
}