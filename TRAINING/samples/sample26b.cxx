
        // sample26b

	#include <iostream>

	class class9
	{
	private:
		long int  a;

	public:
	class9(long int number)
	{
		a  = number;
		std::cout << "in constructor for original " << this << std::endl ;
	}
	class9(const class9 &ref,long int number=10)
	{
		a=number;
		std::cout << "in constructor for copy " << this << std::endl;
	}
	~class9() { std::cout << "in destructor for " << this << std::endl; }

	long int get() { return a; }
	};


	long int square(class9 obj)
	{
	return obj.get() * obj.get();
	}

	int main()
	{
	class9 object(10);

	std::cout << "value is "<< square(object) << std::endl;

	return 0;

	}
