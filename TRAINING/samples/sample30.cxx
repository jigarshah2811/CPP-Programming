
        // sample30

	#include  <iostream>

	class  base
	{
	private:
		long int a;

	public:
		void set_a(long int n) { a = n ; }
		long int get_a() { return a; }
			};

	void display() {std::cout << "friend of base" << std::endl;}

	class derived : public base
	{
	private:
		using base::set_a;
		long int b;
	public:
		void set_b(long int n) { b = n; }
		long int multiply() { return b * get_a(); }
	};

	main()
	{
	derived  object;

	object.set_a(154);
	object.set_b(155);

	
	std::cout << "product of two private members is: "
     	     << object.multiply() << std::endl;

	return 0;

	}
