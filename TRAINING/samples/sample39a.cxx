
        // sample39a

	#include <iostream>

	class class9
	{
	private:
		long int  a;

	public:
		class9(long int number)
		{
		a  = number;
		std::cout << "in constructor..." << std::endl ;
		}

		~class9() { std::cout << "in destructor..." << std::endl; }

		long int get() { return a; }
	};

	long int square(class9 &&obj)
	{
		return obj.get() * obj.get();
	}

	int main()
	{
	class9 object(10);

	std::cout << "value is "<< square(std::move(object)) << std::endl;

	return 0;

	}
