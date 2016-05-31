#include "Stack.h"
#include "SingletonClass.h"
#include "VirtualMethod.h"
#include "Lambda.h"

#include <string>
#include <iostream>
#include <vector>

using namespace std;

void main() {

	// template
	int a = 10;
	int b = 20;
	template_swap(a, b);

	cout << a << endl;
	cout << b << endl;


	// template 2
	Stack<int> stack_int;
	stack_int.Push(100);


	// std::function<void()>
	VoidVoidFunc func = returnfunc();
	Ret ret(100, 300);
	func(ret);

	
	// enum class
	OLD_ENUM o = DOG;

	NEW_ENUM e = NEW_ENUM::CAT;
	switch (e)
	{
	case NEW_ENUM::CAT:
		cout << "NEW_ENUM::CAT" << endl;
		break;
	case NEW_ENUM::DOG:
		cout << "NEW_ENUM::DOG" << endl;

	}


	// singleton
	SingletonClass& sc = SingletonClass::getInstance();
	sc.doSomething(200);
	cout << sc.a << endl;

	SingletonClass& sc2 = SingletonClass::getInstance();
	sc2.doSomething(300);


	// Virtual Method
	Kitty* obj1 = new Kitty();
	Kitty* obj2 = new Chobits();
	obj1->paint(2);
	obj2->paint(3);


	// Lambda
	vector<int> v;
	v.push_back(3);
	v.push_back(5);
	v.push_back(2);
	v.push_back(-4);
	abssort(v.begin(), 4);

}