#include <stdio.h>
int factorial(int);

int main(void) {

	int num = 15,
		result = factorial(num);

	printf("%d!=%d", num, result);
	return 0;
}


int factorial(int num){
	if (num <= 1)return 1;
	else return num*factorial(num - 1);


	}
