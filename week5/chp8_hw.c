#include <stdio.h>

int main()
{
	//Q1
	int result = -5;
	if (result < 0) result = result * -1;
	printf("%d\n", result);
	//Q2
	result = -5;
	result = (result < 0) ? result * -1 : result;
	printf("%d\n", result);
	//Q3
	result = 5;
	switch (result) {
	case 6:
		result = 0;
		break;
	case 5:
		result = 1;
	case 4:
		result = result * 10;
		break;
	}
	printf("%d\n", result);

}