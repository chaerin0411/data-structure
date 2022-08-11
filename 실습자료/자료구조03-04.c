#include <stdio.h>
int main(void)
{
	int r, num;
	printf("거꾸로 출력할 수를 입력하세요: ");
	scanf("%d", &num);
	while (num > 0) {
		r = num % 10;
		num = num / 10;
		printf("%d", r);
	}
}