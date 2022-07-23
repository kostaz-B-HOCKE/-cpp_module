#ifndef CARRIER_CLASS_H
# define CARRIER_CLASS_H

#include <iostream>
#include <ctype.h>
#include <string>
#include <locale>
#include "contact.class.hpp"

class Carrier
{
private:
	Contact contacts[8];
	int	count;
public:
	Carrier();
	virtual ~Carrier();

	void	show_search_header(void);
	void	add_contact(void);
	void	search_contact(void);
};

#endif