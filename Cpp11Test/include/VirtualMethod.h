#include <iostream>
using namespace std;

// C++11のoverride修飾子で正しくオーバーライドできていない関数をコンパイルエラーにする
// http://miffysora.wikidot.com/override

class Kitty
{
public:
	virtual void paint(int i);
	//void paint();
};

class Chobits : public Kitty
{
public:
	void paint(int i) override;
};