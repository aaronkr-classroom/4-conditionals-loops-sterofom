#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void check369(int);

int main()
{
	int num = 0;
	printf("369게임 환영합니다\n");
	printf("수를 입력해주세요: ");
	scanf("%d", &num);
	check369(num);

	return 0;
}
void check369(int num) {
	for (int i = 1; i <= num; i++) {
		int bool = 0;
		int tmp = num;

		while (tmp > 0) {
			int digit = tmp % 10;
			switch (digit) {
			case 3:
			case 6:
			case 9:
				bool = 1;
			}
			tmp = tmp / 10;
		}
		if (bool) printf("짝!");
		else printf("%d", num);

		
	}
}
