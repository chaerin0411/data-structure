#include <stdio.h>
int main(void)
{
	int n, i, x, allzero = 1;
	long mult = 1;

	printf("Enter the number of to be processed : ");
	scanf("%d", &n);
	for (i = 0; i < n; i++) {
		scanf("%d", &x);
		if (x != 0) {
			mult *= x;
			allzero = 0;
		}
	}
	if (allzero) mult = 0;
	printf("Anser = %d\n", mult);
}