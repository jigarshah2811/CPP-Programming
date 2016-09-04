        // sample42b

	#include  <iostream>

	class  base
{
	public:
	long int a;
		base(long int n) { a = n ; }
		void common()
			{ std::cout << "in base's version..." << a << std::endl; }
	};

	class derived : public base
	{
	public:
		derived(long int n) : base(n) { }
		 void common() 
			{ std::cout << "in derived's version..." << a*a << std::endl; }
	};

	int main()
	{
	base  *ptr = new derived(10);

	ptr -> common();

	return 0;

	}
