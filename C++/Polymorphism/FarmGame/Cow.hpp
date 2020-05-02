/****************************************************************
  * Author: Navine Rai
  * Date: 05-01-20
  * Description: Concrete class Cow which inherits from Animal
****************************************************************/

#ifndef COW_H
#define COW_H

#include "Animal.hpp"

class Cow : public Animal {
	private:
		int milk;
	public:
		Cow() { milk = 0; }
		void beMilked() { milk = 0; }
		void makeMilk() { milk += 10; }
}

#endif
