
        // sample35

	#include  <iostream>

	class  base
	{
	protected:
		long int a;
	public:
		void set_a(long int n) { a = n ; }
	//	long int get_a() { return a; }
	};

	class derived : private base
	{
	private:
		long int b;
	public:
		void set_b(long int n) { b = n; }
		void set_dummy(long int p) { set_a(p); }
		long int multiply() { return b * a; }
	};

	int main()
	{
	derived  object;

	object.set_dummy(154);
	object.set_b(155);

	std::cout << "product of two private members is: "
     	<< object.multiply() << std::endl;

	return 0;

	}
