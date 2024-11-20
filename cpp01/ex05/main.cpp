
#include "Harl.hpp"

int	main(void)
{
	Harl	harl;

	std::cout << "\n" << std::ends;
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
	harl.complain("POUARFARAGARGH");
	harl.complain("");
	std::cout << "\n" << std::ends;

	return (0);
}