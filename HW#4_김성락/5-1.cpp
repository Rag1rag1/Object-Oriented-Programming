/***************************************************************/
/*             HW#4 : 생성자와 소멸자, 분할컴파일               */
/*  작성자 : 홍길동                    날짜 : 2023년 4월 11일  */
/*                                                                                     */
/* 문제 정의 : Rectangle 클래스를 정의하고, 생성자와 소멸자를 사용하여 객체를 초기화하고 메소드를 구현하기 */
/*                - - - - - - -                                                      */
/***************************************************************/
#include<iostream>
using namespace std;

class Rectangle {
    //Rectangel 클래스 선언
public:
    int width;
    int height;
    //정수 맴버변수 선언
    Rectangle();//인자가 없는 디폴트 생성자 함수 선언
    Rectangle(int a);//매개변수가 1개인 생성자 함수 선언
    Rectangle(int a, int b);//매개변수가 2개인 생성자 함수 선언
    bool isSquare();//사각형이 정사각형인지 판별하는 함수 선언
};
Rectangle::Rectangle()
//Rectangle 클래스 생성자 함수 정의
{
    width = 1;
    height = 1;
    //변수 초기화
}
Rectangle::Rectangle(int a)
//매개변수가 한개인 Rectangle 생성자 함수 정의
{
    width = a;
    //매개변수로 받은 값으로 초기화
    height = 3;
}
Rectangle::Rectangle(int a, int b)
//매개변수가 두개인 Rectangle 생성자 정의
{
    width = a;
    height = b;
    //매개변수로 받은 값으로 초기화 
}
bool Rectangle::isSquare()
{
    if (width == height)
        //가로==새로이면
    {
        return true;
        //참으로 반환
    }
    else return false;
    //다르면 거짓 반환
}
int main(void)
{
    Rectangle rect1;
    //디폴트 생성자 함수를 호출하여 rect1객체 생성
    Rectangle rect2(3, 5);
    //매개변수가 2개인 생성자 함수를 호출하여 rect2객체 생성
    Rectangle rect3(3);
    //매개변수가 1개인 생성자 함수를 호출하여 rect3객체 생성
    if (rect1.isSquare()) cout << "rect1은 정사각형이다." << endl;
    if (rect2.isSquare()) cout << "rect2은 정사각형이다." << endl;
    if (rect3.isSquare()) cout << "rect3은 정사각형이다." << endl;
}