#include <stdio.h>
#include <string.h>
main()
{
	char telbook[][2][30] = {
		"Kim Kyung sook", "674-1316",
		"Ro mee jin", "2645-1597",
		"Lee woo jin", "645-9578",
		"Kim min sook", "264-9578",
		"Ko cheol", "689-1285",
		"Kang min kook", "365-1258",
		"Park seok", "369-4859",
		"Do kyung min", "659-4859",
		"Rhee Hyunsook", "010-9012-1911",
		"Lee Dawon", "010-212-3737",
		"", ""
	};
	char name[30];
	int i = 0, num;

	while (strcmp(telbook[i][0], "")) {
		printf("%d : %s\n", i + 1, telbook[i][0]);
		i++;
	}
	printf("===========================================\n");
	printf("Enter the number(1-%d) : ", i);
	scanf("%d", &num);
	printf("Telephone number of %s : %s", telbook[num - 1][0], telbook[num - 1][1]);
}