/**************************************************************/
/*             HW#3 : Ŭ������ ��ü�� �⺻                    */
/*  �ۼ��� : �輺��                    ��¥ : 2023�� 4�� 7��  */
/*                                                            */
/* ���� ���� : �ʺ�� ���̸� ��� ������ ���� Rectangel Ŭ������ �����ϰ�, �ش� Ŭ������ �̿��Ͽ� �簢���� ������ ����Ѵ�  */
/***************************************************************/
#include<iostream>
using namespace std;

class Rectangel
    // Rectangel class ����
{
public:
    //���� ������ public (Ŭ���� �ܺο����� ���� ����)
    int width;
    int height;
    //width�� height, �� ���� �ɹ� ���� ����
    int getArea();
};
int Rectangel::getArea() {
    return width * height;
}
//Ractangel class �ܺο��� getArea()�޼ҵ� ����. �ɹ� ���� width, height�� ����Ͽ� ���� ��ȯ.
int main()
//�����Լ� ����
{
    Rectangel rect;
    //Rectangel class�� ��ü rect����.
    rect.width = 3;
    rect.height = 5;
    //rect ��ü�� width,height �ɹ� ������ 3�� 5�� �ʱ�ȭ.
    cout << "�簢���� ������" << rect.getArea() << endl;
    //rect.getArea()�� ȣ���Ͽ� �簢���� ������ ����ϰ� cout���� ���.
    return 0;
    //���α׷� ����
}