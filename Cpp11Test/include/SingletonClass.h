// ƒVƒ“ƒOƒ‹ƒgƒ“
// http://www.geocities.jp/bleis_tift/cpp/singleton.html

using namespace std;

#include <iostream>

class SingletonClass
{
private:
	SingletonClass(void){};
	int sum = 0;
	
public:
	static SingletonClass& getInstance(void)
	{
		static SingletonClass singleton;
		return singleton;
	}
	void doSomething(int something);
	static const int a = 100;
};
