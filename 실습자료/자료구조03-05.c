#include <stdio.h>
int main(void)
{
	int i, n, score, max = 0;
	float avg = 0;
	printf("처리할 데이터의 수를 입력하세요: ");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		printf("%d개의 성적 데이터를 입력하세요: ", n);
		scanf("%d", &score);
		avg += score;
		if (score > max)
			max = score;
	}
	printf("평균: %.2f\n", avg / n);
	printf("최대성적: %d\n", max);
}