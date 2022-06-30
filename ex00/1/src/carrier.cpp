#include "carrier_class.hpp"

Carrier::Carrier(void)
{
	std::cout << "конструктор Carrier" << std::endl;
	this->count = 0;
}

Carrier::~Carrier(void) {
	std::cout << "деструктор Carrier" << std::endl;
}

bool	add_void_contact(void) {
	if (count == 8)
	{
		std::cout << "FULL " << std::endl;
		return (0);
	}
	else
	{
		Contact::	
		return (1);
	}
}
