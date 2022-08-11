#include <stdio.h>
int main(void)
{
	int lcv, n, data, pnum = 0;
	double pavg = 0;
	printf("How many data to be process? : ");
	scanf("%d", &n);
	for (lcv = 0; lcv < n; lcv++) {
		printf("Input data : ");
		scanf("%d", &data);
		if (data > 0) {
			pnum++;
			pavg += data;
		}
	}
	printf("The number of positive numbers : %d\n", pnum);
	printf("Average of positive numbers = %.2f", pavg / pnum);
}