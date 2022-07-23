#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

# include <iostream>
# include <iomanip>
# include <string>

class Contact {

private:
	int index;
	static std::string fields_name[11];
	std::string	informations[11];

	enum Field {
		FirstName = 0,
		LastName,
		Nickname,
		Login,
		Address,
		Email,
		Phone,
		Birthday,
		FavoriteMeal,
		UnderwearColor,
		Secret
	};
public:
	Contact();
	virtual ~Contact();	

	bool	set_inform(int index);
	void	display_header(void);
	void	display(void);
};

#endif
