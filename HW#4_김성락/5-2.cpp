
/***************************************************************/
/*             HW#4 : 생성자와 소멸자, 분할컴파일              */
/*  작성자 : 김성락                    날짜 : 2023년 4월 11일  */
/*                                                                                     */
/* 문제 정의 : 타원(Oval) 클래스와 그 클래스를 이용한 객체 생성과 멤버 함수 호출을 포함하는 프로그램*/                                                                  */
/*                - - - - - - -                                                      */
/***************************************************************/
#include<iostream>
using namespace std;

class Oval {
    //Oval 클래스 생성
public:
    int width;
    int height;
    //정수형 맴버변수 선언
    Oval(int a, int b);
    //매개변수가 2개인 생성자 선언
    Oval();
    //매개변수가 없는 생성자 선언
    int getWidth();
    int getHeight();
    void set(int w, int h);
    void show();
    //맴버 변수 선언
    ~Oval();
    //소멸자 선언
};

Oval::Oval()
//매개 변수가 없는 생성자 정의
{
    width = 1;
    height = 1;
    //1로 초기화
}
Oval::Oval(int a, int b)
//매개변수가 두개인 생성자 정의
{
    width = a;
    height = b;
    //매개변수로 입력받은 값으로 초기화
}
Oval::~Oval() {
    //소멸자 정의
    cout << "Oval 소멸 : " << "width = " << width << " height = " << height << endl;
    //객체 소멸시 너비와 높이를 출력.
}
int Oval::getWidth() {
    return width;
    //타원의 너비 반환
}
int Oval::getHeight() {
    return height;
    //타원의 높이 반환
}
void Oval::set(int w, int h) {
    width = w;
    height = h;
    //타원의 너비와 높이를 바꾸는 set()함수 정의
}
void Oval::show() {
    cout << "width = " << width << ", heihgt = " << height << endl;
    //너비와 높이 맴버 변수의 값을 출력하는 함수 정의
}

int main()
{
    Oval a, b(3, 4);
    //매개변수가 없는 a객체와 매개변수가 두개인 b객체 생성
    a.set(10, 20);
    //객체 a의 너비와 높이를 각각 10,20으로 설정
    a.show();
    //a의 너비와 높이를 출력
    cout << b.getWidth() << "," << b.getHeight() << endl;
    //b의 너비와 높이를 출력
}