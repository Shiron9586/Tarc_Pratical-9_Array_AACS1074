#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#pragma warning(disable:4996)

void main() {
	int opt, num[10];
	int total=0;
	int vbad=0, bad=0, good=0, vgood=0, excellent=0;

	printf("Please enter the survey marks below :\n");
	printf("Question  Response(0-4)\n");

	for (int i = 0; i < 10;i++) {
		do {
			printf("  Q %d    : ", i + 1);
			scanf("%d", &num[i]);
			if (num[i] > 4 || num[i] < 0)
				printf("Please enter a value from(0-4)\n");
		} while (num[i] > 4 || num[i] < 0);
	}

	printf("\n\n");
	printf("RESULT\n");
	printf("========\n");
	printf("Response");  printf("       frequency\n");
	printf("_________");   printf("      _________\n");

	for (int i = 0; i < 10; i++) {
		switch (num[i]) {
		case 0:
			vbad++; break;
		case 1:
			bad++; break;
		case 2:
			good++; break;
		case 3:
			vgood++; break;
		case 4:
			excellent++; break;
		}
		total += num[i];
	}

	printf("0-Very Bad       %d\n", vbad);
	printf("1-Bad            %d\n", bad);
	printf("2-Very Good      %d\n", vgood);
	printf("3-Excellent      %d\n", excellent);
	printf("\n\n Total mark  = %d", total);

}

