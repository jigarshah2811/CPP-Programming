        // sample53

	#include <iostream>

	void func(long int a=0, long int b=0);

	void func(long int a, long int b)
	{
	std::cout << "a = " << a << "  " << "b = " << b << std::endl;
	}

	int main()
	{

	func();
	func(15);
	func(45,987);

	return 0;
	}
