/***************************************************************/
/*             HW#2 : 개선된 함수 기능                                 */
/*  작성자 : 김성락                    날짜 : 2023년 3월 30일  */
/*                                                                                     */
/* 문제 정의 :배열과 그 크기를 입력받아 배열의 원소의 순서를 뒤집는 함수.*/
/***************************************************************/
//실습 3-4 배월의 원소를 반대 순서로 뒤집는 reverseArray()함수

#include<iostream>
using namespace std;
void reverseArray(int* x, int a);
//배열과 크기를 입력받는 reverseArray함수 선언

int main()
{
    int x[] = { 1,10,100,5,4 };
    //정수 배열 선언
    reverseArray(x, 5);
    //reverseArray함수에 x와 5를 전달
    for (int i = 0; i < 5; i++)
    {
        cout << x[i] << ' ';
    }
    //배열 x 띄어서 출력
    cout << endl;
    return 0;
    //main문 종료
}
void reverseArray(int* x, int a) 
{
    for (int i = 0; i < a / 2; i++) 
    {
        int temp = x[i];
        x[i] = x[a - i - 1];
        x[a - i - 1] = temp;
    }
    //0부터 배열의 중간까지 배열을 앞부분과 뒷부분을 바꾼다.
}