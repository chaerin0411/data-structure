#include <stdio.h>
int main(void)
{
	float cel, fah;
	int n = 0;

	printf("¼·¾¾¿Âµµ : ");
	scanf("%f", &cel);

	while (cel > -50) {
		fah = cel * (9 / 5.0) + 32;
		printf("È­¾¾¿Âµµ : %.2f\n", fah);
		n++;
		printf("¼·¾¾¿Âµµ : ");
		scanf("%f", &cel);
	}
	printf("%d data processed ...\n", n);
}