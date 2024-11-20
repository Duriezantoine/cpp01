
#include "Weapon.hpp"

Weapon::Weapon(void)
{
	this->_type = "default weapon";
}

Weapon::Weapon(const char *type)
{
	if (type == NULL || type[0] == '\0')
		this->_type = "default weapon";
	else
		this->_type = type;
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}

const std::string&	Weapon::getType(void)
{
	return (this->_type);
}
