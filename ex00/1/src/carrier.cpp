#include "carrier_class.hpp"

Carrier::Carrier(void)
{
	this->count = 0;
}

Carrier::~Carrier(void)
{
}

void Carrier::add_contact(void)
{
	if (this->count == 8)
		std::cout << "# The full" << std::endl;
	else if (this->contacts[this->count].set_inform(this->count + 1))
		this->count++;
}

void	Carrier::show_search_header(void)
{
	std::cout << "|-------------------------------------------|" << std::endl;
	std::cout << "|     Index|First Name| Last Name|  Nickname|" << std::endl;
	std::cout << "|-------------------------------------------|" << std::endl;
	for (int i = 0; i < this->count; i++)
		this->contacts[i].display_header();
	std::cout << "|-------------------------------------------|" << std::endl;
}

void Carrier::search_contact(void)
{
	int index;

	if (this->count == 0)
		std::cout << " w" << std::endl;
	else
	{
		this->show_search_header();
		std::cout << "# Add a contact before searching !" << std::endl;
		while (!(std::cin >> index) || (index < 0 || index > this->count))
		{
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::cout << "# Invalid Index\n~";
		}
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		if (index > 0)
			this->contacts[index - 1].display();
	}
}