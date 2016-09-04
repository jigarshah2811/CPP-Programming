
        // sample33a

	#include  <iostream>

	class  base
	{
	protected:
		long int a;
	public:
		void set_a(long int n) { a = n ; }
	
	};

	class derived : public base
	{
	private:
		long int b;
	public:
		void set_b(long int n) { b = n; }
		long int multiply() { return b * a; }
	};

	int main()
	{
	derived  object;
	
	object.a=5;
	object.set_a(154);
	object.set_b(155);

	std::cout << "product of two private members is: "
     	     << object.multiply() << std::endl;

	return 0;

	}
