
#include <iostream>
using namespace std;
//()�����Ҳ�������أ����������Ե�����ʹ�ã���������α������
//������������غ����﷨������ֵ���� operator ()(�����б�)
//ע�⣺
//��1����������������Գ�Ա��������ʽ�������ء�
//��2��������������غ����߱���ͨ������ȫ��������
//��3���������������ȫ�ֺ���ͬ���������������ѡ����õĺ�����

//�����������;��
//��1���������������ֳ����п��Դ��溯������STL�еõ��㷺��Ӧ�á�
//��2���������������࣬�����ó�Ա������Ÿ������Ϣ��
//��3�������������Լ����������͡�
//��4�������ṩ�̳���ϵ��

class CGirl
{
public:
	void operator()(string str)
	{
		cout << "operatorFunction " << str << endl;
	}
};
void show(string str)
{
	cout << "��ͨ������" << str << endl;
}
auto input(string str)
{
	int temp;
	cout << str;
	cin >> temp;
	return temp;

}
int main()
{
	CGirl show;
	::show("����һֻСС��"); //global function

	show("����һֻСС��");
	//int a = input("enter a num");
	//cout << a << endl;
	return 0;
}
