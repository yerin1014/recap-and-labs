#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int num1;
	int num2;

	printf("첫 번째 숫자 입력: ");
	scanf("%d", &num1);
	printf("두 번째 숫자 입력: ");
	scanf("%d", &num2);

	printf("%d", (num1 > num2) ? num1 - num2 : num2 - num1);
}