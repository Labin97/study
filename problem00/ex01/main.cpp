#include "Move.hpp"

int main(void)
{
	Move m1(1.1);
	Move m2(3.3, 4.4);
	Move m3 = m1.add(m2);
	m1.showmove();
	m2.showmove();
	m3.showmove();
	m1.reset();
	m1.showmove();
	return 0;
}