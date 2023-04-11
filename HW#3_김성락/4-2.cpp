/**************************************************************/
/*             HW#3 : 클래스와 객체의 기본                    */
/*  작성자 : 김성락                    날짜 : 2023년 4월 7일  */
/*                                                            */
/* 문제 정의 : 사용자로부터 5개의 이름을 입력받아, string 타입의 vector인 name에 저장하고 그중에서 사전적으로 가장 뒤에 나오는 이름을 출력한다.             */
/***************************************************************/
//실습 4-2
#include<iostream>
//입출력 표준 라이브러리 포함
#include<vector>
//vector 라이브러리 포함
using namespace std;
//표준 라이브러리 std 사용 선언
int main(void)
{
    vector<string> name;
    //string 타입의 데이터를 저장하는 동적 배열인 vector을 선언. 이름을 저장하기 위한 name 변수 생성.
    string temp;  //string 변수 temp 선언
    string last = "a";  //string 변수 last 선언 후 "a"로 초기화
    cout << "이름을 5개 입력하라\n";
    for (int i = 0; i < 5; i++)
    {
        cout << i + 1<<">>";
        cin >> temp;//temp를 입력받는다.
        name.push_back(temp);
        //name 변수의 끝에 temp값을 추가한다.
        if (name[i] > last)
        {
            last = name[i];
        }
        //만약 name의 i번째 index가 last 보다 사전적으로 뒤에 있으면 last를 name[i]로 대치한다.
    }
    cout << "사전에서 가장 뒤에 나오는 이름은 " << last;
    //last 출력.
}