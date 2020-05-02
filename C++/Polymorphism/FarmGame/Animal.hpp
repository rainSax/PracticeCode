/****************************************************************
  * Author: Navine Rai
  * Date: 05-01-20
  * Description: This class serves as the Abstract class for all
  		 animals in the game
****************************************************************/

#ifndef ANIMAL_H
#define ANIMAL_H

class Animal {
	protected:
		int health;
		int hunger;
	public:
		Animal() { 
			health = 100;
			hunger = 0;
		}
		void eat() { hunger = 0; }
		void growHunger() { hunger += 10; }
};

#endif
