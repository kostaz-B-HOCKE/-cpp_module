#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact {

private:
	int index;

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
};

#endif
