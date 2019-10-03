#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
	
	unsigned int inp; // 1010000010110000110000001101
	scanf("%x", &inp);
	int x1 = inp & 0x000000ff;
	int x2 = inp & 0x0000ff00;
	int x3 = inp & 0x00ff0000;
	int x4 = inp & 0xff000000;
	int out = (x1 << 8) | (x2 >> 8) | (x3 << 8) | (x4 >> 8);
	
	
	
	printf("%x\n",out);
}