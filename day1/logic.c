// 논리연산자를 이용한 프로그램
// 1. &&(and) = A && B  -> A와 B가 모두 맞아야 TRUE값 반환, 그 외에는 False
// 2. ||(or) = A || B  -> A와 B 둘 중 하나만 맞아도 True 값 반환 , 둘 다 틀리면 False
// 3. !=(not) = A != B  -> A와 B가 다르면 True 반환

#include <stdio.h>

int main(void)
{
    int x = 50, y= 30;
    printf("x가 y보다 크고, y는 40미만 입니까? %d\n",(x > y) && (y < 40));          // 둘다 성립해야만 True
    printf("x가 y보다 작거나 혹은 y가 30입니까? %d\n",(x < y) || (y == 30));        // 둘중 하나만 성립해도 True
    printf("x가 50이 아닙니까? %d\n", x != 50);
    return 0;
}