/****************************************************************
  * Author: Navine Rai
  * Date: 04-30-20
  * Description: Implementation file for subclass Boss
****************************************************************/

#include "Boss.hpp"

void Boss::megaAttack() {
	cout << "Boss inflicts " << (m_Damage * multiplier) << " damage!\n";
}
