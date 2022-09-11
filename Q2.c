#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>

#pragma warning(disable:4996)

main() {
	char title[32] = "programming concepts and design";
	int i;

	for (i = 30; i >=0 ; i--) {
		printf("%c", title[i]);
	}
 }
