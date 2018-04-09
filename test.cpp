#include <iostream>
#include <string>

#define SIZE 3

class Person
{
	private:
		std::string name;
		int age;	

	public:
		Person();
		Person(std::string name, int age);
		void setName(std::string name) {this->name = name;}
		void setAge(int age) {this->age = age;}
		void getName() {std::cout << name << std::endl;}
		void getAge(){std::cout << age << std::endl;}
};

Person::Person()
{
	name = "none";
	age = 0;
}

Person::Person(std::string name, int age)
{
	this->name = name;
	this->age = age;
}

int	main(void)
{
	Person one;
	Person two;

	one.getName();
	one.getAge();

	one.setName("Spencer");
	one.setAge(24);

	one.getName();
	one.getAge();
	two.getName();
	two.getAge();
}
