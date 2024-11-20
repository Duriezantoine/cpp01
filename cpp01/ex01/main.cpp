
#include "Zombie.hpp"

int stringToInt(const std::string &str)
{
	std::stringstream	ss(str);
	int					num;

	ss >> num;
	if (ss.fail())
	{
		throw std::invalid_argument("Invalid number format");
	}
	return (num);
}

int main(int argc, char **argv)
{
	if (argc != 3)
	{
		std::cerr << "Usage: " << argv[0] << " [number of zombies] [zombies name]" << std::endl;
		return 1;
	}

	int	zombiesNb;
	try
	{
		zombiesNb = stringToInt(argv[1]);
		if (zombiesNb < 1)
		{
			throw std::invalid_argument("Number of zombies must be a positive integer");
		}
	}
	catch (const std::invalid_argument &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
		return (1);
	}

	Zombie *horde = zombieHorde(zombiesNb, argv[2]);

	for (int i = 0; i < zombiesNb; i++)
	{
		horde[i].announce();
	}

	delete[] horde;
	return (0);
}
