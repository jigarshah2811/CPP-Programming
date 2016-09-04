        //sample41

        #include <iostream>

	class class15
	{
	private:
		long int number;
	public:
		long int &set_number();
		long int get_number();
	};

	long int &class15::set_number()
	{ return number; }

	long int class15::get_number()
	{ return number; }

	int main()
	{

	class15  object;

	object.set_number() = 98;

	std::cout << "value in number is: " << object.get_number() << std::endl;

	return 0;

	}
