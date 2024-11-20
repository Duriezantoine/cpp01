
#include "Zombie.hpp"

Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string const name)
{
	this->_name = name;
}

Zombie::~Zombie(void)
{
	std::cout << this->_name << " died for good" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << this->_name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
