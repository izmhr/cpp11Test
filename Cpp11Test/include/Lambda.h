#pragma once

#include <algorithm>
#include <cmath>
#include <vector>
#include <iostream>
#include <functional>
#include <string>

using namespace std;

void abssort(vector<int>::iterator itr, unsigned int n);

void lambdaFuncC();
void lambdaFuncD();
function<void()> funcReturnsLambda();
void lambdaAndStdFunc();