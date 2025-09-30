#include <stdio.h>
/*
1.조건문
2.반복문
*/
void print_calendar(int);
int main()
{


	int chuseok_mth = 10;
	int chuseok = 6;
	int this_mth = 9;
	int today = 30;
	//조건문 (if, switch)
	if(this_mth == chuseok_mth) {
		printf("chuseok is coming!");
	}
	else {
		printf("no chuseok yet");
	}
	//반복문 (for, while, do while)
	for (int i = today; i < 31;i++) {
		printf("today is %d월 %d일!", this_mth,today);
	}
	
	print_calendar(this_mth);

	return 0;
}
void print_calendar(int this_mth) {
	int short_mth = 2,
		mid_mth_1 = 9,
		mid_mth_2 = 4,
		mid_mth_3 = 6,
		mid_mth_4 = 11,
		days;
	switch (this_mth) {
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
	case 2:
		days = 28;break;
	case 9:
	case 4:
	case 6:
	case 11:
		days = 30;break;
	default:
		printf("err_not a month");
		return;
	}
	printf("\n*** %d월 ***\n",this_mth);
	for (int i = 1; i <= days; i++) {
		printf("%d\t", i);
		if (i % 7 == 0) {
			printf("\n");
		}
	}
}
