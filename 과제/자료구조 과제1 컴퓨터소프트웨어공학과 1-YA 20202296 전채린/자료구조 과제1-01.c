#include<stdio.h>
int main(void)
{
	int i, n = 5, tmp = 0, what = 0;
	for (i = 1; i <= n; i++) {
		tmp += i;
		printf("tmp = %d, ", tmp);
		what += tmp;
	}
	printf("\nwhat은 무엇일까요? : %d \n", what);
}