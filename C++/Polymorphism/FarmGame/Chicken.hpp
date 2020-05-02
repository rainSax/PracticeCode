/****************************************************************
  * Author: Navine Rai
  * Date: 05-01-20
  * Description: Concrete class chicken which inherits from
  		 Animal
****************************************************************/

#ifndef CHICKEN_H
#define CHICKEN_H

class Chicken : public Animal {
	private:
		int eggLevel;
	public:
		Chicken() { eggLevel = 0; }
		void layEgg() { eggLevel = 0; }
		void growEgg() { eggLevel += 15; }
};

#endif
