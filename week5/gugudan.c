#include <stdio.h>

void dan(int);

int main()
{
	for (int d = 1; d <= 9; d++) {
		printf("*** %d단 ***\n", d);
		for (int i = 1; i <= 9; i++) {
			printf("%d * %d = %d\n", d, i, d * i);
			//dan(d);
		}
		printf("\n");
	}
	return 0;
}

void dan(int step) {
	for (int i = 1; i <= 9; i++) {
		printf("%d * %d = %d\n", step, i, step * i);

	}
}