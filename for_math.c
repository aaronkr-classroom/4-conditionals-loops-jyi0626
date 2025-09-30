#include <stdio.h>


	int for_sum(int);
		int for_mul(int);
		int main(void) {
			int sum = 0,
				mul = 1;
			sum = for_sum(sum);
			printf("sum result:num=5,sum=%d\n",sum);

			mul = for_mul(mul);

			printf("mul result:num=5,mul=%d\n", mul);

			return 0;




	
}
		int for_sum(int sum) {
			for (int num = 1; num <= 5; num++) {
				printf("num(%d)+sum(%d)=", num, sum);
				sum = sum + num;
				printf("%d\n", sum);
			} return sum;
		}

		int for_mul(int mul) {
			for (int num = 1; num <= 5; num++) {
				printf("num(%d)*mul(%d)=", num, mul);
				mul = mul * num;
				printf("%d\n", mul);
			} return mul;

		}