#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	int mask = 2147483440; 
	int inp1; //= 44; 101100
	int inp2; //= 207; 11001111
	scanf("%x %x", &inp1, &inp2);
	int x1 = inp1 & 15;
	int x2 = inp2 & 192;
	mask = mask | x1;
	mask = mask | x2;
	printf("%x\n", mask);
}