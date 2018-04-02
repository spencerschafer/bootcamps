#include <iostream>
#include <iomanip>
#include "phonebook.hpp"

//define size of phonebook/array
#define SIZE 2

//TODO
//- Explain in detail TODO's for future use

//Print contact fields
void printContact(Contact contact)
{
	std::cout << std::setw(18) << std::left << "First Name: " << contact.firstName << std::endl;
	std::cout << std::setw(18) << std::left << "Last Name: "<< contact.lastName << std::endl;
	std::cout << std::setw(18) << std::left << "Nickname: "<< contact.nickname << std::endl;
	std::cout << std::setw(18) << std::left << "Login: " << contact.login << std::endl;
	std::cout << std::setw(18) << std::left << "Login: " << contact.login << std::endl;
	std::cout << std::setw(18) << std::left << "Email: " << contact.emailAddress << std::endl;
	std::cout << std::setw(18) << std::left << "Phone Number: " << contact.phoneNumber << std::endl;
	std::cout << std::setw(18) << std::left << "Birthday: " << contact.birthday << std::endl;
	std::cout << std::setw(18) << std::left << "Favourite Meal: " << contact.favouriteMeal << std::endl;
	std::cout << std::setw(18) << std::left << "Underwear Colour: " << contact.underwearColour << std::endl;
	std::cout << std::setw(18) << std::left << "Darkest Secret: " << contact.darkestSecret << std::endl;
	std::cout << std::endl;
}

//trimming string to fit within 10 chars, with final char being a '.'
void printField(std::string field)
{
	if (field.length() > 10)
		std::cout << std::setw(10) << std::right << field.substr(0, 9) + "." << "|";
	else
		std::cout << std::setw(10) << std::right << field << "|";
}

//Print shorthand contact information with relevant format
void printShortContact(Contact contact, int index)
{	
	++index;
	std::cout << std::setw(10) << std::right << index << "|";
	printField(contact.firstName);
	printField(contact.lastName);
	printField(contact.nickname);
	std::cout << std::endl;
}

//Prompt user to fill relevant contact fields
void promptForm(Contact *contact)
{
	std::string input;
	std::cout << std::endl;
	std::cout << "Pleaese fill in the following contact details:" << std::endl;

	std::cout << std::setw(18) << std::left << "First Name: ";
	std::getline(std::cin, contact->firstName);

	std::cout << std::setw(18) << std::left << "Last Name: ";
	std::getline(std::cin, contact->lastName);

	std::cout << std::setw(18) << std::left << "Nickname: ";
	std::getline(std::cin, contact->nickname);

	std::cout << std::setw(18) << std::left << "Login: ";
	std::getline(std::cin, contact->login);

	std::cout << std::setw(18) << std::left << "Postal Address: ";
	std::getline(std::cin, contact->postalAddress);

	std::cout << std::setw(18) << std::left << "Email: ";
	std::getline(std::cin, contact->emailAddress);

	std::cout << std::setw(18) << std::left << "Phone Number: ";
	std::getline(std::cin, contact->phoneNumber);

	std::cout << std::setw(18) << std::left << "Birthday: ";
	std::getline(std::cin, contact->birthday);

	std::cout << std::setw(18) << std::left << "Favourite Meal: ";
	std::getline(std::cin, contact->favouriteMeal);

	std::cout << std::setw(18) << std::left << "Underwear Colour: ";
	std::getline(std::cin, contact->underwearColour);

	std::cout << std::setw(18) << std::left << "Darkest Secret: ";
	std::getline(std::cin, contact->darkestSecret);
	std::cout << std::endl << std::endl;

}

int main(void)
{

	int count = 0;
	Contact contact[SIZE];

	while (true)
	{
		//Prompt user
		std::string input;
		std::cout << "Choose from the following commands:" << std::endl;

		//User commands
		std::cout << "ADD / SEARCH / EXIT" << std::endl << std::endl;

		//User input
		std::cout << "Enter command: ";
		std::getline(std::cin, input);

		if (input == "ADD" || input == "A")
		{
			if (count >= SIZE)
			{
				std::cout << std::endl;
				std::cout << "Your phonebook is currently full.";
				std::cout << std::endl << std::endl;
			}
			else
			{
				//TODO
				promptForm(&contact[count]);
				++count;
			}
		}
		else if (input == "SEARCH" || input == "S")
		{
			//TODO
			if (count > 0)
			{
				//TODO
				int index = 0;
				int option = -1;
				std::string input;

				//Printing column format
				std::cout << std::endl;
				std::cout << std::setw(10) << std::right << "Index" << "|";
				std::cout << std::setw(10) << std::right << "First Name" << "|";
				std::cout << std::setw(10) << std::right << "Last Name" << "|";
				std::cout << std::setw(10) << std::right << "Nickname" << "|";
				std::cout << std::endl;

				//TODO
				//Printing each subsequent short contact
				while (index < count)
				{
					printShortContact(contact[index], index);
					++index;
				}

				//Prompt user
				std::cout << std::endl;
				std::cout << "Enter contact's index: ";
				std::getline(std::cin, input);
				std::cout << std::endl;

				//TODO
				//If option is a valid input, convert input to integer
				if (input.length() == 1 && isdigit(input[0]))
					option = std::stoi(input) - 1;

				//TODO
				//If input was valid: print contact, else option remains -1
				//and prints error
				if (option >= 0 && option < count)
				{
					printContact(contact[option]);
				}
				else
				{
					std::cout << "Please be more specific with your choice";
					std::cout << std::endl << std::endl;
				}
			}
			else
			{
				std::cout << std::endl;
				std::cout << "Your phonebook is currently empty." << std::endl;
				std::cout << "Use the ADD command to add a new contact.";
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
