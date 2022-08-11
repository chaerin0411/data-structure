#include <stdio.h>
int main(void)
{
	int n, i, j, ssum = 0, temp1, temp2;
	long psum = 0;
	printf("Enter n: ");
	scanf("%d", &n);
	for (i = 1; i <= n; i++) {
		temp1 = 0;
		temp2 = 1;
		for (j = 1; j <= i; j++) {
			temp1 += j;
			temp2 *= j;
		}
		ssum += temp1;
		psum += temp2;
	}
	printf("ssum = %d\n", ssum);
	printf("psum = %d\n", psum);
}