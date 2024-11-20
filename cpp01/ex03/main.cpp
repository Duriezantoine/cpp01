
#include "HumanA.hpp"
#include "HumanB.hpp"

int	main(void)
{
	{
		Weapon  club = Weapon("crude spiked club");
		// Weapon  club = Weapon("");
		// Weapon  club = Weapon(NULL);
		// Weapon  club = Weapon();
		HumanA bob("Bob", club);
		bob.attack();
		club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon  club = Weapon("crude spiked club");
		HumanB jim("Jim");
		jim.setWeapon(club);
		jim.attack();
		club.setType("some other type of club");
		jim.attack();
	}
}
