#include "Lambda.h"

// https://msdn.microsoft.com/ja-jp/library/dd293608.aspx

static int globalI = 100;

void abssort(vector<int>::iterator itr, unsigned int n)
{
	std::sort(itr, itr+n,
		[](int a, int b) {	// Lambda
			return (std::abs(a) < std::abs(b));
		}
	);
}

void lambdaFuncC()
{
	int a = 10;
	int b = 20;
	[&] () {
		a = 100;
		cout << "a is " << a << " inside lambda" << endl;
	}();
	cout << "a is " << a << " outside lambda" << endl;
}

void lambdaFuncD()
{
	int a = 10;
	int b = 20;
	[=]() mutable {
		a = 100;
		b = 200;
		cout << "a is " << a << " inside lambda" << endl;
	}();
	cout << "a is " << a << " outside lambda" << endl;
}

function<void()> funcReturnsLambda()
{
	std::string str("hogehogehoge");
	return [=]() {cout << str << endl; };	// copy
}

void lambdaAndStdFunc()
{
	auto func = funcReturnsLambda();
	func();
}

