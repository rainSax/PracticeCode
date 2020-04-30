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
		int* m_pDamage;

	public:
		Enemy(int dam = 10) { 
			m_pDamage = new int;
			*m_pDamage = dam;
		}
		Enemy(const Enemy&);
		void attack();
		virtual void taunt();
		~Enemy() { delete m_pDamage; }
};

#endif
