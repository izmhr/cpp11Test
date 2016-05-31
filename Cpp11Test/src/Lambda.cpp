#include "Lambda.h"

// https://msdn.microsoft.com/ja-jp/library/dd293608.aspx

void abssort(vector<int>::iterator itr, unsigned int n)
{
	std::sort(itr, itr+n,
		[](float a, float b) {	// Lambda
			return (std::abs(a) < std::abs(b));
		}
	);
}
