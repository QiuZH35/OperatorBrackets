
#include <iostream>
using namespace std;
//()运算符也可以重载，对象名可以当函数使用（函数对象，伪函数）
//括号运算符重载函数语法：返回值类型 operator ()(参数列表)
//注意：
//（1）括号运算符必须以成员函数的形式进行重载。
//（2）括号运算符重载函数具备普通函数的全部特征。
//（3）如果函数对象与全局函数同名，按作用域规则选择调用的函数。

//函数对象的用途：
//（1）表面像函数，部分场景中可以代替函数，在STL中得到广泛的应用。
//（2）函数对象本质是类，可以用成员变量存放更多的信息。
//（3）函数对象有自己的数据类型。
//（4）可以提供继承体系。

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
	cout << "普通函数：" << str << endl;
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
	::show("我是一只小小鸟"); //global function

	show("我是一只小小鸟");
	//int a = input("enter a num");
	//cout << a << endl;
	return 0;
}
