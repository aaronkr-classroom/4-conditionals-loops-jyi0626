#include <stdio.h>

char if_grade(int);
char switch_grade(int);

int main(void) {
    int score = 111;
    char grade = switch_grade(score);

    printf("Grade: %d%% %c score,grade", grade, grade);

    return 0;
}

// �����̵� 39�� �ڵ�
char if_grade(int score) {
    if (score >= 90)
        return 'A';
    else if (score >= 80)
        return 'B';
    else if (score >= 70)
        return 'C';
    else if (score >= 60)
        return 'D';
    else
        return 'F';
}

// �����̵� 45�� �ڵ�
char switch_grade(int score) {
    switch (score / 10) {   // 110 / 10 = 11
    case 12:
    case 11:
    case 10:
    case 9: return 'A';     // return ����ϸ� break�� �ʿ� ����.
    case 8: return 'B';
    case 7: return 'C';
    case 6: return 'D';
    default: return 'F';
    }
}