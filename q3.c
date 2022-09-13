#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#pragma warning(disable:4996)

main() {
	int arrY[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int	arrX[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int	prodXY[10];

	for (int i = 0; i < 10; i++) {
		 prodXY[i] = arrY[i] * arrX[i];
	}

	for (int i = 0; i < 10; i++) {
		printf("arrY[%d]: %d ", i, arrY[i]);
	}
	printf("\n");
	for (int i = 0; i < 10; i++) {
		printf("arrX[%d]: %d ", i, arrX[i]);
	}
	printf("\n");
	for (int i = 0; i < 10; i++) {
		printf("prodXY[%d]: %d ", i, prodXY[i]);
	}
 }
