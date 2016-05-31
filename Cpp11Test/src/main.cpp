#include "Stack.h"
#include <string>
#include <iostream>

using namespace std;

void main() {
	int a = 10;
	int b = 20;
	template_swap(a, b);

	cout << a << endl;
	cout << b << endl;

	Stack<int> stack_int;
	stack_int.Push(100);

	VoidVoidFunc func = returnfunc();
	func();

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
}