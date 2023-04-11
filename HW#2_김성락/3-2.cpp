
/***************************************************************/
/*             HW#2 : 개선된 함수 기능                                 */
/*  작성자 : 김성락                    날짜 : 2023년 3월 30일  */
/*                                                                                     */
/* 문제 정의 :a,b를 입력받아 디폴트값c중 가장 큰 값을 반환. 혹은 abc를 입력받아 가장 큰 값을 반환.*/
/*                - - - - - - -                                                      */
/***************************************************************/
//실습 3-2 default 인자를 가진 big함수
#include<iostream>
//iostream 헤더 파일을 포함시킨다. input and output operations in c++
using namespace std;
// namespace std를 사용한다고 선언. 표준 c++ 라이브러리 함수와 객체
int big(int a, int b, int c = 100)
// 정수 a,b,c를 인자로 받는 반환형이 정수인 big함수 선언. 이때 c는 100을 default값으로 같는다.
{
    int max_value = (a > b) ? ((a > c) ? c : a) : ((b > c) ? c : b);
    //삼항 연산자를 두번 사용하여 a,b,c 중 최대값을 정해 max_value에 대입. 
    return max_value;
    //max_value반환
}

int main()
//main함수 선언
{
    int x = big(3, 5);
    //정수형 x는 3과 5를 big함수에 전달해 반환값을 대입받는다. c는 전달되지 않았으므로 defaul값으로 정해진다.
    int y = big(300, 60);
    //정수형 y는 300과 60를 big함수에 전달해 반환값을 대입받는다. c는 전달되지 않았으므로 defaul값으로 정해진다.
    int z = big(30, 60, 50);
    //정수형 z는 300,60 그리고 50을 big함수에 전달해 반환값을 대입받는다.
    cout << x << ' ' << y << ' ' << z << endl;
    //x, y, z를 띄어서 출력.
    return 0;
    //main함수를 종료
}