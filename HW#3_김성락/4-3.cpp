/**************************************************************/
/*             HW#3 : 클래스와 객체의 기본                    */
/*  작성자 : 김성락                    날짜 : 2023년 4월 7일  */
/*                                                            */
/* 문제 정의 : 너비와 높이를 멤버 변수로 갖는 Rectangel 클래스를 정의하고, 해당 클래스를 이용하여 사각형의 면적을 출력한다  */
/***************************************************************/
#include<iostream>
using namespace std;

class Rectangel
    // Rectangel class 선언
{
public:
    //접근 지정자 public (클래스 외부에서도 접근 가능)
    int width;
    int height;
    //width와 height, 두 정수 맴버 변수 선언
    int getArea();
};
int Rectangel::getArea() {
    return width * height;
}
//Ractangel class 외부에서 getArea()메소드 정의. 맴버 변수 width, height를 사용하여 넓이 반환.
int main()
//메인함수 선언
{
    Rectangel rect;
    //Rectangel class의 객체 rect선언.
    rect.width = 3;
    rect.height = 5;
    //rect 객체의 width,height 맴버 변수를 3과 5로 초기화.
    cout << "사각형의 면적은" << rect.getArea() << endl;
    //rect.getArea()를 호출하여 사각형의 면적을 계산하고 cout으로 출력.
    return 0;
    //프로그램 종료
}