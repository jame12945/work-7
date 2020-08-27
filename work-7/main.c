#include<stdio.h>
int triangle();
int square();
int i, j, x, y;

int triangle() {
	scanf_s("%d", &x);
	scanf_s("%d", &y);
	for (i = 1; i <= x; i++) {
		for (j = 1; j <= y; j++) {
			if (j >= 6 - i && j <= 4 + i)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
}
int square() {
	for (i = 1; i <= x; i++) {
		for (j = 1; j <= y; j++) {

			printf("*");

		}
		printf("\n");
	}
}
int main()//house
{

	triangle();
	square();
}