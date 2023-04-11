
/***************************************************************/
/*             HW#4 : �����ڿ� �Ҹ���, ����������              */
/*  �ۼ��� : �輺��                    ��¥ : 2023�� 4�� 11��  */
/*                                                                                     */
/* ���� ���� : Ÿ��(Oval) Ŭ������ �� Ŭ������ �̿��� ��ü ������ ��� �Լ� ȣ���� �����ϴ� ���α׷�*/                                                                  */
/*                - - - - - - -                                                      */
/***************************************************************/
#include<iostream>
using namespace std;

class Oval {
    //Oval Ŭ���� ����
public:
    int width;
    int height;
    //������ �ɹ����� ����
    Oval(int a, int b);
    //�Ű������� 2���� ������ ����
    Oval();
    //�Ű������� ���� ������ ����
    int getWidth();
    int getHeight();
    void set(int w, int h);
    void show();
    //�ɹ� ���� ����
    ~Oval();
    //�Ҹ��� ����
};

Oval::Oval()
//�Ű� ������ ���� ������ ����
{
    width = 1;
    height = 1;
    //1�� �ʱ�ȭ
}
Oval::Oval(int a, int b)
//�Ű������� �ΰ��� ������ ����
{
    width = a;
    height = b;
    //�Ű������� �Է¹��� ������ �ʱ�ȭ
}
Oval::~Oval() {
    //�Ҹ��� ����
    cout << "Oval �Ҹ� : " << "width = " << width << " height = " << height << endl;
    //��ü �Ҹ�� �ʺ�� ���̸� ���.
}
int Oval::getWidth() {
    return width;
    //Ÿ���� �ʺ� ��ȯ
}
int Oval::getHeight() {
    return height;
    //Ÿ���� ���� ��ȯ
}
void Oval::set(int w, int h) {
    width = w;
    height = h;
    //Ÿ���� �ʺ�� ���̸� �ٲٴ� set()�Լ� ����
}
void Oval::show() {
    cout << "width = " << width << ", heihgt = " << height << endl;
    //�ʺ�� ���� �ɹ� ������ ���� ����ϴ� �Լ� ����
}

int main()
{
    Oval a, b(3, 4);
    //�Ű������� ���� a��ü�� �Ű������� �ΰ��� b��ü ����
    a.set(10, 20);
    //��ü a�� �ʺ�� ���̸� ���� 10,20���� ����
    a.show();
    //a�� �ʺ�� ���̸� ���
    cout << b.getWidth() << "," << b.getHeight() << endl;
    //b�� �ʺ�� ���̸� ���
}