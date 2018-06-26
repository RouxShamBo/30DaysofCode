#include <iostream>

using namespace std;

//Class: A blueprint defining the charactaristics and behaviors of an object (things printed out -
// of this mold.)
class Person
{
public:
	int age;
	Person(int initialAge);
	void amIOld();
	void yearPasses();
};

//Class Constructor: Creates an instance of a class. You can have several more of these that build
//different versions of the same type of object. Constructors without parameters are called the default.
Person::Person(int initialAge)
{
	// Add some more code to run some checks on initialAge
		if (initialAge < 0)
		{
			std::cout << "Age is not valide, setting age to 0." << std::endl;
			age = 0;
		}
		else
		{
			age = initialAge;
		}
}

//Method:: A named procedure associated with a class that performs a predefined action.
//AKA 'setters' or 'getters'.
void Person::amIOld()
{
	// Do some computations in here and print out the correct statement to the console 
		if (age < 13)
		{
			std::cout << "You are young" << std::endl;
		}
		else if (age < 18)
		{
			std::cout << "You are a teenager" << std::endl;
		}
		else
		{
			std::cout << "You are old" << std::endl;
		}
}

void Person::yearPasses()
{
	// Increment the age of the person in here
		age++;

}

int main()
{
	int t;
	int age;
	std::cin >> t;
	for (int i = 0; i < t; i++)
	{
		std::cin >> age;
		Person p(age);
		p.amIOld();
		for (int j = 0; j < 3; j++)
		{
			p.yearPasses();
		}
		p.amIOld();

		std::cout << '\n';
	}

	system("pause");
	return 0;
}