/****************************************************************
  * Author: Navine Rai
  * Date: 05-01-20
  * Description: abstract class building
****************************************************************/

#ifndef BUILDING_H
#define BUILDING_H

class Building {
	protected:
		int integrity;
		int cleanliness;
		int capacity;
	public:
		Building() {
			integrity = 100;
			cleanliness = 100;
		}
		void maintain() { integrity = 100; }
		void expand();
		void clean() { cleanliness = 100; }
};

#endif
