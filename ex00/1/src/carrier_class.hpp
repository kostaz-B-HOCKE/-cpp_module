#ifndef CARRIER_CLASS_H
# define CARRIER_CLASS_H

#include <iostream>
#include <iostream>
#include <ctype.h>
#include <string>
#include <locale>
#include "contact.class.hpp"

class Carrier {

private:
	Contact	contacts[8];
	int	count;

public:
	Carrier();
	virtual ~Carrier();
	
	bool	add_void_contact(void);


};

#endif
