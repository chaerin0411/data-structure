#include <stdio.h>
int main(void)
{
	int data, pos_sum = 0, nega_sum = 0, count;
	for (count = 0; count < 50; count++) {
		printf("정수를 입력하세요: ");
		scanf("%d", &data);
		if (data > 0)
			pos_sum += data;
		else
			nega_sum += data;
	}
	printf("pos_sum = %d, nega_sum = %d", pos_sum, nega_sum);
}