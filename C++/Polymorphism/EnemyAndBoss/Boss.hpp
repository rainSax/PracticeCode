/****************************************************************
  * Author: Navine Rai
  * Date: 04-30-20
  * Description: Boss class inherits from Enemy
****************************************************************/

#ifndef BOSS_H
#define BOSS_H

#include "Enemy.hpp"

class Boss : public Enemy {
	private:
		int multiplier;
	public:
		Boss() : Enemy(30) {
			srand(time(0));
			multiplier = (rand() % (10 - 1 + 1)) + 1;
		}
		void megaAttack();
		virtual void taunt();
};

#endif
