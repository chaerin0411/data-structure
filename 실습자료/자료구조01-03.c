#include <stdio.h>
int main(void)
{
	int lcv, n, price = 0, total_price = 0;
	double rate;
	printf("물건의 개수를 입력하세요 : ");
	scanf("%d", &n);
	for(lcv = 0; lcv < n; lcv++) {
		printf("가격과 할인률을 입력하세요 ex) 15000 0.2 : \n");
		scanf("%d %lf", &price, &rate);
		total_price += (price * (1 - rate));
	}
	printf("Total price = %d\n", total_price);
}