/*
*  Date: 2022-09-25
*  Author: Chansu Park
*  Homework #1
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int num = 0, rnum = 0, lnum=0, unum=101;

int main(int argc, char* argv[]) {
	srand(time(NULL));
	rnum = rand() % 100;
	printf("Random number between 1 and 100 was generated.\nLet's guess!\n");
	do {
		printf("Enter a number (lower: %d, upper: %d)> ", lnum, unum);
		scanf("%d", &num);
		if (rnum > num && num > 0) {
			printf("The target number is greater than yours.\n");
			lnum = num;
		}
		else if (rnum < num && num < 101) {
			printf("The target number is smaller than yours.\n");
			unum = num;
		}
		else printf("Enter a number between %d and %d.\n", lnum, unum);
	} while (rnum != num);
	printf("congratulations!\nThe target number was %d.", rnum);
	return 0;
}