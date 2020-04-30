/****************************************************************
  * Author: Navine Rai
  * Date: 04-30-20
  * Description: see specifications page 164 of C++ Projects
****************************************************************/

#ifndef ENEMY_H
#define ENEMY_H

#include <iostream>

using std::cout;

class Enemy {
	protected:
		int m_Damage;

	public:
		Enemy(int dam = 10) { m_Damage = dam; }
		void attack();

};

#endif
