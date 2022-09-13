#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#pragma warning(disable:4996)

void main() {
	int num[30], count=0, c=0, r=0, even=0;
	int i, odd=0, total=0, small=0, a=0;

	for (i = 0; i < 30; i++) {
		num[i] = -50 + rand() % 100;
	}
	for (i = 0; i < 30; i++) {
		
		printf("%d ", num[i]);
		if (i == 9)
			printf("\n");
		if (i == 19)
			printf("\n");
	}
	printf("\n");
	printf("\n=========================================================\n");
	for (i = 0; i < 30; i++) {

		odd = num[i] % 2;
		
		if (odd >= 1 || odd == -1) {
			printf("%d ", num[i]);
			count++;
			if (count == 10)
				printf("\n");
		}
		
	}
	printf("\n");
	printf("\n==========================================================\n");
	for (i = 0; i < 30; i++) {

		odd = num[i] % 2;

		if (odd >= 1 || odd == -1) {
			printf("num[%d] ", i);
			c++;

			r = c % 10;
			if (r == 0)
				printf("\n");
		}
		
	}
	printf("\n");
	printf("\n=========================================================\n");
	count = 0;
	for (i = 0; i < 30; i++) {
		even = num[i] % 2;
		if (even == 0)
			count++;
	}
	printf("The nuber of even values > %d", count);
	printf("\n");
	printf("\n=========================================================\n");
	for (i = 0; i < 30; i++) {
		total += num[i];
	}
	printf("The sum of all values in the array > %d", total);
	printf("\n");
	printf("\n=========================================================\n");

	
	for (i = 0; i < 30; i++)
	{
		if (num[i] < small) {
			small = num[i];
			a = i;
		}
	
	}
	printf("The smallest value in the array is > %d  and its location in array > num[%d]", small, a);
	printf("\n\n");
}

