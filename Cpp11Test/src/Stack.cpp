#include "Stack.h"

void anFunction(Ret ret)
{
	cout << ret.a << " ," << ret.b << endl;
}

function<void(Ret)> returnfunc()
{
	return anFunction;
}

