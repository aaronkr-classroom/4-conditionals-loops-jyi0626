
#include <stdio.h>

int main()
{
    int m, n;

    printf("===== Q1 결과 =====\n");
    for (m = 5; m < 7; m++) {
        for (n = 0; n < 3; n++) {
            if (m == 5 && n == 1) break;
            if (n == 2) continue;
            printf("m(%d)-n(%d)\n", m, n);
        }
    }

    printf("\n===== Q2 결과 =====\n");
    int step = 2, i;
    while (step <= 9) {
        i = 1;
        while (i <= 9) {
            printf("%d * %d = %d\n", step, i, step * i);
            i++;
        }
        step++;
        printf("\n"); // 단 구분을 위해 줄바꿈
    }

    return 0;
}

