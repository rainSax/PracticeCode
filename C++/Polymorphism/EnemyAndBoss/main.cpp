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

	return 0;
}
