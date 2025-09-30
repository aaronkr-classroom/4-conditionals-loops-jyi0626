#include <stdio.h>


int dan(int step) {
    printf("*** %d dan ***\n", step);
    for (int i = 1; i <= 9; i++) {
        printf("%d x %d = %d\n", step, i, step * i);
    }
    printf("\n");
    return 0;  
}

int main(void) {

    
    for (int i = 1; i <= 9; i++) {
        dan(i);
    }

    return 0;
}
