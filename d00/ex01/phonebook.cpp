#include <iostream>
//std::cout << std::endl;
class Contact
{

	public:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string login;
		std::string postalAddress;
		std::string emailAddress;
		std::string phoneNumber;
		std::string birthday;
		std::string favouriteMeal;
		std::string underwearColour;
		std::string darkestSecret;

		void setFirstName (std::string firstName)
		{
			this->firstName = firstName;
		}

		void setLastName (std::string lastName)
		{
			this->lastName = lastName;
		}

		void setNickname (std::string nickname)
		{
			this->nickname = nickname;
		}

		void setLogin (std::string login)
		{
			this->login = login;
		}

		void setPostalAddress (std::string postalAddress)
		{
			this->postalAddress = postalAddress;
		}

		void setEmailAddress (std::string emailAddress)
		{
			this->emailAddress = emailAddress;
		}

		void setPhoneNumber (std::string phoneNumber)
		{
			this->phoneNumber = phoneNumber;
		}

		void setBirthday (std::string birthday)
		{
			this->birthday = birthday;
		}

		void setFavouriteMeal (std::string favouriteMeal)
		{
			this->favouriteMeal = favouriteMeal;
		}

		void setUnderwearColour (std::string underwearColour)
		{
			this->underwearColour = underwearColour;
		}

		void setDarkestSecret (std::string darkestSecret)
		{
			this->darkestSecret = darkestSecret;
		}

		void printLogin()
		{
			std::cout << "Login: "; std::cout << this->login;
			std::cout << std::endl;
		}

		void printContact()
		{
			std::cout << "First Name: "; std::cout << this->firstName;
			std::cout << std::endl;

			std::cout << "Last Name: "; std::cout << this->lastName;
			std::cout << std::endl;

			std::cout << "Nickname: "; std::cout << this->nickname;
			std::cout << std::endl;

			std::cout << "Login: "; std::cout << this->login;
			std::cout << std::endl;

			std::cout << "Login: "; std::cout << this->login;
			std::cout << std::endl;

			std::cout << "Email: "; std::cout << this->emailAddress;
			std::cout << std::endl;

			std::cout << "Phone Number: "; std::cout << this->phoneNumber;
			std::cout << std::endl;

			std::cout << "Birthday: "; std::cout << this->birthday;
			std::cout << std::endl;

			std::cout << "Favourite Meal: "; std::cout << this->favouriteMeal;
			std::cout << std::endl;

			std::cout << "Underwear Colour"; std::cout << this->underwearColour;
			std::cout << std::endl;

			std::cout << "Darkest Secret: "; std::cout << this->darkestSecret;
			std::cout << std::endl;

		}
};

void promptForm(Contact contact)
{
	std::string input;
	std::cout << std::endl;
	std::cout << "Pleaese fill in the following contact details:";
	std::cout << std::endl;

	std::cout << "First Name: ";
	std::cin >> input; 
	contact.setFirstName(input);

	std::cout << "Last Name: ";
	std::cin >> input; 
	contact.setLastName(input);

	std::cout << "Nickname: ";
	std::cin >> input; 
	contact.setNickname(input);

	std::cout << "Login: ";
	std::cin >> input; 
	contact.setLogin(input);

	std::cout << "Postal Address: ";
	std::cin >> input; 
	contact.setPostalAddress(input);

	std::cout << "Email: ";
	std::cin >> input; 
	contact.setEmailAddress(input);

	std::cout << "Phone Number: ";
	std::cin >> input; 
	contact.setPhoneNumber(input);

	std::cout << "Birthday: ";
	std::cin >> input; 
	contact.setBirthday(input);

	std::cout << "Favourite Meal: ";
	std::cin >> input; 
	contact.setFavouriteMeal(input);

	std::cout << "Underwear Colour: ";
	std::cin >> input;
	contact.setUnderwearColour(input);

	std::cout << "Darkest Secret: ";
	std::cin >> input; 
	contact.setDarkestSecret(input);
}

int main(void)
{

	Contact contact[8];
	int count = 0;

	while (true)
	{
		//User prompt
		std::string input;
		std::cout << "Choose from the following commands:";
		std:: cout << std::endl;

		//User commands
		std::cout << "ADD / SEARCH / EXIT"; std::cout << std::endl;
		std::cout << std::endl;

		//User input
		std::cout << "Enter command:"; std::cout << std::endl;
		std::cin >> input;

		if (input == "ADD" || input == "A")
		{
			++count;
			if (count > 8)
			{
				std::cout << "Your phonebook is currently full.";
			}
			else
			{
				promptForm(contact[count]);
				std::cout << std::endl;

				std::cout << contact[count].firstName;
				std::cout << std::endl;
			}
		}
		else if (input == "SEARCH" || input == "S")
		{
			int index = 0;
			bool found = false;
			std::string input;

			std::cout << std::endl;
			std::cout << "Enter Login details to search: ";
			std::cout << std::endl;

			std::cin >> input;
			std::cout << "Input: [" + input + "]"; std::cout << std::endl;
			while (index < 8)
			{
				std::cout << (contact[index]).login;
				if (contact[index].login.compare(input))
				{
					found = true;
					break;
				}
				++index;
			}
			printf("FOUND: %d\n", found);
			if (found) {
				contact[index].printContact();
				std::cout << "Login1: [" + (contact[index]).login + "]";
				std::cout << std::endl;
				std::cout << "00";
				(contact[index]).printLogin();
			}
			else
			{
				std::cout << std::endl;
				std::cout << "That person does not exist.";
				std::cout << std::endl;
				std::cout << std::endl;
			}
		}
		else if (input == "EXIT" || input == "E")
			return (0);
		else
		{
			std::cout << "Please be more specific with your choice.";
			std::cout << std::endl;
		}
	}
	std::cout << std::endl;
	return (0);
}
