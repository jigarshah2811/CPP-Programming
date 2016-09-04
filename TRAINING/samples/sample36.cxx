
        // sample36

	#include  <iostream>

	class  base
	{
	protected:
		long int a;
	public:
		base() { std::cout << "in base constructor..." << std::endl;}
		~base() { std::cout << "in base destructor..." << std::endl;}
		void set_a(long int n) { a = n ; }
		long int get_a() { return a; }
	};

	class derived : public base
	{
	private:
		long int b;
	public:
		derived() { std::cout << "in derived constructor..." << std::endl;}
		~derived() { std::cout << "in derived destructor..." << std::endl;}
		void set_b(long int n) { b = n; }
		long int multiply() { return b * a; }
	};

	int main()
	{
	derived  object;

	object.set_a(154);
	object.set_b(155);

	std::cout << "product of two private members is: "
     	     << object.multiply() << std::endl;

	return 0;

	}
