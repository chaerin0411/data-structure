#include <stdio.h>
typedef struct member {
	int id;
	char name[20];
	float score;
} example;

void over40(example *a, int n);
example find_max(example *a, int n);

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