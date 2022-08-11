#include <stdio.h>
main()
{
	char tname[][10] = { "Susan", "Hellen", "Mike" };
	int i, j, ctable[4][3], cnum, total = 0;
	printf("This is English Academy.\n");
	printf("There are three teachers : %s %s %s\n", tname[0], tname[1], tname[2]);
	for (i = 0; i < 4; i++) {
		printf("Enter the class size for %d : ", i + 1);
		for (j = 0; j < 3; j++)
			scanf("%d", &ctable[i][j]);
	}
	for (j = 0; j < 3; j++) {
		cnum = 0;
		for (i = 0; i < 4; i++)
			cnum = cnum + ctable[i][j];
		printf("Student number of %s's class : %d\n", tname[j], cnum);
		total = total + cnum;
	}
	printf("The number of student in this Academy:%d\n", total);
}