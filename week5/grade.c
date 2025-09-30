#include <stdio.h>

char if_grade(int);
char switch_grade(int);

int main()
{
	int score = 86;
	char grade= switch_grade(score);
	printf("Grade : %d%%, %c", score, grade);


	
	
}
//슬라이드 39 코드
char if_grade(int score) {
	if (score >= 90) return 'A';
	else if (score >= 80) return  'B';
	else if (score >= 70) return 'C';
	else if (score >= 60) return 'D';
	else return 'F';
}
char switch_grade(int score) {
	switch (score / 10) {
	case 10:
	case 9:
		return 'A';
	case 8:
		return 'B';
	case 7:
		return 'C';
	case 6:
		return 'D';
	default:
		return 'F';
	}
}
