#include "carrier_class.hpp"

int	main(void)
{
	Carrier	carrier;
	std::string buff;

	while (1)
	{
		std::cout << ">: ";
		std::getline(std::cin, buff);
		if (buff == "ADD")
			carrier.add_contact();
		else if (buff == "SEARCH")
			carrier.search_contact();
		else if (buff == "exit")
			exit(0);
	}
}
