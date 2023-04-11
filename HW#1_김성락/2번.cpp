
#include<iostream>

using namespace std;

bool average(int a[], int size, int& avg)
//���� �迭 a[]�� �迭�� ũ�� size, ��հ��� �����ϱ� ���� ���� ���� avg�� 
//�Ű������� �޴� ��ȯ���� bool�� average()�Լ� ����
{
    if (size <= 0)
    {
        return false;
    }
    //�迭�� ũ�Ⱑ 0���� ������ false�� return.

    int sum = 0; //������ ������ ���� ���� sum ����
    for (int i = 0; i < size; i++)
    {
        sum += a[i];
    }
    //�������� i�� 0���� size -1 ���� 1�� Ŀ���鼭 sum�� ������
    
    avg = sum / size;
    //��հ��� ���޵� ���� ���� avg�� ����
    return true;
    //����� �����Ͽ����� �˸��� ���� true�� return.
}

int main(void)
{
    int a[] = { 1, 2, 3, 4, 5 };
    int avg;

    if (average(a, 5, avg))
    {
        cout << "����� " << avg << endl;
    }
    //���� �迭 a, 5, avg�� average()�Լ��� ���ڷ� �������� �� ����� true�̱⿡ ����Ǿ� "����� " + avg�� ��µȴ�.
    else
    {
        cout << "�Ű� ���� ����" << endl;
    }
    //�����̸� ���� 

    if (average(a, 0, avg))
    {
        cout << "����� " << avg << endl;
    }
    //���� �迭 a, 0, avg�� average()�Լ��� ���ڷ� �������� �� ����� false�̱⿡ ������� �ʴ´�.

    else
    {
        cout << "�Ű� ���� ����" << endl;
    }
    //����Ǿ� "�Ű� ���� ����" ��� 
    return 0;
}
