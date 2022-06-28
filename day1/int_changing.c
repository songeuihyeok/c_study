//int형을 다른 진수로 바꾸는 프로그램
// 1. 8진수로 수를 표현 = %o 이용 
// 2. 16진수로 수를 표현 = %x 이용

#include <stdio.h>

int main(void)
{
    int x = 100;
    printf("10진수로 출력: %d\n", x);
    printf("8진수로 출력: %o\n", x);
// 8진수 표현법 -> 0, 1, 2, 3, 4, 5, 6, 7, 10, 11, ...    
    printf("16진수로 출력: %x", x);

    return 0;
    } 