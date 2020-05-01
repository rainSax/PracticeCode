/****************************************************************
  * Author: Navine Rai
  * Date: 04-30-20
  * Description: Implementation file for class Enemy
****************************************************************/

#include "Enemy.hpp"

Enemy::Enemy(const Enemy& obj) {
	m_pDamage = new int;
	*m_pDamage = *obj.m_pDamage;
}

Enemy& Enemy::operator=(const Enemy& right) {
	if (this != &right)
		*(this->m_pDamage) = *right.m_pDamage;
	return *this;
}

void Enemy::attack() {
	cout << "Attack inflicts " << *m_pDamage << " damage!\n";
}

void Enemy::taunt() {
	cout << "I will defeat you!\n";
}
