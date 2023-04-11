
#include<iostream>
using namespace std;

bool bigger(int a, int b, int& big)
// 정수 두개와 참조변수 big을 매게변수로 받는 반환값이 bool 함수 bigger()을 생성
{
    if (a == b)
    {
        // 두 수가 같으면 true 반환.
        return true;
    }
    else if (a > b)
    {
        // a가 b보다 크면 big에 a를 저장하고 false 반환
        big = a;
        return false;
    }
    else
    {
        // b가 a보다 크면 big에 b를 저장하고 false 반환
        big = b;
        return false;
    }
}

int main()
{
    int x, y, big;
    bool b;

    cout << "두 정수를 입력하세요>>";
    cin >> x >> y;
    //두 정수를 입력받음

    b = bigger(x, y, big);
    //bigger함수에 x,y,big을 인자로 전달한 값을 b에 저장

    if (b)
    {
        cout << "same" << endl;
    }
    //b가 True이면 same을 출력
    else
    {
        cout << "큰 수는 " << big << endl;
    }
    //b가 False이면 big을 출력.
    return 0;
}