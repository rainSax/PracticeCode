/****************************************************************
  * Author: Navine Rai
  * Date: 04-30-20
  * Description: client file for testing the Enemy and Boss
****************************************************************/

#include "Boss.hpp"

const int SIZE = 10;

int main() {

	Enemy* enemies[SIZE];
	for (int i = 0; i < (SIZE / 2); i++)
		enemies[i] = new Enemy;

	for (int i = (SIZE / 2); i < SIZE; i++)
		enemies[i] = new Boss;

	for (int i = 0; i < SIZE; i++)
		enemies[i]->taunt();

	Enemy* copiedEnemy = enemies[0];
	Enemy* copiedBoss = enemies[SIZE - 1];

	copiedEnemy->taunt();
	copiedBoss->taunt();

	Enemy one(10), two(20), three(30);
	one.attack();
	two.attack();
	three.attack();

	cout << "\nTesting overloaded assignment operator\n";

	//testing overloaded assignment operator
	one = two = three;
	one.attack();
	two.attack();
	three.attack();

	for (int i = 0; i < SIZE; i++) {
		delete enemies[i];
		enemies[i] = nullptr;
	}

	return 0;
}
