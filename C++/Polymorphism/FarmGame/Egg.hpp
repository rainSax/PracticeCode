/****************************************************************
  * Author: Navine Rai
  * Date: 05-01-20
  * Description: concrete class which inherits from Food
****************************************************************/

#ifndef EGG_H
#define EGG_H

#include "Food.hpp"

class Egg : public Food {
	private:
		char color;
	public:
		Egg(char c) : Food('e'), color(c) {}
		char getColor() { return color; }
		void setColor(char c) { color = c; }
};

#endif
