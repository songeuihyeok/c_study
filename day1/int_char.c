// char형은 하나의 문자를 담는 공간
// c언어에서 char형은 내부적으로 숫자(아스키코드)로 구성되어진다. - ex: A = 65 , B = 66
// 따라서 int형과 char형은 서로 연결되어있다.

#include <stdio.h>

int main(void)
{
    char x = 'A';
    printf("%c\n", x);
    char y = 65;                        // c언어에서 문자는 숫자로 구성됨으로, A와 65는 동일
    printf("%c\n", y);
    int z = 65;
    printf("%c\n", z);                  // z가 int형으로 정의되었어도, 출력값이 char형이므로 char값으로 출력
    char m = 'B';
    printf("%c\n", m);
    char n = 66;
    printf("%c\n", n);
    char o = 'B';                       // o라는 자료형을 int값으로 출력하면 정수값이 출력됨 ( B = 66)
    printf("%d", o);                    
    return 0;
}