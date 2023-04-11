
#include<iostream>

using namespace std;

bool average(int a[], int size, int& avg)
//정수 배열 a[]와 배열의 크기 size, 평균값을 저장하기 위한 참조 변수 avg를 
//매개변수로 받는 반환형이 bool인 average()함수 생성
{
    if (size <= 0)
    {
        return false;
    }
    //배열의 크기가 0보다 작으면 false를 return.

    int sum = 0; //총합을 저장할 정수 변수 sum 생성
    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }
    //정수변수 i가 0부터 size -1 까지 1씩 커지면서 sum에 더해짐
    
    avg = sum / size;
    //평균값을 전달된 참조 변수 avg에 저장
    return true;
    //계산이 성공하였음을 알리기 위해 true를 return.
}

int main(void)
{
    int a[] = { 1, 2, 3, 4, 5 };
    int avg;

    if (average(a, 5, avg))
    {
        cout << "평균은 " << avg << endl;
    }
    //정수 배열 a, 5, avg를 average()함수에 인자로 전달했을 때 결과가 true이기에 실행되어 "평균은 " + avg가 출력된다.
    else
    {
        cout << "매개 변수 오류" << endl;
    }
    //거짓이면 실행 

    if (average(a, 0, avg))
    {
        cout << "평균은 " << avg << endl;
    }
    //정수 배열 a, 0, avg를 average()함수에 인자로 전달했을 때 결과가 false이기에 실행되지 않는다.

    else
    {
        cout << "매개 변수 오류" << endl;
    }
    //실행되어 "매개 변수 오류" 출력 
    return 0;
}
