/***************************************************************/
/*             HW#2 : ������ �Լ� ���                                 */
/*  �ۼ��� : �輺��                    ��¥ : 2023�� 3�� 30��  */
/*                                                                                     */
/* ���� ���� :�迭�� �� ũ�⸦ �Է¹޾� �迭�� ������ ������ ������ �Լ�.*/
/***************************************************************/
//�ǽ� 3-4 ����� ���Ҹ� �ݴ� ������ ������ reverseArray()�Լ�

#include<iostream>
using namespace std;
void reverseArray(int* x, int a);
//�迭�� ũ�⸦ �Է¹޴� reverseArray�Լ� ����

int main()
{
    int x[] = { 1,10,100,5,4 };
    //���� �迭 ����
    reverseArray(x, 5);
    //reverseArray�Լ��� x�� 5�� ����
    for (int i = 0; i < 5; i++)
    {
        cout << x[i] << ' ';
    }
    //�迭 x �� ���
    cout << endl;
    return 0;
    //main�� ����
}
void reverseArray(int* x, int a) 
{
    for (int i = 0; i < a / 2; i++) 
    {
        int temp = x[i];
        x[i] = x[a - i - 1];
        x[a - i - 1] = temp;
    }
    //0���� �迭�� �߰����� �迭�� �պκа� �޺κ��� �ٲ۴�.
}