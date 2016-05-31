#include "Stack.h"

void anFunction()
{
	cout << "an Function dayo" << endl;
}

function<void()> returnfunc()
{
	return anFunction;
}

