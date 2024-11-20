
#include "Zombie.hpp"

int main(void)
{

	Zombie *zombie1 = newZombie("Zombiz");

	randomChump("Zombib");

	zombie1->announce();
	delete zombie1;

	return (0);
}
