#include <stdio.h>

int main()
{
	int x = 1;
	int i;
	int Stones;
	
	printf("Enter Number of Stones Required : ");
	scanf("%d", &Stones);

	while (Stones <= 0) {
		while (x <= Stones) {
			printf("%d\n", x);
			x = x << 1;
		}
		Stones = Stones - x;
	}
	return 0;
}
