#define DNUM 100
#include <stdio.h>
int pcount(int a[], int n);
double avg(int a[], int n);
int large(int a[], int n);
int small(int a[], int n);

main()
{
	int data[DNUM], k, n;

	printf("The number of data : ");
	scanf("%d", &n);
	printf("Enter %d data\n", n);
	for (k = 0; k < n; k++)
		scanf("%d", &data[k]);
	printf("The number of positive data : %d\n", pcount(data, n));
	printf("Average = %.2f\n", avg(data, n));
	printf("Maximun value = %d\n", large(data, n));
	printf("Minimun value = %d\n", small(data, n));
}

int pcount(int a[], int n)
{
	int j, result = 0;

	for (j = 0; j < n; j++)
		if (a[j] > 0) result++;
	return result;
}

double avg(int a[], int n)
{
	int i, sum = 0;

	for (i = 0; i < n; i++)
		sum = sum + a[i];
	return (double)sum / n;
}

int large(int a[], int n)
{
	int imax = a[0], i;

	for (i = 1; i < n; i++)
		if (a[i] > imax) imax = a[i];
	return imax;
}

int small(int a[], int n)
{
	int imin = a[0], i;

	for (i = 1; i < n; i++)
		if (a[i] < imin) imin = a[i];
	return imin;
}