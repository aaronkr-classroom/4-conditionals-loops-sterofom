#include <stdio.h>

int main()
{

	int year = 2025, mth = 12, day = 31;

	day++;

	if (day > 31) {
		mth++;
		day = 1;
		if (mth > 12) {
			year++;
			mth = 1;
		}
	}
	printf("date : %d년 %d월 %d일\n", year, mth, day);
	return 0;
}