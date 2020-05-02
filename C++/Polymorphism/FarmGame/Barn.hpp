/****************************************************************
  * Author: Navine Rai
  * Date: 05-01-20
  * Description: Barn class is concrete, inherits from Building
****************************************************************/

#ifndef BARN_H
#define BARN_H

#include "Building.hpp"
#include "Animal.hpp"
//#include "Food.hpp"

class Barn : public Building {
	private:
		vector<Animal> animals;
		//vector<Food> foodStuffs;
	public:
		void storeFood();
		void takeFood();
		void storeAnimal();
		void takeAnimal();
};

#endif
