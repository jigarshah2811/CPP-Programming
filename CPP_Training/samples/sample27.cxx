        // sample27

	#include <iostream>
	#include <cstring>

	class class10
	{
	private:
		char str[80];
	public:
	class10() { std::cout << "in constructor for..." << this << std::endl ; }
	~class10() { std::cout << "in destructor for..." << this << std::endl; }

	void show() { std::cout << str << std::endl; }

	void setstr(char *s) { std::strcpy(str,s); }
	};

	class10  input()
	{
	char str[80];
	class10 temp;

	std::cout << "enter a string: ";
	std::cin  >> str;

	temp.setstr(str);
	return temp;
	}

	int main()
	{
	class10 object;

	object=input();

	object.show();

	return 0;
	}
