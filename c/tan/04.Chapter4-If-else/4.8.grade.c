#include <stdio.h>

int main(void)
{
	int score;
	char grade;

	printf("Please enter score: ");
	scanf("%d", &score);
	if (score > 100) {
		printf("score error!\n");
		return -1;
	}

	grade = '*';
	if (score >= 90 && score <= 100)
		grade = 'A';
	if (score >= 80 && score < 90)
		grade = 'B';
	if (score >= 70 && score < 80)
		grade = 'C';
	if (score >= 60 && score < 70)
		grade = 'D';
	if (score >= 0 && score < 60)
		grade = 'E';

	printf("%c\n", grade);

	return 0;
}





