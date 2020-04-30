/****************************************************************
  * Author: Navine Rai
  * Date: 04-30-20
  * Description: Implementation file for subclass Boss
****************************************************************/

#include "Boss.hpp"

Boss::Boss(const Boss& obj) {
	p_multiplier = new int;
	*p_multiplier = *obj.p_multiplier;
}

void Boss::megaAttack() {
	cout << "Boss inflicts " << (*m_pDamage * (*p_multiplier)) << " damage!\n";
}

void Boss::taunt() {
	cout << "I will defeat you! And laugh heartily!\n";
}
