#include <stdio.h>
int main(void)
{
	int num, size = 0, max = 0;
	printf("�����͸� �Է��ϼ���: \n");
	scanf("%d", &num);
	while (num > 0) {
		size++;
		if (num > max)
			max = num;
		scanf("%d", &num);
	}
	printf("�������� ��: %d\n", size);
	if (size == 0)
		printf("No data!!\n");
	else
		printf("�ִ밪 = %d\n", max);		
}