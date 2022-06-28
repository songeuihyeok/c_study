//c언어의 자료형 = char/int/float/double/void
// char형 = c언어에서 문자열을 나타냄 (c언어는 string형이 없다.)
// int/float/double형 = c언어에서 숫자를 나타냄 (int: 정수형/ float, double: 실수형)
// void형 = 자료형 자체가 없을때 사용

// 연봉(Salary)를 구하는 프로그램

#include <stdio.h>
#define MONTHS 12                       // MONTHS라는 상수를 12로 정의함

int main(void)
{
    double monthSalary = 1000.5;
    printf("$ %.2f", monthSalary * MONTHS);
    return 0;   
}
