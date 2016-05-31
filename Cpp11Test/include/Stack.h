#pragma once

// テンプレート
// テンプレートの実装をヘッダに書かなければならない理由
// http://d.hatena.ne.jp/pknight/20090826/1251303641

using namespace std;
#include <iostream>
#include <functional>

template <typename T>
void template_swap(T& a, T& b)
{
	T t = a;
	a = b;
	b = t;
}


template <typename T>
class Stack
{
public:
	void Push(T value){
		cout << "inside stack " <<  value << endl;
	}
};



// std::function
// http://torini.hateblo.jp/entry/2015/03/22/%E9%96%A2%E6%95%B0%E3%83%9D%E3%82%A4%E3%83%B3%E3%82%BF%E3%82%88%E3%82%8A%E3%82%82std%3A%3Afunction%E3%82%92%E4%BD%BF%E3%81%8A%E3%81%86
// typedef
typedef function<void()> VoidVoidFunc;

void anFunction();
VoidVoidFunc returnfunc();



// enum class
// http://ramemiso.hateblo.jp/entry/2013/09/18/184145
enum OLD_ENUM {
	DOG,
	CAT,
	SIZE
};

//enum OLD_ENUM2 {
//	DOG,	// compile error
//	PIG,
//	SIZE	// compile error
//};

enum class NEW_ENUM {
	DOG,
	CAT,
	SIZE
};