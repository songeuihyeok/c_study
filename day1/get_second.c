// 초를 입력받아서 몇분 몇초인지 계산해주는 프로그램 ( /, %연산자 사용)
// % = 나누기의 나머지를 나타내는 연산자
// ++ = 1을 더해주는 연산자  // -- = 1을 빼주는 연산자
// ! = not을 의미하는 연산자

#include <stdio.h>
#define SECOND_PER_MINUTE 60                    // 분을 계산하기 위해서는 1분에 60초라는 것을 정의해줘야함.

int main(void)
{
    int input = 1000;                           // input = 몇분 몇초로 바꿀 초기시간(초)값
    int minute = input / SECOND_PER_MINUTE;     // c언어에서는 /(나누기)값은 몫만 출력됨.
    int second = input % SECOND_PER_MINUTE;
    printf("%d초는 %d분 %d초입니다.", input, minute, second);
    return 0;
}