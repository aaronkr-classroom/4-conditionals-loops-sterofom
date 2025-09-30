#include <stdio.h>

int factorial(int);

int main() {
	int num = 5, result = factorial(num);
	printf("%d! = %d", num, result);
	return 0;
}
int factorial(int num) {
	if (num <= 1) return 1;
	else return num * factorial(num - 1);

	/*int result = 1;
	for(int i=num; i >= 1; i--) {
		result = result * i;
	}
	return result;*/
}
