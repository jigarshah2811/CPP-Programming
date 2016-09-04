        // sample26d

	#include <iostream>

	class class9
	{
	private:
		long int  a;

	public:
	class9(long int number)
	{
		a  = number;
		std::cout << "in constructor for..." << this << std::endl ;
	}

	class9(const class9 &ref)
	{
		std::cout << "in copy constructor for..." << this << std::endl ;
		std::cout << "value of original a is " << ref.a << std::endl;
		a = ref.a;
	}

	~class9() { std::cout << "in destructor for..." << this << std::endl; }

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
