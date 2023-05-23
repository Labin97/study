#ifndef MOVE_HPP
#define MOVE_HPP

#include <iostream>

class Move 
{ 
private: 
  double _x; 
  double _y; 
public: 
  Move(double a = 0, double b = 0); 
  Move add(const Move & m) const; 
  void showmove() const; 
  void reset(double a = 0, double b = 0); 
};

#endif