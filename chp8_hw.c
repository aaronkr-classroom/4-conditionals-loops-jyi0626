#include <stdio.h>

int main() {
   
    int result1 = -5;
    if (result1 < 0) {
        result1 = result1 + (-1);
    }
    printf("Q1 결과: %d\n", result1);  
    int result2 = -5;
    result2 = (result2 < 0) ? result2 + (-1) : result2;
    printf("Q2 결과: %d\n", result2);  

   
    int result3 = 5;
    switch (result3) {
    case 6:
        result3 = 0;
        break;
    case 5:
        result3 = 1;
    
    case 4:
        result3 = result3 + 10;
        break;
    }
    printf("Q3 결과: %d\n", result3);  

    return 0;
}
