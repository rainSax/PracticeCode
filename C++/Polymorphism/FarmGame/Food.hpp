/****************************************************************
  * Author: Navine Rai
  * Date: 05-01-20
  * Description: Abstract class Food
****************************************************************/

#ifndef FOOD_H
#define FOOD_H

class Food {
	protected:
		int quality;
		char type;
	public:
		Food(char t) {
			quality = 100;
			type = t;
		}
		void age() { quality -= 10; }
};

#endif
