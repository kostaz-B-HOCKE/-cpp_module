#include "carrier_class.hpp"

// bool	Contact::set_inform(int index)
// {
// 	this->index = index;
// 	for (int i = FirstName; i <= Secret; i++)
// 	{
// 		std::cout << this->index << std::endl;
// 	}
// }



int	main(void)
{
	// char buff[512];
	Carrier	carrier;
	std::string buff;

	while (1)
	{
		std::getline(std::cin, buff);
		if (buff == "add")
			carrier::add_void_contact()
		// if (strcmp("search", buff) == 0)
			// std::cout << "y" << std::endl;
		if (strcmp("exit", buff) == 0)
			exit(0);
	}

}
