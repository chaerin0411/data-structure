#include <stdio.h>
int main(void)
{
	int n1, n2, n3, large = 0;
	printf("정수 세 개를 입력하세요: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	if (n1 > n2)
		large = n1;
	else
		large = n2;
	if (n3 > large)
		large = n3;
	printf("최대값 = %d", large);
}