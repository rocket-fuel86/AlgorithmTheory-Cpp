#include <iostream>

int main()
{
	int age = 0;
	double price = 0;

	std::cout << "Enter age: ";
	std::cin >> age;

	if (age > 0 && age < 6) 
	{
		price = 0;
	}
	else if (age >= 6 && age <= 17)
	{
		price = 100;
	}
	else if (age > 17 && age <= 59)
	{
		price = 180;
	}
	else if (age > 59 && age <= 120)
	{
		price = 120;
	}
	else
	{
		std::cout << "Error" << std::endl;
		return 0;
	}

	std::cout << price << std::endl;
}