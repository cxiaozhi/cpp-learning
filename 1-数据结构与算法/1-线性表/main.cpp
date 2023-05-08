#include<iostream>
#include<string>
using namespace std;

//template<class T>
class Maker {
public:
	Maker() {
		a = 20;
		cout << "无参构造函数" << endl;
	};
	// 拷贝构造函数
	/*Maker(const Maker&obj) {
		cout << "拷贝构造函数" << endl;
		a = obj.a;
	}*/
private:
	int a;
};



int main() {
	Maker m1;
	Maker m2(m1);
	cout << "m1" << &m1 << endl << "m2" << &m2 << endl <<  &m1 - &m2;
	return 0;
}