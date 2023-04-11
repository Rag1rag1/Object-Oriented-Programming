/***************************************************************/
/*             HW#4 : �����ڿ� �Ҹ���, ����������               */
/*  �ۼ��� : ȫ�浿                    ��¥ : 2023�� 4�� 11��  */
/*                                                                                     */
/* ���� ���� : Rectangle Ŭ������ �����ϰ�, �����ڿ� �Ҹ��ڸ� ����Ͽ� ��ü�� �ʱ�ȭ�ϰ� �޼ҵ带 �����ϱ� */
/*                - - - - - - -                                                      */
/***************************************************************/
#include<iostream>
using namespace std;

class Rectangle {
    //Rectangel Ŭ���� ����
public:
    int width;
    int height;
    //���� �ɹ����� ����
    Rectangle();//���ڰ� ���� ����Ʈ ������ �Լ� ����
    Rectangle(int a);//�Ű������� 1���� ������ �Լ� ����
    Rectangle(int a, int b);//�Ű������� 2���� ������ �Լ� ����
    bool isSquare();//�簢���� ���簢������ �Ǻ��ϴ� �Լ� ����
};
Rectangle::Rectangle()
//Rectangle Ŭ���� ������ �Լ� ����
{
    width = 1;
    height = 1;
    //���� �ʱ�ȭ
}
Rectangle::Rectangle(int a)
//�Ű������� �Ѱ��� Rectangle ������ �Լ� ����
{
    width = a;
    //�Ű������� ���� ������ �ʱ�ȭ
    height = 3;
}
Rectangle::Rectangle(int a, int b)
//�Ű������� �ΰ��� Rectangle ������ ����
{
    width = a;
    height = b;
    //�Ű������� ���� ������ �ʱ�ȭ 
}
bool Rectangle::isSquare()
{
    if (width == height)
        //����==�����̸�
    {
        return true;
        //������ ��ȯ
    }
    else return false;
    //�ٸ��� ���� ��ȯ
}
int main(void)
{
    Rectangle rect1;
    //����Ʈ ������ �Լ��� ȣ���Ͽ� rect1��ü ����
    Rectangle rect2(3, 5);
    //�Ű������� 2���� ������ �Լ��� ȣ���Ͽ� rect2��ü ����
    Rectangle rect3(3);
    //�Ű������� 1���� ������ �Լ��� ȣ���Ͽ� rect3��ü ����
    if (rect1.isSquare()) cout << "rect1�� ���簢���̴�." << endl;
    if (rect2.isSquare()) cout << "rect2�� ���簢���̴�." << endl;
    if (rect3.isSquare()) cout << "rect3�� ���簢���̴�." << endl;
}