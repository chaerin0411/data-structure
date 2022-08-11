#include <stdio.h>
int main(void)
{
	int num, size = 0, max = 0;
	printf("데이터를 입력하세요: \n");
	scanf("%d", &num);
	while (num > 0) {
		size++;
		if (num > max)
			max = num;
		scanf("%d", &num);
	}
	printf("데이터의 수: %d\n", size);
	if (size == 0)
		printf("No data!!\n");
	else
		printf("최대값 = %d\n", max);		
}