
        // sample32

	#include  <iostream>

	class  base
	{
	private:
		long int a;
	public:
		void set_a(long int n) { a = n ; }
		long int get_a() { return a; }
	};

	class derived : private base
	{
	private:
		long int b;
	public:
		void set_a_b(long int n,long int m) { set_a(n); b = m; }
		long int multiply() { return b * get_a(); }
	};

	int main()
	{
	derived  object;

	object.set_a_b(154,155);

	std::cout << "product of two private members is: "
     	     << object.multiply() << std::endl;

	return 0;

	}
