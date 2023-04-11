/***************************************************************/
/*             HW#4 : 생성자와 소멸자, 분할컴파일               */
/*  작성자 : 홍길동                    날짜 : 2023년 4월 11일  */
/*                                                                                     */
/* 문제 정의 : 헤더파일을 정의하고 소스파일에서 불러오기                             */
/*                - - - - - - -                                                      */
/***************************************************************/
#include "Adder.h"
//Adder헤더 파일을 포함
#include "Calculator.h"
//Calculator헤더 파일을 포함
int main() {
	Calculator calc;
	//Calculator 클래스의 calc객체 생성
	calc.run();
	//calc 객체의 run()함수 실행  
	return 0;
}