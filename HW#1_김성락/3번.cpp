
#include<iostream>
using namespace std;

bool bigger(int a, int b, int& big)
// ���� �ΰ��� �������� big�� �ŰԺ����� �޴� ��ȯ���� bool �Լ� bigger()�� ����
{
    if (a == b)
    {
        // �� ���� ������ true ��ȯ.
        return true;
    }
    else if (a > b)
    {
        // a�� b���� ũ�� big�� a�� �����ϰ� false ��ȯ
        big = a;
        return false;
    }
    else
    {
        // b�� a���� ũ�� big�� b�� �����ϰ� false ��ȯ
        big = b;
        return false;
    }
}

int main()
{
    int x, y, big;
    bool b;

    cout << "�� ������ �Է��ϼ���>>";
    cin >> x >> y;
    //�� ������ �Է¹���

    b = bigger(x, y, big);
    //bigger�Լ��� x,y,big�� ���ڷ� ������ ���� b�� ����

    if (b)
    {
        cout << "same" << endl;
    }
    //b�� True�̸� same�� ���
    else
    {
        cout << "ū ���� " << big << endl;
    }
    //b�� False�̸� big�� ���.
    return 0;
}