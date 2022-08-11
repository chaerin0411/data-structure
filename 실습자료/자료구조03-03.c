#include <stdio.h>
int main(void)
{
	int i, n, num, oddsum = 0, evensum = 0;
	printf("처리할 데이터의 수를 입력하세요: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("정수를 입력하세요: ");
		scanf("%d", &num);
		if (num % 2 == 0)
			oddsum += num;
		else
			evensum += num;
	}
	printf("oddsum = %d, evensum = %d", oddsum, evensum);
}