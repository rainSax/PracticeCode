/****************************************************************
  * Author: Navine Rai
  * Date: 05-01-20
  * Description: concrete class Sheep which inherits from Animal
****************************************************************/

#ifndef SHEEP_H
#define SHEEP_H

#include "Animal.hpp"

class Sheep : public Animal {
	private:
		int wool;
	public: 
		Sheep() { wool = 0; }
		void beSheared() { wool = 0; }
		void growWool() { wool += 5; }
};

#endif
