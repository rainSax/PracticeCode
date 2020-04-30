/****************************************************************
  * Author: Navine Rai
  * Date: 04-30-20
  * Description: Implementation file for class Enemy
****************************************************************/

#include "Enemy.hpp"

void Enemy::attack() {
	cout << "Attack inflicts " << m_Damage << " damage!\n";
}

void Enemy::taunt() {
	cout << "I will defeat you!\n";
}
