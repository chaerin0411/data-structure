#include <stdio.h>
int main(void)
{
	int r, num;
	printf("�Ųٷ� ����� ���� �Է��ϼ���: ");
	scanf("%d", &num);
	while (num > 0) {
		r = num % 10;
		num = num / 10;
		printf("%d", r);
	}
}