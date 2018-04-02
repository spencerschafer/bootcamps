#include <iostream>
#include <iomanip>
#include "phonebook.hpp"


//TODO
//1) Handle index input scope
//2) Correct output of search columns

void printContact(Contact contact)
{
	std::cout << "First Name: " << contact.firstName << std::endl;
	std::cout << "Last Name: "<< contact.lastName << std::endl;
	std::cout << "Nickname: "<< contact.nickname << std::endl;
	std::cout << "Login: " << contact.login << std::endl;
	std::cout << "Login: " << contact.login << std::endl;
	std::cout << "Email: " << contact.emailAddress << std::endl;
	std::cout << "Phone Number: " << contact.phoneNumber << std::endl;
	std::cout << "Birthday: " << contact.birthday << std::endl;
	std::cout << "Favourite Meal: " << contact.favouriteMeal << std::endl;
	std::cout << "Underwear Colour" << contact.underwearColour << std::endl;
	std::cout << "Darkest Secret: " << contact.darkestSecret << std::endl;
	std::cout << std::endl;
}

void printShortContact(Contact contact, int index)
{	
	++index;
	/*
	   output not correct
	   std::string temp;

	   std::cout << std::setw(10) << std::right << index << "|";

	   temp = contact.firstName.substr(0, 9) + ".";
	   std::cout << std::setw(10) << std::right << temp << "|";

	   temp = contact.lastName.substr(0, 9) + ".";
	   std::cout << std::setw(10) << std::right << temp << "|";

	   temp = contact.nickname.substr(0, 9) + ".";
	   std::cout << std::setw(10) << std::right << temp << "|";
	   */
	std::cout << std::setw(10) << std::right << index << "|";
	std::cout << std::setw(10) << std::right << contact.firstName << "|";
	std::cout << std::setw(10) << std::right << contact.lastName << "|";
	std::cout << std::setw(10) << std::right << contact.nickname << "|";
	std::cout << std::endl;
}

int isNumber(std::string str)
{
	unsigned long index = 0;

	while (index < str.length())
	{
		if (!isdigit(str[index]))
			return (0);
		++index;
	}
	return (1);
}

void promptForm(Contact *contact)
{
	std::string input;
	std::cout << std::endl;
	std::cout << "Pleaese fill in the following contact details:" << std::endl;

	std::cout << "First Name: ";
	std::cin >> contact->firstName;

	std::cout << "Last Name: ";
	std::cin >> contact->lastName;

	std::cout << "Nickname: ";
	std::cin >> contact->nickname;

	std::cout << "Login: ";
	std::cin >> contact->login;

	std::cout << "Postal Address: ";
	std::cin >> contact->postalAddress;

	std::cout << "Email: ";
	std::cin >> contact->emailAddress;

	std::cout << "Phone Number: ";
	std::cin >> contact->phoneNumber;

	std::cout << "Birthday: ";
	std::cin >> contact->birthday;

	std::cout << "Favourite Meal: ";
	std::cin >> contact->favouriteMeal;

	std::cout << "Underwear Colour: ";
	std::cin >> contact->underwearColour;

	std::cout << "Darkest Secret: ";
	std::cin >> contact->darkestSecret;
	std::cout << std::endl << std::endl;

}

int main(void)
{

	int SIZE = 2;
	Contact contact[SIZE];
	int count = 0;

	while (true)
	{
		//User prompt
		std::string input;
		std::cout << "Choose from the following commands:" << std::endl;

		//User commands
		std::cout << "ADD / SEARCH / EXIT" << std::endl << std::endl;

		//User input
		std::cout << "Enter command:" << std::endl;
		std::cin >> input;

		if (input == "ADD" || input == "A")
		{
			if (count >= SIZE)
			{
				std::cout << std::endl;
				std::cout << "Your phonebook is currently full.";
				std::cout << std::endl << std::endl;
			}
			else
				promptForm(&contact[count]);
			++count;
		}
		else if (input == "SEARCH" || input == "S")
		{
			int index = 0;
			int option;
			std::string input;

			std::cout << std::setw(10) << std::right << "Index" << "|";
			std::cout << std::setw(10) << std::right << "First Name" << "|";
			std::cout << std::setw(10) << std::right << "Last Name" << "|";
			std::cout << std::setw(10) << std::right << "Nickname" << "|";
			std::cout << std::endl;

			while (index < count)
			{
				printShortContact(contact[index], index);
				++index;
			}

			std::cout << std::endl;
			std::cout << "Enter index: " << std::endl;
			std::cin >> input;
			std::cout << std::endl;

			if (isNumber(input))
			{
				//breaks with 99999999999999999999999999
				option = std::stoi(input) - 1;
				if (option >= 0 && option < count)
					printContact(contact[option]);
				else
				{
					std::cout << "Please be more specific with your choice";
					std::cout << std::endl << std::endl;
				}
			}
			else
			{
				std::cout << "Please be more specific with your choice";
				std::cout << std::endl << std::endl;
			}

		}
		else if (input == "EXIT" || input == "E")
			return (0);
		else
		{
			std::cout << std::endl;
			std::cout << "Please be more specific with your choice.";
			std::cout << std::endl << std::endl;
		}
	}
	std::cout << std::endl;
	return (0);
}
