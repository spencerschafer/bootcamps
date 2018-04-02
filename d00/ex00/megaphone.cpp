#include <iostream>

/* 
 * In the function toUpper, you can do either:
 * 		*str = (*str - 32);
 * 	or 
 * 		(char) *str - 32;
 *
 * 	The key take away here is that without the assignment, it prints an 
 * 	integer, and not a character, as the programme is doing subtraction on
 * 	two integers. If you want to omit assigning a new value then a cast is
 * 	necessary in order to print a character.
 *
 * 	Completed on 31/03/2018 6:25pm
 */

void toUpper(char *str)
{
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			std::cout << (char) (*str - 32);
		else 
			std::cout << *str;
		++str;
	}
}

int main(int argc, char *argv[])
{
	int index;
	char *str;

	index = 1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (index < argc)
	{
		str = argv[index];
		toUpper(str);
		++index;
	}
	std::cout << std::endl;
	return 0;
}
