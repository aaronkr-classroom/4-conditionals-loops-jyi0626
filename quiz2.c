#include <stdio.h>

int main() {
    short data[9] = { 4, 6, 9, 8, 7, 2, 5, 1, 3 };

    printf("짝수 번째 요소 값 출력 (index 1,3,5,7):\n");
    for (int i = 1; i < 9; i += 2) {
        printf("%d ", data[i]);
    }
    printf("\n");

    return 0;
}
