#include "Move.hpp"

Move::Move(double a, double b) 
{
	_x = a;
	_y = b;
}

Move Move::add(const Move & m) const
{
	Move temp;
	temp._x = this->_x + m._x;
	temp._y = this->_y + m._y;
	return temp;
}

void Move::showmove() const
{
	std::cout << "x: " << _x << ", y: " << _y << std::endl;
}

void Move::reset(double a, double b)
{
	_x = a;
	_y = b;
}