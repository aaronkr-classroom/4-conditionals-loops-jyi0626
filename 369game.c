#include <stdio.h>

int main() {
    int limit;
    printf("369���� ȯ���մϴ�!\n");
    printf("�������� �մϱ�? ");
    scanf_s("%d", &limit);

    for (int i = 1; i <= limit; i++) {
        int num = i;
        int clap = 0;

        
        while (num > 0) {
            int digit = num % 10;
            if (digit == 3 || digit == 6 || digit == 9) {
                clap = 1;
                break;  
            }
            num /= 10;
        }

        if (clap == 1) {
            printf("¦ ");
        }
        else {
            printf("%d ", i);
        }

        if (i % 10 == 0) {
            printf("\n");
        }
    }

    printf("\n");
    return 0;
}
