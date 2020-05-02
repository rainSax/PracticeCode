/****************************************************************
  * Author: Navine Rai
  * Date: 05-01-20
  * Description: Coop is concrete, inherits from Building
****************************************************************/

#ifndef COOP_H
#define COOP_H

#include "Building.hpp"

class Coop : public Building {
	private:
		vector<Chicken> chickens;
		//vector<Egg> eggs;
	public:
		void takeEggs();
		void storeChicken();
		void takeChicken();
};

#endif
