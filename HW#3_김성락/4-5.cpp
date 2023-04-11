/**************************************************************/
/*             HW#3 : 클래스와 객체의 기본                    */
/*  작성자 : 김성락                    날짜 : 2023년 4월 7일  */
/*                                                            */
/* 문제 정의 : 사용자로부터 여러 줄의 문자열을 입력받고,
               특정 문자열을 찾아 다른 문자열로 치환한 후,
               결과
               
               를 출력하는 프로그램                       */
/***************************************************************/
#include<iostream>
#include<string>
using namespace std;
int main() {
    string s, sfind, sreplace;
    //입력받을 문자열, 찾을 문자열, 교체할 문자열 선언.
    cout << "여러 줄의 문자열을 입력하세요. 입력의 끝은 &문자입니다. ";
    getline(cin, s, '&');//'&'문자가 나올때까지 문자열을 입력받는다.

    cin.ignore();//이전에 입력받은 개행문자를 지워준다.(무시한다)
    cout << "find: ";

    cin >> sfind;//sfind에 찾을 문자열을 입력.
    cin.ignore();
    cout << "replace: ";
    cin >> sreplace;//sreplace에 교체할 문자열을 입력받는다.
    cin.ignore();

    int loc = 0;
    //현재 위치를 저장할 정수형 변수 loc선언
    while ((loc = s.find(sfind, loc)) != string::npos)
        //문자열s에서 sfind를 찾을 수 없을 때까지 반복
    {
        s.replace(loc, sfind.length(), sreplace);//s에서 loc위치부터 sfind  문자열을 sreplace로 교체.
        loc += sreplace.length();//sreplace의 길이만큼 loc값 증가
    }

    cout << s << endl;//교체된 문자열 s를 출력.
    return 0;
}