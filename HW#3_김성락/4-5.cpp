/**************************************************************/
/*             HW#3 : Ŭ������ ��ü�� �⺻                    */
/*  �ۼ��� : �輺��                    ��¥ : 2023�� 4�� 7��  */
/*                                                            */
/* ���� ���� : ����ڷκ��� ���� ���� ���ڿ��� �Է¹ް�,
               Ư�� ���ڿ��� ã�� �ٸ� ���ڿ��� ġȯ�� ��,
               ���
               
               �� ����ϴ� ���α׷�                       */
/***************************************************************/
#include<iostream>
#include<string>
using namespace std;
int main() {
    string s, sfind, sreplace;
    //�Է¹��� ���ڿ�, ã�� ���ڿ�, ��ü�� ���ڿ� ����.
    cout << "���� ���� ���ڿ��� �Է��ϼ���. �Է��� ���� &�����Դϴ�. ";
    getline(cin, s, '&');//'&'���ڰ� ���ö����� ���ڿ��� �Է¹޴´�.

    cin.ignore();//������ �Է¹��� ���๮�ڸ� �����ش�.(�����Ѵ�)
    cout << "find: ";

    cin >> sfind;//sfind�� ã�� ���ڿ��� �Է�.
    cin.ignore();
    cout << "replace: ";
    cin >> sreplace;//sreplace�� ��ü�� ���ڿ��� �Է¹޴´�.
    cin.ignore();

    int loc = 0;
    //���� ��ġ�� ������ ������ ���� loc����
    while ((loc = s.find(sfind, loc)) != string::npos)
        //���ڿ�s���� sfind�� ã�� �� ���� ������ �ݺ�
    {
        s.replace(loc, sfind.length(), sreplace);//s���� loc��ġ���� sfind  ���ڿ��� sreplace�� ��ü.
        loc += sreplace.length();//sreplace�� ���̸�ŭ loc�� ����
    }

    cout << s << endl;//��ü�� ���ڿ� s�� ���.
    return 0;
}