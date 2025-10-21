#include <stdio.h>

int main() {
    short data[9] = { 4, 6, 9, 8, 7, 2, 5, 1, 3 };

    short max = data[0];
    for (int i = 1; i < 9; i++) {
        if (data[i] > max) {
            max = data[i];
        }
    }

    printf("배열에서 가장 큰 값은: %d\n", max);

    return 0;
}
