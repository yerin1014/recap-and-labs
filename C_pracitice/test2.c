#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int age;
	printf("나이를 입력하시오");
	scanf("%d", &age);

	if (age >= 20) {
		printf("성인");
	}
	else if (age < 8) {
		printf("어린이");
	}
	else {
		printf("청소년");
	}
}