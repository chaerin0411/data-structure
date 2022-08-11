#define MAXDATA 100
float diff(float* a, int n);
#include <stdio.h>
main()
{
	float xarray[MAXDATA];
	int n, k;
	printf("Input the number of data to be processed : ");
	scanf("%d", &n);
	printf("Enter %d reals : ", n);
	for (k = 0; k < n; k++)
		scanf("%f", xarray + k); // scanf("%f", &xarray[k]);
	printf("The rage of data value = %.2f\n", diff(xarray, n));
}

float diff(float a[], int n)
{
	float max = a[0], min = a[0];
	int i;
	for (i = 1; i < n; i++) {
		if (a[i] > max) max = a[i];
		if (a[i] < min) min = a[i];
	}
	return max - min;
}