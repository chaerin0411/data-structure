#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct member {
	int id;
	char name[20];
	float score;
} example; // typedef struct member example;

void over40(example* a, int n);
example find_max(example* a, int n);

main()
{
	example onep, exmember[20];
	int i, n;

	printf("Input the number of data : ");
	scanf("%d", &n);

	for (i = 0; i < n; i++) {
		printf("데이터 입력 : ");
		scanf("%d %s %f", &exmember[i].id, exmember[i].name, &exmember[i].score);
	}
	over40(exmember, n);
	onep = find_max(exmember, n);

	printf("Information of the highest score student = %d : %s : %.2f\n", onep.id, onep.name, onep.score);
}

void over40(example a[], int n)
{
	int k;

	printf("List of high score students(over 4.0)\n");
	for (k = 0; k < n; k++)
		printf("%d -- %s\n", a[k].id, a[k].name);
}

example find_max(example a[], int n)
{
	int k, max_index;

	max_index = 0;

	for (k = 1; k < n; k++)
		if (a[k].score > a[max_index].score)
			max_index = k;

	return a[max_index];
}