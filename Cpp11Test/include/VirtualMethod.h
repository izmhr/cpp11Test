#include <iostream>
using namespace std;

// C++11��override�C���q�Ő������I�[�o�[���C�h�ł��Ă��Ȃ��֐����R���p�C���G���[�ɂ���
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