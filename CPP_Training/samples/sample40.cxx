        //sample40

        #include <iostream>

	long int &f();
	long int number;

	int main()
	{
	f() = 100;

	std::cout << "value in number is: " << number << std::endl;
	
	return 0;

	}

	long int &f()
	{ return number; }
