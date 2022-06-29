// 관계연산자를 이용한 프로그램
// ==(같다) , !=(다르다)와 같이 관계연산자를 이용하면, true or false형식으로 결과값이 도출됨.( True -> 1, False -> 0)

#include <stdio.h>

int main(void)
{
    int x = 50, y = 30;
    // x가 y와 같은 값을 가지고 있는가?
    // x =  y  ->  x라는 변수안에 y값이 들어간다를 의미
    // x == y  -> true , x와 y가 같다를 의미함.
    printf("x 와 y는 같은가? %d\n", x == y);
    printf("x 와 y는 다른가? %d\n", x != y);
    printf("x 가 y보다 큰가? %d\n", x > y);
    printf("x 가 y보다 작은가? %d\n", x < y);
    printf("x 에 y값을 넣으면? %d\n", x = y);                // (x = y)라는 연산자가 있는경우에는 먼저 x에 y값을 집어넣고 그 해당 x값을 %d로 출력함
    int z = 50, w = 50;
    printf("z와 w는 같은가? %d\n", z == w);
    return 0;
}