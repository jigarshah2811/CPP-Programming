

        // sample42a

	#include  <iostream>

	class  base
{
	public:
	long int a;
		base(long int n) { a = n ; }
		virtual void common()
			{ std::cout << "in base's version..." << a << std::endl; }
	};

	class derived : virtual public base
	{
	public:
		derived(long int n) : base(n) { }
		virtual void common() 
			{ std::cout << "in derived's version..." << a*a << std::endl; }
	};

	int main()
	{
	base     object1(10);
	derived  object2(10);

	object1.common();
	object2.common();

	return 0;

	}
