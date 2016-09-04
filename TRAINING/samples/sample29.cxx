        // sample29

	#include  <iostream>

	void func(long int &n); //normally, (int *n)

	int main()

	{
	long int number = 18;

	func(number);

	std::cout << "new value for number is: " << number << std::endl;
	
	return 0;

	}

	void func(long int &n)
	{
	std::cout << "in func, value passed is: " << n << std::endl;

	n = 100;

	}
